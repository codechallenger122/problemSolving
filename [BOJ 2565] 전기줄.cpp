#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(vector<int>& n1, vector<int>& n2) {
    return n1[0] < n2[0];
}
int main()
{
    vector<vector<int>> dataArr;
    int n, x, y;
    cin >> n;
    for(int i=0;i<n;i++) {
        vector<int> data;
        cin >> x >> y;
        data.push_back(x);
        data.push_back(y);
        dataArr.push_back(data);
    }
    sort(dataArr.begin(), dataArr.end(), compare);

    vector<int> dp(n, 1);
    for(int i=0;i<n;i++) {
        for(int j=0;j<i;j++) {
            if(dataArr[i][1] > dataArr[j][1]) dp[i] = max(dp[i], dp[j]+1);
        }
    }
    int maxValue = 1;
    for(int i=0;i<n;i++) maxValue = max(maxValue, dp[i]);
    cout << n-maxValue;
    return 0;
}

// 파이썬 코드
n = int(input())
data = []
for i in range(n):
    x, y = map(int, input().split())
    data.append([x,y])
data.sort(key = lambda x : x[0])
y = []
for i in range(n):
    y.append(data[i][1])

dp = [0 for i in range(n)]
for i in range(n):
    dp[i] = 1
    for j in range(i):
        if y[i] > y[j]:
            dp[i] = max(dp[i], dp[j]+1)
maxValue = 0
for i in range(n): maxValue = max(maxValue, dp[i])
print(n - maxValue)
