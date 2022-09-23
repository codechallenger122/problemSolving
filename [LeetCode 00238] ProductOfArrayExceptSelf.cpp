https://leetcode.com/problems/product-of-array-except-self/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int res = 1;
        int containZero = 0;
        int n = nums.size();
        vector<int> output;
        /* 일단 전체 곱한 값을 구한다. 
           그런데, 0 을 가지고 있는지 안 가지고 있는지 여부도 구한다.
           0 이 없으면 --> 간단.
           0 이 하나면 --> 그녀석은 나머지 곱으로 구해야함.
           0 이 두개 이상이면 --> 모든 값이 0 일 것임.
        */
        for(int i=0; i<n ; i++) {
            if(nums[i] !=0) {res *= nums[i];}
            else { containZero += 1; }
        } 
        if(containZero == 0) {
            for(int i=0;i<n;i++) {
                output.push_back(int(res/nums[i]));
            }
        }
        else if(containZero == 1) {
            for(int i=0;i<n;i++) {
                if(nums[i] == 0) {
                    output.push_back(res);
                } else {
                    output.push_back(0);
                }
            }            
        } else {
            for(int i=0;i<n;i++) {
                output.push_back(0);
            }            
        }
        return output;
    }
};
