// #include <bits/stdc++.h>

// using namespace std;

// int findKth(int arr[], int n, int k){
//     set<int> missing;
//     int count = 0;
//     for(int i = 0; i < n; ++i)  
//        missing.insert(arr[i]);
//     int maxm = *max_element(arr, arr + n);
//     int minm = *min_element(arr, arr + n);
//     for(int i = minm + 1; i < maxm; i++) {
//         if( missing.find(i) == missing.end() )
//             count++;
//         if(count == k)
//             return i;
//     }
//     return -1;
// }


// int main() {
//     int arr[] {2, 10, 9, 4};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int k = 5;
//     cout << findKth(arr, size, k) << endl;
// }