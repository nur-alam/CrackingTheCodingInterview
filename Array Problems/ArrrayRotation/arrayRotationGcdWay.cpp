// #include<bits/stdc++.h> 

// using namespace std;

// void prArr(int arr[], int n) {
//   for(int i = 0; i < n; i++) 
//     cout << arr[i] << " ";
// }

// int gcd(int a, int b) {
//   if(b == 0)
//     return a;
//   else
//     return gcd(b, a%b);
//   return b ? gcd(b, a%b) : a; 
// }


// void leftRotate(int arr[], int d, int n) 
// { 
//     int g_c_d = gcd(d, n);
//     for (int i = 0; i < g_c_d; i++) { 
//         int temp = arr[i]; 
//         int j = i; 
//         while (1) { 
//             int k = j + d; 
//             if (k >= n) 
//                 k = k - n; 
//             int k = (j + d) % n;
//             if (k == i) {
//               //cout << "k=" << k << " i=" << i << endl;
//               break; 
//             }
//             //cout << "i=" << i << " j=" << j << " k=" << k << endl;
//             arr[j] = arr[k]; 
//             j = k; 
//             prArr(arr, n); cout << endl;
//         } 
//         arr[j] = temp;
//         //prArr(arr, n); cout << endl << i << endl;
//     } 
// } 

// int main() {

//   //int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
//   int arr[] = {1, 2, 3, 4, 5};
//   int n = sizeof(arr) / sizeof(arr[0]);
//   //leftRotate(arr, 2, n);
//   // cout << gcd(12,5) << endl;
//   leftRotate(arr, 2, n);
//   prArr(arr, n);

//   return 0;

// }