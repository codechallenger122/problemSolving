n = int(input())
dataList = []
dataList = list(map(int, input().split()))
pos = dict();
dp = [1 for _ in range(n)]

for i in range(n): pos[dataList[i]] = i
for i in range(n):
    if dataList[i]-1 in pos.keys():
        if pos[dataList[i]-1] < i: dp[i] = dp[pos[dataList[i]-1]]+1 
maxDP = 0
for i in range(n): maxDP = max(maxDP, dp[i])
print(n-maxDP)
