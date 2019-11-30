// #include <bits/stdc++.h> 
// using namespace std; 

// vector<int> findSubarray(int a[], int k, int n) 
// { 
//     vector<vector<int>> vec;
//     for(int i = 0; i <= n - k; i++) {
//         vector<int> temp;
//         for(int j = i; j < i + k; j++)
//             temp.push_back(a[j]);
//         vec.push_back(temp);
//     }
//     sort(vec.begin(), vec.end());
//     return vec[vec.size() - 1];
// } 
  
// // Driver code 
// int main() 
// { 
//     int a[] = { 1, 4, 3, 2, 5 }; 
//     int k = 4; 
//     int n = sizeof(a) / sizeof(a[0]); 
//     vector<int> ans = findSubarray(a, k, n); 
//     for (auto it : ans) 
//         cout << it << " "; 
// } 