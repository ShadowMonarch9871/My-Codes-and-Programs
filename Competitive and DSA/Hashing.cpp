#include <bits/stdc++.h>
using namespace std;

// vector<int> hash_int(int size, int arr[])
// {
//     vector<int>hash_int[1000000] = {0};
//     for (int i = 0; i < size; i++)
//     {
//         hash_int[arr[i]]++;
//     }
//     return hash_int;
// }

// int main()
// {
//     int size;
//     cin >> size;
//     char arr[size];
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
//     int hash_int[100000] = {0};
//     int hash_char[128] = {0};

//     // for (int i = 0; i < size; i++)
//     // {
//     //     hash_char[arr[i]-'a']++;
//     // }

//     // Map stores only key which are in the array so more memory efficient in this case O(log n)
//     map<int, int> Hashmap;
//     map<char, int> Hashmap_for_char;

//     // Use Unordered Map it has O(1) and worst case O(n) only use map when time limit exceeds i.e worst case
//     for (int i = 0; i < size; i++)
//     {
//         Hashmap_for_char[arr[i]]++;
//     }
//     for (auto it : Hashmap_for_char)
//     {
//         cout << it.first << " " << it.second << endl;
//     }

//     int querries;
//     cin >> querries;
//     char key;
//     while (querries > 0)
//     {
//         cin >> key;
//         cout << Hashmap_for_char[key] << endl;
//         querries--;
//     }
//     return 0;
// }
// void frequency_count(vector<int> &array, int size, int n)
// {
//     map<int, int> Hashmap;
//     for (int i = 1; i <= size; i++)
//     {
//         Hashmap[i] = 0;
//     }
//     for (int i = 0; i < size; i++)
//     {
//         Hashmap[array[i]]++;
//     }
//     for (int i=0;i<size;i++)
//     {
//         array[i]=Hashmap[i+1];
//     }
// }

void top_k_frequent_element(vector<int> &array, int number_of_elements)
{
    map<int, int> Hashmap;
    int size = array.size();
    for (int i = 1; i <= size; i++)
    {
        Hashmap[i] = 0;
    }
    for (int i = 0; i < size; i++)
    {
        Hashmap[array[i]]++;
    }
    for (int i = 0; i < size; i++)
    {
        array[i] = Hashmap[i + 1];
    }
}
int maxfrequency(vector<int> &arrray, int no_of_operations)
{
}
int sliding_window(vector<int> &array, int size, int window_size)
{
    int minSum = 0;
    int temp;
    for (int i = 0; i < window_size; i++)
    {
        minSum = array[i] + minSum;
    }
    temp = minSum;
    for (int i = 1; i <= size-window_size; i++)
    {
        minSum = minSum - array[i - 1] + array[i + window_size - 1];

        if (temp > minSum)
        {
            temp = minSum;
        }
    }
    cout << temp;
    return 0;
}

int main()
{
    int size;
    int element;
    cin >> size;
    if(5>2){
        if(2<1){
            
        }
    }
    vector<int> array;
    for (int i = 0; i < size; i++)
    {
        cin >> element;
        array.emplace_back(element);
    }
    // top_k_frequent_element(array, size);
    // for (int i = 0; i < size; i++)
    // {
    //     cout << array[i] << " ";
    // }
    int window_size;
    cin >> window_size;
    sliding_window(array, size, window_size);

    return 0;
}