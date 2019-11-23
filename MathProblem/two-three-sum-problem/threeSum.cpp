// const moveIndex = (index,nums,value,dec) => {
//     while (value == nums[index]) {
//         dec ? index-- : index++;
//     }
//     return index;
// }

// const threeSum = nums => {
//     let sums = [], i = 0;
//     nums.sort((a,b) => a-b);
//     while (i < nums.length - 2) {
//         let start = i + 1;
//         let end = nums.length - 1;
//         if (nums[i] > 0 || nums[end] < 0) break;
//         while (start < end) {
//             let sum = nums[i] + nums[start] + nums[end];
//             if (sum == 0) {
//                 sums.push([nums[i],nums[start],nums[end]]);
//                 start = moveIndex(start,nums,nums[start]);
//                 end = moveIndex(end,nums,nums[end],true);
//             } else {
//                 sum > 0 ? end-- : start++;
//             }
//         }
//         i = moveIndex(i, nums, nums[i]);
//         //i++;
//     }
//     return sums;
// }
// let nums = [-1, 0, 1, 2, -1, -4];

// console.log(threeSum(nums));
// console.log(nums);


// threeSum with cpp
// #include <bits/stdc++.h>

// using namespace std;

// int moveIndex (int index, int value, vector<int>& nums, bool isDecrement) {
//     while (value == nums[index]) {
//       isDecrement ? index-- : index++;
//     }
//     return index;
// }

// vector<vector<int>> threeSum (vector<int>& nums) {

//     int start, end,size = nums.size(), i = 0;
//     vector<vector<int>> result;
//     sort(nums.begin(),nums.end());    

//     while (i < size - 2) {

//       if(i != 0 && nums[i] == nums[i-1]) continue;     
//       start = i + 1, end = size - 1;
//       if(nums[i] > 0 || nums[end] < 0) break;

//       while(start < end) {

//         int sum = nums[i]+nums[start]+nums[end];

//         if(sum == 0){
//           result.push_back({nums[i],nums[start],nums[end]});
//           start = moveIndex(start,nums[start],nums,false);
//           end = moveIndex(end,nums[end],nums,true);
//         } else {
//           sum > 0 ? end-- : start++;
//         }

//       }

//       i = moveIndex(i,nums[i],nums,false);

//     }

//     return result;

// }

// int main() {
//   int i = 0, j = 0;
//   vector<int> nums = {-1, 0, 1, 2, -1, -4};
//   //vector<int> nums = {-1,0,1,3};
//   sort(nums.begin(),nums.end());
//   vector<vector<int>>zero = threeSum(nums);
//   while(i < zero.size()){ j = 0;
//     while(j < zero[i].size()) {
//       cout << zero[i][j] << " "; 
//       j++;
//     }
//     cout << endl;
//     i++;
//   }
//   return 0;
// }