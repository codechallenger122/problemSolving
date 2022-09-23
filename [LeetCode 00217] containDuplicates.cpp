https://leetcode.com/problems/contains-duplicate/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> duplicate;
        for(int i=0; i< nums.size(); i++) {
            if(duplicate.count(nums[i])) {
                return true;
            }
            duplicate[nums[i]] = 1;
        }
        return false;
    }
};

list 에서 element 를 읽어가면서, hashmap 에 있는지 확인하면서 간다.
  hashmap 에 있으면, return true.
             없으면 추가. 
