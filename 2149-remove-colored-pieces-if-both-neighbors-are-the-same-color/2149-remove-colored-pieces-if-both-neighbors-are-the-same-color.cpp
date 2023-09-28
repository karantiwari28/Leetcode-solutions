class Solution {
public:
    bool winnerOfGame(string colors) {
        int n=colors.length(), a=0, b=0;
        for(int i=1 ; i<n ; i++)
        {
            if(colors[i-1] == colors[i+1] && colors[i] == colors[i+1])
            {
                if(colors[i] == 'A') a++;
                else b++;
            }
        }
        return a>b;
    }
};