// #include<bits/stdc++.h>

// using namespace std;

// int Bns_First_Occurance(int arr[], int size, int item) {
//     int left = 0, right = size - 1, mid, result = -1;
//     while(left <= right) {
//         mid = (left + right) / 2;
//         if(arr[mid] == item) {
//             result = mid;
//             right = mid - 1;
//             //left = mid + 1;
//         }else if(item < arr[mid]) {
//             right = mid - 1;
//         }else {
//             left = mid + 1;
//         }
//     }
//     return result;
// }

// int Bns_Last_Occurance(int arr[], int size, int item) {
//     int left = 0, right = size - 1, mid, result = -1;
//     while(left <= right) {
//         mid = (left + right) / 2;
//         if(arr[mid] == item) {
//             result = mid;
//             left = mid + 1;
//         }else if(item < arr[mid]) {
//             right = mid - 1;
//         }else{
//             left = mid + 1;
//         }
//     }
//     return result;
// }

// int Count_Occurrence(int arr[], int size, int item) {
//     int firstIndex = Bns_First_Occurance(arr, size, item);
//     int lastIndex = Bns_Last_Occurance(arr, size, item);
//     return lastIndex - firstIndex + 1;
// }

// // Driver program 
// int main() 
// { 
//     int arr[] = {1, 2, 2, 2, 2, 3, 4, 7, 8, 8}; 
//     int size = sizeof(arr)/sizeof(int); 
  
//     int item = 1; 
//     cout << Count_Occurrence(arr, size, item) << endl;
  
//     return 0; 
// } 