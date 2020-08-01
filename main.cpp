#include<bits/stdc++.h>

using namespace std;

vector<int> twosum(vector<int> &nums, int targets) {
  int left = 0, right = nums.size() - 1;
  return {left, right};
}

int main() {

  vector<int>nums = {1,4,3,6,5,8};
  int size = sizeof(arr) / sizeof(arr[0]);
  cout << twosum(nums)[0] << " " << twosum(nums)[1];
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



