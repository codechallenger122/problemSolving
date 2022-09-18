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
