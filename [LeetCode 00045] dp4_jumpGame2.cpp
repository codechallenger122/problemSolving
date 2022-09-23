https://leetcode.com/problems/jump-game-ii/submissions/
/*
45. Jump Game II
Given an array of non-negative integers nums, you are initially positioned at the first index of the array.

Each element in the array represents your maximum jump length at that position.

Your goal is to reach the last index in the minimum number of jumps.

You can assume that you can always reach the last index.
*/

class Solution {
public:
    int jump(vector<int>& nums) {
        int length = nums.size();
        int jumpOut[10000];
        jumpOut[0] = 0;
        for(int i=1;i<10000;i++) jumpOut[i] = INT_MAX;
        
        for(int i=0;i<length;i++) {
            for(int j=i+1;j<=i+nums[i];j++) {
                if(j == length) break;
                jumpOut[j] = min(jumpOut[j], jumpOut[i]+1);
            }
        }
        return jumpOut[length-1];
    }
};



https://www.adamk.org/leetcode-45-jump-game-ii/
#include <iostream>
#include <vector>

using namespace std;

int jump(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;
    int jumps=0, curLeft=0, nextLeft=nums[0];
    for (int i=1; i<n; ++i) {
        if (curLeft == 0) { curLeft = nextLeft; jumps++; }
        curLeft--; nextLeft--;
        if (nums[i] > nextLeft) nextLeft = nums[i];
    }
    return jumps;
}

int main() {
    vector<int> nums {2,3,0,1,4}; //{1,2,3}; //{2,3,1,1,4};
    cout << jump(nums) << "\n";
    return 0;
}
