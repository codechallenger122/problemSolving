https://leetcode.com/problems/two-sum/
 
# n^2 알고리즘 말고, n 알고리즘이 가능하다.
  
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dataDict = {}
        for i in range(len(nums)):
            if nums[i] in dataDict.keys():
                return [dataDict[nums[i]], i]
            else:
                dataDict[target-nums[i]] = i
        return [-1,-1]
