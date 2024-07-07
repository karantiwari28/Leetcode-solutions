class Solution {
public:
    int numWaterBottles(int nb, int ne) {
        int count=0 , a=0;
        while(1){
            count = count+nb;
            a = a+nb;
            nb = a/ne;
            a = a%ne;
            if(nb == 0) break;
        }
        return count;
    }
};