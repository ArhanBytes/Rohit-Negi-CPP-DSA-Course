#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  //------ Create & Declare Vectors ------
  vector<int> v;        // Empty vector
  vector<int> v1(5, 1); // Vector with 5 elements, each initialized to 1

  // ------ Size and Capacity ------
  cout << "Size of v: " << v.size() << endl;
  cout << "Capacity of v: " << v.capacity() << endl;

  // Adding elements to vector v
  v.push_back(2);
  v.push_back(3);
  v.push_back(10);

  cout << "Size of v: " << v.size() << endl;
  cout << "Capacity of v: " << v.capacity() << endl;

  // Update value in vector v
  v[1] = 5;

  cout << "Size of v1: " << v1.size() << endl;
  cout << "Capacity of v1: " << v1.capacity() << endl;

  // Adding element to vector v1
  v1.push_back(8);

  cout << "Size of v1: " << v1.size() << endl;
  cout << "Capacity of v1: " << v1.capacity() << endl;

  // ------ Initialization ------
  vector<int> v3 = {1, 2, 3, 5, 7}; // Vector initialized with a list of values

  // ----- Delete Value from Vector -----
  vector<int> vnew;
  vnew.push_back(41);
  vnew.push_back(42);
  vnew.push_back(43);
  vnew.push_back(64);
  vnew.push_back(24);
  vnew.pop_back(); // Remove last element

  cout << "Size of vnew: " << vnew.size() << endl;
  cout << "Capacity of vnew: " << vnew.capacity() << endl;

  // Erase element at index 1
  vnew.erase(vnew.begin() + 1);

  cout << "Size of vnew: " << vnew.size() << endl;
  cout << "Capacity of vnew: " << vnew.capacity() << endl;

  // Print elements of vnew
  for (int i = 0; i < vnew.size(); i++)
    cout << vnew[i] << " ";
  cout << endl;

  // ------ Insert Value ------
  vnew.insert(vnew.begin() + 1, 50); // Insert 50 at index 1

  // Print elements of vnew
  for (int i = 0; i < vnew.size(); i++)
    cout << vnew[i] << " ";
  cout << endl;

  // Update value at index 1
  vnew[1] = 37;

  // ------ Remove All Elements ------
  vnew.clear();
  cout << "Size of vnew: " << vnew.size() << endl;
  cout << "Capacity of vnew: " << vnew.capacity() << endl;

  // -------- Access Front and Last Elements --------
  vector<int> arr;
  arr.push_back(2);
  arr.push_back(12);
  arr.push_back(21);
  arr.push_back(122);

  cout << "First element: " << arr[0] << " " << arr.front() << endl;
  cout << "Last Element: " << arr[arr.size() - 1] << " " << arr.back() << endl;

  // ------- Copy from One Vector to Another -------
  vector<int> a;
  a = arr;

  cout << "Size of a: " << a.size() << endl;

  // ----- Another Way of Printing Vector -----
  for (auto it = arr.begin(); it != arr.end(); it++)
    cout << *it << " ";
  cout << endl;

  for (auto i : arr)
    cout << i << " ";
  cout << endl;

  //------- Sorting --------
  vector<int> ans;
  ans.push_back(5);
  ans.push_back(235);
  ans.push_back(15);
  ans.push_back(54);
  ans.push_back(125);

  // Sort in increasing order
  sort(ans.begin(), ans.end());

  for (auto i : ans)
    cout << i << " ";
  cout << endl;

  /*
  // Sort in decreasing order
  // Method 1:
  sort(ans.begin(), ans.end(), greater<int>());

  for (auto i : ans)
      cout << i << " ";
  cout << endl;

  // Method 2:
  sort(ans.rbegin(), ans.rend());

  for (auto i : ans)
      cout << i << " ";
  cout << endl;
  */

  //------- Search in Binary Search ---------
  cout << "Is 55 present? " << binary_search(ans.begin(), ans.end(), 55) << endl;

  // To get the index in binary search
  cout << "Index of 54: " << find(ans.begin(), ans.end(), 54) - ans.begin() << endl;

  return 0;
}
