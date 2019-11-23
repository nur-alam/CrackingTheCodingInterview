// #include<bits/stdc++.h>

// using namespace std;

// double findMean(int a[], int size) {
//   int sum = 0;
//   for(int i = 0; i < size; i++)
//     sum += a[i];
//   return (double)sum / (double)size;
// }

// double findMedian(int a[], int size) {
//   sort(a, a + size);
//   if(size % 2 != 0) //if array size is odd
//     return (double)a[size/2];
//   return (double)( a[(size-1)/2] + a[size/2] ) / 2.0;
// }

// int main() {
//   int a[] = { 1, 2, 3, 4 };
//   int size = sizeof(a)/sizeof(a[0]);
//   cout << "Mean = " << findMean(a, size) << endl;
//   cout << "Mean = " << findMedian(a, size) << endl;
//   return 0;
// }