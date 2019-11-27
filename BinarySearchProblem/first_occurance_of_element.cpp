// #include<bits/stdc++.h>

// using namespace std;

// int Bns_First_Occurance(int arr[], int size, int item) {
//     int left = 0, right = size - 1, mid, result = -1;
//     while(left <= right) {
//         mid = (left + right) / 2;
//         if(arr[mid] == item) {
//             result = mid;
//             //right = mid - 1;
//             left = mid + 1;
//         }else if(item < arr[mid]) {
//             right = mid - 1;
//         }else {
//             left = mid + 1;
//         }
//     }
//     return result;
// }

// // Driver program 
// int main() 
// { 
//     int arr[] = {1, 2, 2, 2, 2, 3, 4, 7, 8, 8}; 
//     int size = sizeof(arr)/sizeof(int); 
  
//     int item = 2; 
//     printf("First Occurrence = %d\t", 
//                      Bns_First_Occurance(arr, size, item));
  
//     return 0; 
// } 