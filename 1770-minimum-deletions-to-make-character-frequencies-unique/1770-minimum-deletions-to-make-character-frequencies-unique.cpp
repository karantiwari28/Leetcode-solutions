class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char, int> count;   
        //store frequencies of all characters
        for(char c : s)
            count[c]++;

        unordered_set<int> freqcount;
        int del = 0;          //counts deletions required
        
        //iterate the Hash-Map
        for(auto& k : count)
        {
            int freq = k.second;
            while(freq>0 && freqcount.find(freq) != freqcount.end())
            {
                freq--;
                del++;
            }
            freqcount.insert(freq);
        }
        return del;
    }
};