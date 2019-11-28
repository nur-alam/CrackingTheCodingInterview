// #include <bits/stdc++.h>

// using namespace std;

// int getMissingNoWithXOR(int a[], int n){
//   int i, x1 = a[0], x2 = 1;
//   for(i=1; i<n; i++)
//     x1 = x1^a[i];
//   for(i=2; i<=n+1; i++)
//     x2 = x2^i;
//   return (x1^x2);
// }

// int* getTwoMissingNoWithXOR(int *a, int n){
//     int i, size = n + 2;
//     int total_sum = size*(size+1) / 2;
//     int arrSum = 0;
//     for(i=0;i<n;i++) arrSum = arrSum + a[i];
//     int pivot = (total_sum-arrSum)/2;
//     int tlx = 0,rlx=0,alx=0,arx=0;
//     for(i=1;i<=pivot;i++) tlx = tlx ^ i;
//     for(i=pivot+1;i<=size;i++) rlx = rlx ^ i;
//     for(i=0;i<pivot-1;i++) alx = alx ^ a[i];
//     for(i=0;i<n;i++){
//       if(a[i]>pivot){
//         arx = arx ^ a[i]; 
//       }
//     }
//     //static int  r[75];
//     //int*  r = (int *)malloc(sizeof(2*sizeof(int)));
//     //r[0] = tlx ^ alx;
//     //r[1] = rlx ^ arx;
//     static int  r[] =  {tlx ^ alx,rlx ^ arx};
//     return r;
//     //return total_sum-arrSum;
// }

// int main() {

//   int a[] = {1,2,5};
//   int size = sizeof(a)/sizeof(a[0]);
//   //cout << ((1^2)^(1^2^4^3)) << " " << (3^4) <<endl;
//   int* missar = getTwoMissingNoWithXOR(a,size); 
//   //cout << missar[0] <<" " << missar[1] <<endl;
//   cout << (4>>2) << endl;
  
//   return 0;

// }
