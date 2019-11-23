// #include<bits/stdc++.h>

// using namespace std;

// void removeDuplicatesWithHashWay(int arr[], int n) {
//     unordered_map<int, bool> m;
//     for(int i = 0; i < n; ++i) {
//         if(m.find(arr[i]) == m.end()) {
//             //m[arr[i]] = true;
//             m.insert({arr[i],true});
//         }
//     }
//     for(auto it = m.begin(); it != m.end(); it++) {
//         cout << it->first << " " << it->second << endl;
//     }
// }

// int main() {
//     int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     removeDuplicatesWithHashWay(arr, n);
// }