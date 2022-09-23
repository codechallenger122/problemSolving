# 파스칼의 삼각형
# BOJ 16395

/*
  p[i][j] = 1                        if) j==1 or j==i
          = p[i-1][j-1] + p[i-1][j]  else  
*/

#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    int dp[31][31]; // 0 index 버릴 것임. 1~30 index 사용 할 것임.
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            if(j==1 or j==i) dp[i][j] = 1;
            else dp[i][j] = dp[i-1][j-1]+dp[i-1][j];
        }
    }
    cout << dp[n][k] << endl;
    
    return 0;
}
