// js solutions
// let arr = new Array(20).fill(0);
// let arr2 = [ 1, 4, 8, 45, 6, 10];
// // console.log(arr2.indexOf(3));
// let twoSum = (sum) => {
//     let i, temp, pair = [];
//     for(let i = 0; i < arr.length; i++) {
//         temp = sum - arr2[i];
//         if ( arr[temp] == 1 ) {
//             // pair.push(arr2.indexOf(temp),i);
//             pair.push(temp,arr2[i]);
//             return pair;
//         }
//         arr[arr2[i]] = 1;
//     }
//     return pair;
// }

// console.log(twoSum(9));



// #include <bits/stdc++.h>

// using namespace std;

// vector<int> twoSum(vector<int>& nums, int target) {
//   map<int,int> hashmap;
//   vector<int> pairs;
//   for(int i = 0; i < nums.size(); i++) {
//     int temp = target - nums[i];
//     if(hashmap.find(temp) != hashmap.end() 
//       && hashmap.find(temp)->second != i) {
//         pairs.push_back(hashmap.find(temp)->second);
//         pairs.push_back(i);
//         break;
//         // return pairs;
//     }
//     hashmap.insert(pair<int,int>(nums[i],i));
//   }
//   return pairs;
// }

// with unordered map
// vector<int> twoSum(vector<int>& nums, int target) {
//   unordered_map<int,int> hash;
//   auto end = hash.end();
//   vector<int> pairs;
//   for(int i = 0; i < nums.size(); i++) {
//     auto find = target - nums[i];
//     if(hash.find(find) != end){
//       pairs.push_back(hash.find(find)->second);
//       pairs.push_back(i);
//       break;
//     }
//     hash.insert(pair<int,int>(nums[i],i));
//   }  
//   return pairs;
// }

// int main() {
//   vector<int>nums = {1,4,3,6,5,8};
//   vector<int> v;
//   v = twoSum(nums,13);
//   cout << v[0] << " " << v[1] << endl;
//   return 0;
// }

// Nur Alam
// H:12/15 
// HOLDING ROAD-1, 
// KALLAYNPUR -1,MIRPUR-1207

// Faruk 
// H: 15/3/6
// Road: Rojonigondha, kallyanpur-1,MIRPUR-1207

// Emran 
// H: 15/3/6
// Road: Rojonigondha, kallyanpur-1,MIRPUR-1207

// Adity
// tollabag 18/i sobhanbag dhaka 1207

// Saief
// 56/6, Hazaribagh Road, Zigatola, Dhaka - 1209

// Shiam Hossain 
// House No. : 13
// Block : A
// Mashjid Road,Mamudpur
// Fatullah,Narayanganj