https://leetcode.com/problems/maximum-subarray/
=====================================================================
53. Maximum Subarray

Given an integer array nums, 
find the contiguous subarray (containing at least one number) 
which has the largest sum and return its sum.

A subarray is a contiguous part of an array.
=====================================================================
    
#include <iostream>

using namespace std;

int getMaxSubArray(int* arr, int lenArr) {
    int * curSum = new int[lenArr];
    int * maxSum = new int[lenArr];
    curSum[0] = maxSum[0] = arr[0];
    for(int i=1;i<lenArr;i++) {
        curSum[i] = max(curSum[i-1] + arr[i], arr[i]);
        maxSum[i] = max(curSum[i], maxSum[i-1]);
    }
    return maxSum[lenArr-1];
}

int main()
{
    //int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int arr[] = {5, 4, -1, 7, 8};
    int lenArr = sizeof(arr)/ sizeof(arr[0]);
    int result = getMaxSubArray(arr, lenArr);
    cout << result << endl;

    return 0;
}

===================================
// 다시 풀어봄. 같은 내용.
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> maxR(n);
        int maxValue;
        maxValue = maxR[0] = nums[0];
        for(int i=1;i<n;i++) {
            maxR[i] = max(maxR[i-1] + nums[i], nums[i]);
            maxValue = max(maxValue, maxR[i]);
        }
        return maxValue;
    }
};
