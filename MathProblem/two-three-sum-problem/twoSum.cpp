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



#include<bits/stdc++.h>

using namespace std;

//two pointer solution
vector<int> twoSum(vector<int>& nums, int target) {
    int front = 0, rear = nums.size() - 1;
    sort(nums.begin(), nums.end());
    while(front < rear) {
      int sum = nums[front] + nums[rear];
      if (sum == target)
       break;
      else if (sum > target)
       rear--;
      else
       front++;
    }
    return {front, rear};
};

// brute force solution
vector<int> twoSum(vector<int>& nums, int target) {
    int len = nums.size();
    for(int i = 0; i < len; i++) {
        for(int j = i + 1; j < len; j++) {
            if(nums[j] == target - nums[i])
                return { i, j };
        }
    }
    return {-1, -1};
};

vector<int> twoSum(vector<int>& nums, int target) {
      map<int, int> map;
      vector<int> pairs;
      for(int i = 0; i < nums.size(); i++) {
          int complement = target - nums[i];
          if(map.find(complement) != map.end()) {
              pairs.push_back(map.find(complement)->second);
              pairs.push_back(i);
              break;
          }
          map.insert(pair<int, int>(nums[i], i));
      }
      return pairs;
};

int main() {
  vector<int>nums = {1,4,3,6,5,8};
  vector<int>pair = twoSum(nums,4);
  cout << "pair indices are : " << pair[0] << " " << pair[1] << endl;
  return 0;
}


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