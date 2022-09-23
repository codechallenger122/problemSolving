https://leetcode.com/problems/two-sum/
 
# n^2 알고리즘 말고, n 알고리즘이 가능하다.
  
# 1. python 풀이
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dataDict = {}
        for i in range(len(nums)):
            if nums[i] in dataDict.keys():
                return [dataDict[nums[i]], i]
            else:
                dataDict[target-nums[i]] = i
        return [-1,-1]

       
# 2. C++ 풀이
class Solution {
public:
    unordered_map<int, int> map;
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        for(int i=0;i<nums.size();i++) {
            if(map.count(nums[i])) {
                res.push_back(map[nums[i]]);
                res.push_back(i);
                return res;
            }
            else {
                map.insert(make_pair(target-nums[i], i));                
            }
        }
        return res;
    }
};
