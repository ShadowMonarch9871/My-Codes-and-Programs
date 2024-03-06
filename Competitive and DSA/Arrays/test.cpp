#include <bits/stdc++.h>
using namespace std;
class Searching
{
public:
	int binary_search(vector<int> array, int key)
	{
		int low = 0;
		int high = array.size();
		while (low <= high)
		{
			int mid = floor((low + high) / 2);
			if (key == array[mid])
				return mid;
			else if (key < array[mid])
				high = mid - 1;
			else
				low = mid + 1;
		}
		return -1;
	}
	int recursive_binary_search(int low, int high, int key, vector<int> array)
	{
		int mid;
		if (low <= high)
		{
			mid = floor((low + high) / 2);
			if (array[mid] == key)
				return mid;
			else if (array[mid] < key)
				return recursive_binary_search(mid + 1, high, key, array);
			else
				return recursive_binary_search(low, mid - 1, key, array);
		}
		return -1;
	}
};

class Sorting
{
private:
	void swap(int &num1, int &num2)
	{
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}

public:
	void selectionSort(vector<int> &array)
	{
		int size = array.size();
		for (int i = 0; i < size; i++)
		{
			int min_index = i;

			for (int j = i; j < size; j++)
			{
				if (array[j] < array[min_index])
					min_index = j;
			}
			swap(array[min_index], array[i]);
		}
	}
	void bubbleSort(vector<int> &array)
	{
		int size = array.size();
		int didSwap = 0;
		for (int i = 0; i < size; i++)
		{

			for (int j = 0; j < size - i - 1; j++)
			{
				if (array[j] > array[j + 1])
					swap(array[j], array[j + 1]);
				didSwap++;
			}
			if (didSwap == 0)
				break; // To optimize the code when all elements are sorted O(n)
		}
	}
	void insertionSort(vector<int> &array)
	{
		int size = array.size();
		for (int j = 1; j > 0; j--)
		{
			for (int i = 1; i < size; i++)
			{
				if (array[j] < array[j - 1])
					swap(array[j], array[j - 1]);
				else
					break;
			}
		}
	}
	int partition(vector<int> &array, int low, int high)
	{
		int size = array.size();
		int pivot = array[low];
		int i, j;
		i = low;
		j = high;
		while (j >= i)
		{
			while ((array[i] <= pivot) && (j >= i))
			{
				i++;
			}
			while ((array[j] > pivot) && (j >= i))
			{
				j--;
			}
			if (i < j)
			{
				swap(array[i], array[j]);
			}
		}
		swap(array[j], array[low]);
		return j;
	}

	void quickSort(vector<int> &array, int low, int high)
	{
		int j;
		if (low < high)
		{
			j = partition(array, low, high);
			quickSort(array, low, j - 1);
			quickSort(array, j + 1, high);
		}
	}
	void merge(vector<int> &array, int low, int mid, int high)
	{
		vector<int> temp(high - low + 1);
		int k = 0;
		int left = low;
		int right = mid + 1;
		while (left <= mid && right <= high)
		{
			if (array[left] < array[right])
			{
				temp[k] = array[left];
				left++;
				k++;
			}
			else
			{
				temp[k] = array[right];
				right++;
				k++;
			}
		}
		while (left <= mid)
		{
			temp[k] = array[left];
			left++;
			k++;
		}
		while (right <= high)
		{
			temp[k] = array[right];
			right++;
			k++;
		}
		for (int i = low; i <= high; i++)
		{
			array[i] = temp[i - low];
		}
	}
	void mergeSort(vector<int> &array, int low, int high)
	{
		if (low < high)
		{
			int mid = (low + high) / 2;

			mergeSort(array, low, mid);
			mergeSort(array, mid + 1, high);
			merge(array, low, mid, high);
		}
	}
};

int main()
{

	int result;
	vector<int> array = {8, 2, 79, 3, 2, 6768};
	int size = array.size();
	Sorting solution;

	solution.mergeSort(array, 0, size - 1);
	for (auto it : array)
	{
		cout << it << " ";
	}
	// int n;
	// cin >> n;
	// cout << n;

	return 0;
}
