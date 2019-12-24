// #include<bits/stdc++.h>

// using namespace std;

// void printArr(int* arr, int size) {
//   int i = 0;
//   for(i = 0; i < size; i++)
//     cout << arr[i] << " ";
//   cout << endl;
// }

// int jumpingOnClouds(int* clouds, int size) {
//     int i , 
//         firstCloud = 0,
//         jumps = 0;
//     while(firstCloud < size - 1) {
//       if(clouds[firstCloud + 2] == 0)
//         firstCloud += 2;
//       else
//         firstCloud++;
//       jumps++;
//     }
//     return jumps;
// }

// int jumpingOnClouds(int* clouds, int size) {
//     int i , 
//         firstCloud = 0,
//         lastCloud = size - 1,
//         jumps = 0;
//     while(firstCloud < lastCloud) {
//       if(firstCloud + 1 == lastCloud)
//         firstCloud++;
//       else if(clouds[firstCloud + 2] == 0)
//         firstCloud += 2;
//       else
//         firstCloud++;
//       jumps++;
//     }
//     return jumps;
// }

// int main() {
//   int n, i;
//   cin >> n;
//   int* clouds = (int*)malloc(n*sizeof(int));
//   for(i = 0; i < n; i++)
//     cin >> clouds[i];
//   cout << jumpingOnClouds(clouds, n);
// }


// test cases
// 7
// 0 0 1 0 0 1 0

// 6
// 0 0 0 1 0 0

// 100
// 0 1 0 1 0 1 0 1 0 1 0 0 0 1 0 0 0 1 0 0 0 0 0 0 1 0 1 0 1 0 0 0 0 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 0 0 0 1 0 0 1 0 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 1 0 0 0 1 0 1 0 0 0 1 0 1 0 0 0 1 0 1 0 1 0 0 0 0 1 0
// output -> 54

// 100
// 0 1 0 0 0 0 0 1 0 1 0 0 0 1 0 0 1 0 1 0 0 0 0 1 0 0 1 0 0 1 0 1 0 1 0 1 0 0 0 1 0 1 0 0 0 1 0 1 0 1 0 0 0 1 0 1 0 0 0 1 0 1 0 0 0 1 0 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 0 1 0 1 0 1 0 1 0 0 0 0 0 0 1 0 0 0
// Expected Output -> 53

// Input (stdin)
// Download
// 50
// 0 0 1 0 0 0 0 1 0 0 0 0 1 0 0 0 0 0 1 0 1 0 0 0 1 0 0 1 0 0 0 1 0 1 0 0 0 0 0 0 0 0 1 0 0 1 0 1 0 0
// Expected Output
// Download
// 28

// Input (stdin)
// Download
// 10
// 0 0 1 0 0 0 0 1 0 0
// Expected Output
// Download
// 6
