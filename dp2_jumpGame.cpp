/*
https://leetcode.com/problems/jump-game/

You are given an integer array nums. 
You are initially positioned at the array's first index, 
and each element in the array represents your maximum jump length at that position.
Return true if you can reach the last index, or false otherwise.

*/


class Solution {
public:
    bool canJump(vector<int> nums) {
        int length = nums.size();
        int distance = 0;
        for(int i=0;i<=distance;i++) {
            distance = max(distance, i + nums[i]);
            if(distance >= length -1) return true;
        }
        return false;
    }
};
