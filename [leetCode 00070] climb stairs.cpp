https://leetcode.com/problems/climbing-stairs/

# top down - recursive formula with memo
class Solution {
public:
    int climb(int n, vector<int>& dp) {
        if(dp[n] > 0) return dp[n];
        dp[n] = climb(n-1, dp) + climb(n-2, dp);
        return dp[n];
    }
    
    int climbStairs(int n) {
        vector<int> dp(n, -1);
        if(n==1) return 1;
        if(n==2) return 2;        
        dp[1] = 1; dp[2] = 2;
        return climb(n-1, dp) + climb(n-2, dp);
    }
};

# bottom up - iteration with memo
class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n+1,0);
        if(n==1) return 1;
        if(n==2) return 2;        
        dp[1] = 1; dp[2] = 2;
        for(int i=3;i<=n;i++) {
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
};
