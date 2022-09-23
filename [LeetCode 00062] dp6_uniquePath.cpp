62. Unique Paths

There is a robot on an m x n grid. 
The robot is initially located at the top-left corner (i.e., grid[0][0]). 
  
The robot tries to move to the bottom-right corner (i.e., grid[m - 1][n - 1]). 
The robot can only move either down or right at any point in time.

Given the two integers m and n, 
return the number of possible unique paths that the robot can take to reach the bottom-right corner.

The test cases are generated so that the answer will be less than or equal to 2 * 10^9.

class Solution {
public:
    int uniquePaths(int m, int n) {
        int dp[100][100] = {0};
        for(int i=0;i<100;i++) {
            dp[0][i] = 1; dp[i][0] = 1;
    
        }
        for(int i=1;i<m;i++) {
            for(int j=1;j<n;j++) {
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
        return dp[m-1][n-1];
    }
};


/*
  key 포인트는 로봇이 right or down 으로만 움직인다는 것.
  
  dp[i][j] : i행, j열 까지의 unique path 수. 
  dp[i][j] = dp[i-1][j] + dp[i][j-1]
  dp[0][i] = 1, dp[i][0] = 1
  
  
*/