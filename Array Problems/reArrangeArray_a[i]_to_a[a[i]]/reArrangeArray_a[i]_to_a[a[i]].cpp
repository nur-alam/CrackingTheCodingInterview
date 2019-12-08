// #include <bits/stdc++.h>
// using namespace std;

// void printArr(int arr[], int n) {
//   for(int i = 0; i < n; i++) {
//     cout << arr[i] << " ";
//   }
//   cout << endl;
// }

// void rearrange(int arr[], int n) {
//   for(int i = 0; i < n; i++)
//     arr[i] += (arr[arr[i]]%n)*n;
//   for(int i = 0; i < n; i++)
//     arr[i] /= n;
// }

// int main() {
//   int arr[] = {3, 2, 0, 1};
//   int size = sizeof(arr) / sizeof(arr[0]);
//   cout << "given array is \n";
//   printArr(arr, size);
//   rearrange(arr, size);
//   cout << "Modified array is \n";
//   printArr(arr, size);
//   return 0;
// }