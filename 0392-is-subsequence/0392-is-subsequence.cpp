class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m = s.length();
        int n = t.length();
        int c = 0;
        for(int i=0 ; i<n ; i++)
        {
            if(s[c] == t[i])
                c++; 
        }
        if(c == m) return true;
        else return false;
    }
};