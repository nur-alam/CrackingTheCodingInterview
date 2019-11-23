// #include<bits/stdc++.h>

// using namespace std;

// // specifically for unsorted array
// int removeDuplicatesWithHashWay(int arr[], int n) {
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
//     return m.size();
// }

// int removeDuplicates(int arr[], int n) {
//     if(n==0 || n==1) return n;
//     int j = 0;
//     for(int i = 0; i < n - 1; i++) {
//         if (arr[i] != arr[i+1]) 
//             arr[j++] = arr[i];
//     }
//     arr[j++] = arr[n-1];
//     return j;
// }

// int removeDuplicates(vector<int>& nums) {
//     int j = 0, size = nums.size(), i;
//     if(size == 0 || size == 1) return size;
//     for(i = 0; i < size - 1; i++) {
//         if(nums[i] != nums[i+1]) 
//             nums[j++] = nums[i];
//     }
//     nums[j++] = nums[size - 1];
//     return j;
//     nums.erase(unique(nums.begin(),nums.end()), nums.end());
//     return nums.size();
// }

// int main() {
//     // int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
//     // int n = sizeof(arr) / sizeof(arr[0]);
//     // int newSize = removeDuplicatesWithHashWay(arr, n);
//     // for(int i = 0; i < newSize; i++) {
//     //     cout << arr[i] << endl;
//     // }
//     vector<int> v = {1,1,2};
//     vector<int> v = {1, 2, 2, 3, 4, 4, 4, 5, 5};
//     int newSize = removeDuplicates(v);
//     cout << newSize << endl;
//     for(auto num : v) {
//         cout << num << endl;
//     }
// }