// https://www.geeksforgeeks.org/k-th-missing-element-in-an-unsorted-array/
// https://www.geeksforgeeks.org/find-the-element-that-appears-once-in-a-sorted-array/
// https://www.geeksforgeeks.org/last-duplicate-element-sorted-array/
// https://www.geeksforgeeks.org/search-an-element-in-a-sorted-and-pivoted-array/
//https://www.geeksforgeeks.org/find-minimum-element-in-a-sorted-and-rotated-array/
//https://www.geeksforgeeksorg/given-a-sorted-and-rotated-array-find-if-there-is-a-pair-with-a-given-sum/
//https://www.geeksforgeeks.org/check-if-an-array-is-sorted-and-rotated/
//https://www.geeksforgeeks.org/sort-rotated-sorted-array/


// https://www.geeksforgeeks.org/find-the-missing-number-in-a-sorted-array/
// https://www.geeksforgeeks.org/find-the-element-that-appears-once-in-a-sorted-array/

// Find the element that appears once in a sorted array
// Given a sorted array in which all elements appear twice (one after one) and one element appears only once. Find that element in O(log n) complexity.
// https://www.geeksforgeeks.org/find-element-appears-array-every-element-appears-twice/
// https://www.geeksforgeeks.org/find-element-array-sum-left-array-equal-sum-right-array/
// https://www.geeksforgeeks.org/reorder-a-array-according-to-given-indexes/


#include <bits/stdc++.h> 
using namespace std; 



void printArr(int arr[], int size) {
    for(int i = 0; i < size; i++) 
        cout << arr[i] << " ";
    cout << endl;
}

// with single traversal
void pushZeroToEnd(int arr[], int size) {
    int count = 0;
    for(int i = 0; i < size; i++) 
        if(arr[i] != 0) 
            swap(arr[count++], arr[i]);
    printArr(arr, size);
}
  
// Driver code 
int main() 
{ 
    int arr[] = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    pushZeroToEnd(arr, size);
    printArr(arr, size);
} 



// class LRUCache {
//   public:
//       LRUCache(int capacity) {
//           cap = capacity;
//       }
//       int get(int key) {
//          return map[key];
//       }
//       void put(int key, int value) {
//          map[key] = key;
//       }
//   private:
//       int cap;
//       unordered_map<int,int> map;
// };

// int main() { 

//   LRUCache cache(2);
//   cache.put(1,3);
//   cache.put(3,3);
//   cout << (cache.get(3))->first << (cache.get(3))->second;

//   return 0;
// }