class Solution {
public:
    int passThePillow(int n, int time) 
    {
        int i = 1, j = 1;
        while(time--)
        {
            if(j)
            {
                i++;
                if(i == n) j = !j;
            }
            else 
            {
                i--;
                if(i == 1) j = !j;
            }
        }
        return i;
    }
};
