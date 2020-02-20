#include<bits/stdc++.h>

using namespace std;

// fibo series with dynamic programming
// int arr[100];
// int dynamo_fibo(int n){
//     if(n==0 || n==1) return 1;
//     else if(arr[n] == 0)
//       arr[n] = dynamo_fibo(n-1) + dynamo_fibo(n-2);
//     return arr[n];
// }

// another dynamic programing method
int fibo(int n) {
  int f[n+2], i;
  f[0] = 0, f[1] = 1;
  for(i = 2; i<= n; i++) {
    f[i] = f[i-1] + f[i - 2];
  }
  return f[n];
}

//fibo series with recursion
// int fibo(int n) {
//     //  if(n==0 || n == 1) return 1;
//     //  else return fibo(n-1) + fibo(n-2);
//   return (n == 0 || n == 1) ? 1 : fibo(n-1) + fibo(n-2);
// }


// int fibo(int n) {
//   int f1 = 0, f2 = 1, fibo = 0, i;
//   if(n == 0 || n == 1) return 1;
//   for(i = 2; i<=n; i++) {
//     fibo = f1 + f2;
//     f1 = f2;
//     f2 = fibo;
//   }
//   return fibo;
// }

int main() {
  cout << fibo(6) << endl;
}