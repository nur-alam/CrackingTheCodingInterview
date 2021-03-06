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


// lrucache with cpp vector list
// https://leetcode.com/problems/lru-cache/discuss/324004/Cpp-solution-with-vector-and-list

// wed, wednesday, 12 february, 2020
// https://www.geeksforgeeks.org/count-number-of-occurrences-or-frequency-in-a-sorted-array/
// https://www.geeksforgeeks.org/find-a-repeating-and-a-missing-number/





#include<bits/stdc++.h>

using namespace std;

class LRUCache {
  public:
      LRUCache(int capacity) {
          cap = capacity;
      }
      void printMap() {
        // for(auto i=map.begin(); i!=map.end(); i++) {
        //   cout << i->first << "=>" << i->second << " ";
        // }
        for(auto i : map) {
          cout << i.first << "=>" << i.second << " ";
        }
        cout << endl;
      }
      int get(int key) {
         if(map.find(key) == map.end()) {
           return -1;
         }
         int v = map[key];
         map.erase(key);
         map[key] = v;
         return map[key];
      }
      void put(int key, int value) {
        // if(map.find(key) != map.end()) {
        //   map.erase(key);
        // }
        map[key] = value;
        printMap();
      }
  private:
      int cap;
      unordered_map<int,int> map;
      //unordered_map<int, int>::iterator itr;
};

int main() { 

  LRUCache* cache = new LRUCache(2);
  cache->put(1,3);
  cache->put(3,32);
  cache->put(2,22);
  // int param = cache->get(3);
  // cout << param << endl;
  // cout << cache->get(3);
  //cout << (cache.get(3))->first << (cache.get(3))->second;

  return 0;
}







// void printArr(int arr[], int size) {
//     for(int i = 0; i < size; i++) 
//         cout << arr[i] << " ";
//     cout << endl;
// }

// // with single traversal
// void pushZeroToEnd(int arr[], int size) {
//     int count = 0;
//     for(int i = 0; i < size; i++) 
//         if(arr[i] != 0) 
//             swap(arr[count++], arr[i]);
//     printArr(arr, size);
// }
  
// // Driver code 
// int main() 
// { 
//     int arr[] = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     pushZeroToEnd(arr, size);
//     printArr(arr, size);
// } 



