class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        if (k == 1) 
        {
            return max(arr[0], arr[1]);
        }
        if (k >= arr.size()) 
        {
            return *max_element(arr.begin(), arr.end());
        }
        int cur_winner = arr[0];
        int wins = 0;
        for (int i=1 ; i<arr.size() ; ++i) 
        {
            if (cur_winner > arr[i]) 
            {
                wins++;
            } 
            else 
            {
                cur_winner = arr[i];
                wins = 1;
            }
            if (wins == k) 
            {
                return cur_winner;
            }
        }
        return cur_winner;
    }
};