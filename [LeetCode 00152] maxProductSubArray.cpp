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

여기서 maxR[i], minR[i] 는 Right component <-- i번째 component 를 포함하는 max 값, min 값임.
    이 값들을 정의하는 이유는 이렇게 정의해야 다음 번 maxR[i+1], minR[i+1] 에 사용할 수 있기 때문이다. 
