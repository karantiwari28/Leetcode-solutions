class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n = arr.size();
        int i=0 , j=i+1 , k=j+1;
        while(k<n){
            if(arr[i]%2!=0 && arr[j]%2!=0 && arr[k]%2!=0)
                return true;
            i++; j++; k++;
        }
        return false;
    }
};