#include <bits/stdc++.h>

using namespace std;

int* maxSubArray(vector<int>& nums) {
    int size = nums.size();
    int curmax = 0;
    int maxsum = INT_MIN, i = -1;
    int startIndex = 0, endIndex = 0, tempIndex = 0;
    while(++i < size) {
        curmax = max(nums[i], curmax + nums[i]);
        if(nums[i] >= curmax)
            tempIndex = i;
        if(curmax > maxsum) {
            maxsum = curmax;
            startIndex = tempIndex;
            endIndex = i;
        }
    }
    int *indexes = (int *)malloc(2*sizeof(int)); // new int[2];
    indexes[0] = startIndex;
    indexes[1] = endIndex;
    return indexes;
}

int main() {
  vector<int> vec{-2,1,-3,4,-1,2,1,-5,4};
  int *indexes = maxSubArray(vec);
  cout << indexes[0] << " " << indexes[1] << endl;
}