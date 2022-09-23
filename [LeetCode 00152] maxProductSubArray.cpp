class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxValue, res = 0;
        int n = nums.size();
        vector<int> maxR(n), minR(n);
        
        maxR[0] = minR[0] = maxValue = nums[0];
        
        for(int i=1; i<n; i++) {
            maxR[i] = max({maxR[i-1]*nums[i], minR[i-1]*nums[i], nums[i]});
            minR[i] = min({maxR[i-1]*nums[i], minR[i-1]*nums[i], nums[i]});    
            maxValue = max(maxValue, maxR[i]);
        }
        return maxValue;
    }   
};
