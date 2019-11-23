// #include<bits/stdc++.h> 
// //anagram
// // https://www.geeksforgeeks.org/array-rotation/
// using namespace std;

// void prArr(int arr[], int n) {
//   for(int i = 0; i < n; i++) 
//     cout << arr[i] << " ";
// }

// void leftRotateByOne(int arr[], int n) {
//   int temp = arr[0], i;
//   for(i = 0; i < n - 1; i++) {
//     arr[i] = arr[i + 1];
//   }
//   arr[i] = temp;
// }

// void leftRotate(int arr[], int d, int n) {
//   for(int i = 0; i < d; i++)
//     leftRotateByOne(arr, n);
// }

// int main() {

//   //int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
//   int arr[] = {1, 2, 3, 4, 5};
//   int n = sizeof(arr) / sizeof(arr[0]);
//   //leftRotate(arr, 2, n);
//   // cout << gcd(12,5) << endl;
//   leftRotate(arr, 2, n);
//   //prArr(arr, n);

//   return 0;

// }