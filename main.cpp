#include <bits/stdc++.h>

using namespace std;

// int leastFrequent(int arr[], int n) {
//     sort(arr, arr + n);
//     int min_count = n + 1, res = -1, curr_count = 1;
//     for(int i = 1; i < n; i++) {
//         if( arr[i] == arr[i - 1])
//             curr_count++;
//         else {
//             if(curr_count < min_count) {
//                 min_count = curr_count;
//                 res = arr[i - 1];
//             }
//             curr_count = 1;
//         }
//     }
//     if(curr_count < min_count) {
//         min_count = curr_count;
//         res = arr[n - 1];
//     }
//     return res;
// }

// hash way
int leastFrequent(int arr[], int n) {
    unordered_map<int, int>hash;
    for(int i = 0; i < n; i++) 
        hash[arr[i]]++;
    int min_count = n + 1, res = -1;
    for(auto i : hash) {
        if(min_count >= i.second) {
            min_count = i.second;
            res = i.first;
        }
    }
    return res;
}
// { 1, 1, 1, 2, 2, 2, 3, 3 };
int main() {
    int arr[] = {1, 3, 2, 1, 2, 2, 3, 1}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << leastFrequent(arr, size) << endl;
}