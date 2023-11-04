class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
       int x=left.size(); int y=right.size();
       int ans=0;
        for(int i=0 ; i<x ; i++) 
            ans=max(ans,(abs(0-left[i])));  
        for(int i=0 ; i<y ; i++)
            ans=max(ans,abs(n-right[i]));        
        return ans;        
    }
};