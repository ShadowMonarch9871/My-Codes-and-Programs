#include <bits/stdc++.h>
using namespace std;

void Pair()
{
   pair<int, int> p = {1, 3};
   cout << p.first << " " << p.second;
   cout << endl;
   pair<int, pair<char, int>> a = {1, {'a', 4}};
   cout << a.first << " " << a.second.first << endl;
   pair<int, int> b[] = {{1, 2}, {3, 4}, {5, 6}};
   cout << b[0].second;
}

void Vector()
{
   vector<int> a;
   a.push_back(1);
   a.push_back(2);
   a.emplace_back(3);
   a.emplace_back(4);
   cout << a[3] << endl;
   vector<pair<int, int>> b;
   b.emplace_back(1, 2);
   b.emplace_back(9, 10);
   cout << b[0].first << endl;
   cout << b[1].second << endl;
   vector<int> c(5, 100);
   cout << c[3] << endl;
   vector<int> d(c); // Copy of Vector c is stored in vector d.
   cout << "Printing Vector Using Iterator:" << endl;
   for (vector<int>::iterator it = a.begin(); it != a.end(); it++)
   {
      cout << *(it) << " ";
   }
   cout << endl;
   cout << "Printing the same vector by using auto to assign the iterator" << endl;
   for (auto it = a.begin(); it != a.end(); it++)
   {
      cout << *(it) << " ";
   }
   cout << endl;
   cout << "Now printing the same vector by using auto to directly assign the data instead of assigning an iterator" << endl;
   for (auto it : a)
   {
      cout << it << " ";
   }
   cout << endl;
   vector<int>::iterator it2 = a.end();
   cout << *(it2 - 1) << endl;
   ;
   // Erasing the Vector a.
   a.erase(a.begin() + 1);
   for (auto it : a)
   {
      cout << it << " ";
   }
   cout << endl;
   a.erase(a.begin(), a.end());
   a.emplace_back(10);
   a.emplace_back(20);
   a.emplace_back(30);
   for (auto it : a)
   {
      cout << it << " ";
   }
   cout << endl;
   a.insert(a.begin(), 90);
   a.insert(a.begin() + 2, 5, 4);
   for (auto it : a)
   {
      cout << it << " ";
   }
   a.pop_back();
   cout << endl;
   for (auto it : a)
   {
      cout << it << " ";
   }
   a.clear();
   cout << endl
        << a.empty();
}

void List()
{
   // A List doesn't allow random access like vector which uses [] opereator.
   list<int> ls;
   ls.emplace_back(1);
   ls.emplace_back(2);
   ls.emplace_back(3);
   cout << "Printing the List" << endl;
   for (auto i : ls)
   {
      cout << i << " ";
   }
   cout << endl;
   cout << "Since List is nearly same as Vector and the only difference is that it uses double linked list so that we can directly insert elements and delete at fornt without using the v.insert() function,as it's take more time complexity." << endl;
   ;
   ls.emplace_front(100);

   for (list<int>::iterator it = ls.begin(); it != ls.end(); it++)
   {
      cout << *(it) << " ";
   }
   auto a = ls.back();
   cout << endl
      << a;
}

// deque<int> a is another container which is almost same as list and vector. It supports insertion at front like List and allow random access like a vector.
// Vector allows for fast random access but insert() is costly. List allows for efficient insertion and deletion at any point at the cost of random access(it's not contagious) by using insert(). Deque allows for efficeint insertion and deletion at beggining and end, but accessing elements in middle is not efficient as vector while front() and back() can be accessed efficiently.

void Stack()
{
   stack<int> a;
   a.push(1);
   a.push(10);
   a.emplace(50);
   cout << a.size() << endl;
   cout << a.top() << endl;
   a.pop();
   cout << a.top() << endl;
   cout << a.empty() << endl;
   stack<int> st1, st2;
   st1.swap(a);
   cout << st1.top();
}

void Queue()
{
   queue<int> a;
   a.push(1);
   a.push(2);
   a.emplace(3);
   cout << a.front() << endl; // 1,2,3
   a.pop();
   cout << a.front() << endl; // 2,3
   a.emplace(1);
   cout << a.back() << endl; // 2,3,1
   a.back() = a.back() + 99;
   cout << a.back() << endl; // 2,3,100
   a.front() = a.front() + 22;
   cout << a.front() << endl; // 24,3,100
   // Rest functions size(),swap(),empty() are same as stack.
   // Stack access elements for deletion only at top while queue access elements for deletion at front.Also we can access both front and back in queue.
}

void Priority()
{
   priority_queue<int> a;
   a.emplace(1);
   a.emplace(100);
   cout << a.top() << endl; // 1,100
   a.emplace(12);           // 1,12,100
   cout << a.top() << endl;
   a.emplace(2300);
   a.emplace(2);
   a.emplace(123);
   cout << a.top(); // 1,2,12,100,123,2300
   a.pop();

   // Priority Queue stores largest number at the end (top). Rest operations are same as stack.

   // Min Heap
   priority_queue<int, vector<int>, greater<int>> b;
   b.emplace(10);
   b.emplace(23);
   b.emplace(1);
   b.emplace(2);
   b.emplace(3);
   cout << endl
        << b.top();
}

void Set()
{

   set<int> a;
   a.emplace(1);
   a.emplace(21);
   a.emplace(2);
   a.emplace(2);
   a.emplace(5);
   a.insert(3);
   a.insert(4);
   for (auto it : a)
   {
      cout << it << " ";
   }
   set<int>::iterator it2 = a.find(99);
   cout << endl
        << *(it2) << endl;
   a.erase(3);
   auto it1 = a.find(4);
   a.erase(it1);
   for (auto it = a.begin(); it != a.end(); it++)
   {
      cout << *(it) << " ";
   }
   auto it = a.find(4);
   int cnt = a.count(1);
   int cnt1 = a.count(99);
   cout << endl
        << cnt << " " << cnt1 << endl;
   it1 = a.find(1);
   it2 = a.find(5);
   a.erase(it1, it2);
   for (auto it : a)
   {
      cout << it << " ";
   }
   // Other functions same as vector
}

void Multiset()
{
   multiset<int> a;
   a.emplace(1);
   a.emplace(2);
   a.emplace(1);
   a.emplace(2);
   a.emplace(3);
   for (auto it : a)
   {
      cout << it << " ";
   }
   a.erase(1);
   a.emplace(2);
   a.emplace(2);
   cout << endl;
   for (multiset<int>::iterator it = a.begin(); it != a.end(); it++)
   {
      cout << *(it) << " ";
   }
   a.emplace(1);
   a.emplace(1);
   a.erase(a.find(1));
   auto it1 = a.find(2);
   advance(it1, 2);
   a.erase(a.find(2), it1);
   cout << endl;
   for (auto it : a)
   {
      cout << it << " ";
   }
}

void Unorder()
{
   unordered_set<int> n;
   // Not Sorted but is Unique. Lower and Upper Bounds operations are not supported,rest operations are
   //  same .Time complexity is reduced to O(1) which was O(log(n)) before. Worst case O(n).
}

void Map()
{
   map<int, int> a;
   map<int, pair<int, int>> b;
   map<pair<int, int>, int> c;
   a[1] = 2;
   a.emplace(3, 6);
   a.insert({2, 4});
   cout << a[1] << endl;
   a.emplace(3, 2); // Doesn't change the value when inserted.
   cout << a[2] << endl;
   cout << a[3] << endl;
   a[1] = 99999;
   cout << a[1] << endl;
   for (auto it : a)
   {
      cout << it.first << "," << it.second << " ";
   }
   // Stores in sorted order of Keys.
   auto it1 = a.find(2);
   cout << endl
        << it1->second;
   auto it2 = a.find(5);
   cout << endl
        << it2->first; // Points after the map
   auto it3 = a.lower_bound(2);
   auto it4 = a.upper_bound(2);
   cout << endl
        << it4->first;
   // Rest erase,size,empty,swap are same.
}

void Multimap()
{
   multimap<int, int> a;
   // Same as map but supports multiple duplicate keys arranged in order.
   // a[key] can't be used.
}

void UnorderedMap()
{
   // Unique keys but not ordered.O(1), worst case O(n).
}

void extra()
{
   int a[5];
   sort(a, a + 4); // or sort(a,a+n) Starting and end iterators
   sort(a + 1, a + 3);
   vector<int> v;
   pair<int, int> p[] = {{1, 1}, {2, 34}, {3, 1}};
   sort(v.begin(), v.end());
   sort(a, a + 4, greater<int>());

   // for sorting in a way required by you use
   sort(p, p + 3, comp); // Comp is a boolean comparator.
   // Sorting in ascending based on second value.
   // If same second then descending sorting based on first value.
   int num = 12;
   int n1 = __builtin_popcount(num); // Return the Number of sets(1) bits in binary representation.
   long long num1 = 2341341234243224;
   int n2 = __builtin_popcountll(num1);
   string str = "123231";
   sort(str.begin(), str.end()); // Sorting is necessary for permutation
   do
   {
      cout << str << endl;
   } while (next_permutation(str.begin(), str.end()));

   int max = *(max_element(a, a + 3)); // Gives address * gives value
}

bool comp(pair<int, int> p1, pair<int, int> p2)
{
   if (p1.second < p2.second)
      return true;
   if (p2.second < p1.second)
      return false;
   if (p1.first < p2.first)
      return false;
   return true;
}

int main()
{
   // Pair();
   // Vector();
   // List();
   // Stack();
   // Queue();
   // Priority();
   // Set();
   // Multiset();
   // Unorder();
   // Map();
   // Multimap();
   // UnorderedMap();
   return 0;
}