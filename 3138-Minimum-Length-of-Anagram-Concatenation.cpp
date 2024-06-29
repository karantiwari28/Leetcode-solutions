class Solution {
public:
    int minAnagramLength(string s) {
        int n = s.size();
        vector<int> factos;
        for(int i=1;i<=sqrt(n);i++) {
            if(n%i==0) {
                int k = n/i;
                if(k!=i) {
                    factos.push_back(i);
                    factos.push_back(k);
                } else {
                    factos.push_back(i);
                }
            }
        }
        sort(factos.begin(),factos.end());
        for(int i=0;i<factos.size();i++) {
            int ans = factos[i];
            map<char,int>mp1;
            for(int i=0;i<ans;i++)
                mp1[s[i]]++;
            int f=0;
            for(int i=ans;i<n;i=i+ans) {
                map<char,int> mp2;
                for(int j=i;j<i+ans;j++) {
                    mp2[s[j]]++;
                }
                if(mp1!=mp2) {
                    f=1;
                    break;
                }
            }
            if(f==0)
                return ans;
        }
        return n;
    }
};