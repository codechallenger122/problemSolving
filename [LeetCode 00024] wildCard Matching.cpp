https://leetcode.com/problems/wildcard-matching/

... time limit.. 다시 풀기.. dp 적용.

class Solution {
public:
    bool isMatchSub(int i, int j, int n, int m, string s, string p) {
        if(p[i] == '*') {
            if(i==n-1) return true;
            if(j==m) if(isMatchSub(i+1,j,n,m,s,p)) return true;
            for(int k=j;k<m;k++) {
                if(isMatchSub(i+1,k,n,m,s,p)) return true;                
            }
        } 
        
        else if(p[i] == '?') {
            if(j==m) return false;
            if(i==n-1) {
                if(j==m-1) {
                    return true;
                } else {
                    return false;
                } 
            } else {
                if(isMatchSub(i+1,j+1,n,m,s,p)) return true;                               
            }
        } 
        
        else {
            if(j==m) return false;
            if(p[i] == s[j]) {
                if(i==n-1) {
                    if(j==m-1) return true;
                    else return false;
                } else {
                    if(isMatchSub(i+1,j+1,n,m,s,p)) return true;
                }
            }
            else return false;
        }
        return false;
    }
    
    bool isMatch(string s, string p) {
        int n = p.size();
        int m = s.size();
        
        if(n==0 && m == 0) return true;
        if(n==0) return false;
        
        return isMatchSub(0, 0, n, m, s, p);
        
    }
};
