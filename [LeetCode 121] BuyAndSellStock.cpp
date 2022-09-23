https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

#121. Best Time to Buy and Sell Stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> profits(n, 0);
        int minValue = prices[0];
        for(int i=1;i<n;i++) {
            profits[i] = max(profits[i-1], prices[i]-minValue);
            minValue = min(minValue, prices[i]);
        }
        return profits[n-1];
    }
};

DP 로 풀었음.
일단 나이브 하게 생각하면,
profit = 0
for i = 0 to n-1
  for j = i+1 to n-1
    profit = max(price[j]-price[i], profit)
요건데, 이건 n^2 알고리즘이라 마음에 안든다...
    
그럼 어캐 할까?
    
for i = 0 to n-1 로 쭉 가면서
i-1 번째 단계의 profit 과 minValue 를 저장.
i 번째 price 를 맞닿 드렸을 때,
maxProfit[i] = max(maxProfit[i-1], price[i] - minValue[i-1]) 이렇게 하면된다.
minValue[i] = min(price[i], minValue[i-1]) 이렇게 update 하고..
