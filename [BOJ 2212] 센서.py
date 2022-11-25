n = int(input())
k = int(input())
dataList = list(map(int, input().split()))
dataList.sort()
spaceList = []
length = 0;

length = 0
NumCluster = 1
for i in range(n-1):
    delta = dataList[i+1] - dataList[i] 
    if delta == 1:
        length+=1
    else:
        spaceList.append(delta)
        NumCluster+=1
        
numb = NumCluster - k 
spaceList.sort()
for i in range(numb):
    length+=spaceList[i]
print(length)
