https://leetcode.com/problems/letter-combinations-of-a-phone-number/

class Solution {
public:
    unordered_map<char, string> map = {
    { '2', "abc" }, { '3', "def" }, { '4', "ghi" }, { '5', "jkl" },
    {'6', "mno" }, { '7', "pqrs" }, {'8', "tuv" }, { '9', "wxyz" }
    };
    
    vector<string> ans;
    
    void genComb(string digits, int idx, int length, string s) {
        if(idx == length) ans.push_back(s);
        else {
            for(int i=0;i<map[digits[idx]].size();i++) {
                genComb(digits, idx+1, length, s + map[digits[idx]][i]);
            }
        }
    }
    
    vector<string> letterCombinations(string digits) {
        int L = digits.size();
        if(L==0) return ans;
        genComb(digits, 0, L, "");
        return ans;
    }
};
