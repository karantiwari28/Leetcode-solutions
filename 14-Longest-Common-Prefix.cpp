class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        int n = str.size();
        if(n==0) return\\;
        sort(str.begin(),str.end());
        string a=str[0], b=str[n-1], ans=\\;
        for(int i=0 ; i<a.size() ; i++)
        {
            if(a[i] == b[i])
                ans+=a[i];
            else
                break;
        }
        return ans;
    }
};