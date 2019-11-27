// #include<bits/stdc++.h>

// using namespace std;

// int FindRotation(int arr[], int size) {
//     int left = 0, right = size - 1;
//     while(left <= right) {
//         if(arr[left] <= arr[right]) return left;
//         int mid = (left + right) / 2;
//         int next = (mid + 1) % size;
//         int prev = (mid - 1 + size) % size;
//         if(arr[mid] <= arr[next] && arr[mid] <= arr[prev]) 
//             return mid;
//         else if(arr[mid] <= arr[right]) 
//             right = mid - 1;
//         else if(arr[mid] >= arr[left]) 
//             left = mid + 1;
//     }
//     return -1;
// }

// // Driver program 
// int main() 
// { 
//     int arr[] = {11, 12, 15, 18, 2, 5, 6, 8}; 
//     int size = sizeof(arr)/sizeof(int); 
  
//     int item = 1; 
//     cout << FindRotation(arr, size) << endl;
  
//     return 0; 
// }