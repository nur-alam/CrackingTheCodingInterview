// https://www.geeksforgeeks.org/k-th-missing-element-in-an-unsorted-array/
// https://www.geeksforgeeks.org/find-the-element-that-appears-once-in-a-sorted-array/
// https://www.geeksforgeeks.org/last-duplicate-element-sorted-array/
// https://www.geeksforgeeks.org/search-an-element-in-a-sorted-and-pivoted-array/
//https://www.geeksforgeeks.org/find-minimum-element-in-a-sorted-and-rotated-array/
//https://www.geeksforgeeks.org/given-a-sorted-and-rotated-array-find-if-there-is-a-pair-with-a-given-sum/
//https://www.geeksforgeeks.org/check-if-an-array-is-sorted-and-rotated/
//https://www.geeksforgeeks.org/sort-rotated-sorted-array/


// https://www.geeksforgeeks.org/find-the-missing-number-in-a-sorted-array/
// https://www.geeksforgeeks.org/find-the-element-that-appears-once-in-a-sorted-array/

// Find the element that appears once in a sorted array
// Given a sorted array in which all elements appear twice (one after one) and one element appears only once. Find that element in O(log n) complexity.
// https://www.geeksforgeeks.org/find-element-appears-array-every-element-appears-twice/


#include <bits/stdc++.h> 
using namespace std; 

vector<int> findSubarray(int a[], int k, int n) 
{ 
    vector<vector<int>> vec;
    for(int i = 0; i <= n - k; i++) {
        vector<int> temp;
        for(int j = i; j < i + k; j++)
            temp.push_back(a[j]);
        vec.push_back(temp);
    }
    sort(vec.begin(), vec.end());
    return vec[vec.size() - 1];
} 
  
// Driver code 
int main() 
{ 
    int a[] = { 1, 4, 3, 2, 5 }; 
    int k = 4; 
    int n = sizeof(a) / sizeof(a[0]); 
    vector<int> ans = findSubarray(a, k, n); 
    for (auto it : ans) 
        cout << it << " "; 
} 