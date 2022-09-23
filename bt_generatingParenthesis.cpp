https://donggoolosori.github.io/2021/01/20/leetcode-22/

class Solution {
public:
    vector<string> ans;
    int N;
    void getParenthesis(int L, int lcnt, int usable, string s) {
        if(L==2*N) {
            ans.push_back(s);
            return;
        }
        if(lcnt < N) getParenthesis(L+1, lcnt+1, usable+1, s+"(");
        if(usable > 0) getParenthesis(L+1, lcnt, usable-1, s + ")");
        
    }
    vector<string> generateParenthesis(int n) {
        N = n;
        getParenthesis(0, 0, 0, "");
        return ans;
    }
};
