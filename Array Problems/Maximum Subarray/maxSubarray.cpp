#include <bits/stdc++.h>

using namespace std;

int maxSubArray(vector<int> nums) {
    int size = nums.size();
    int curmax = 0;
    int maxsum = INT_MIN, i = -1;
    while(++i < size) {
        curmax = max(nums[i], curmax + nums[i]);
        if(curmax > maxsum) 
            maxsum = curmax;
        //maxsum = max(maxsum, curmax);
    }
    return maxsum;
}

int main() {
  vector<int> vec{-2,1,-3,4,-1,2,1,-5,4};
  cout << maxSubArray(vec);
}