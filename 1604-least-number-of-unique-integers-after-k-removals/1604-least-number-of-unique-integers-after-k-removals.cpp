class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        int n =arr.size();
        map<int, int> m;
        for(int i=0 ; i<n ; i++)
        {
            m[arr[i]]++;
        }
        vector<int> frequencies;
        for (const auto& x : m) {
            frequencies.push_back(x.second);
        }
        sort(frequencies.begin(), frequencies.end());
        int count = frequencies.size();
        for (int i = 0; i < frequencies.size(); i++) 
        {
            int freq = frequencies[i];
            if (k >= freq) 
            {
                k -= freq;
                count--;
            } 
            else 
                break;
        }
        return count;
    }
};