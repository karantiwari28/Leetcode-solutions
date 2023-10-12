class Solution {
public:

    int findInMountainArray(int t, MountainArray &mountainArr) {
        int s=0;
        int e=mountainArr.length()-1;
        int mid;
        while(s<e)
        {
            mid=s+(e-s)/2;
            if(mountainArr.get(mid)<mountainArr.get(mid+1))
            s=mid+1;
            else
            e=mid;
        }
        int p=s;
        e=p;
        s=0; 
        bool fl=false,fr=false;
        while(s<=e){
            mid=s+(e-s)/2;
            if(mountainArr.get(mid)==t){
                fl = true;
                break;
            }
            else if(mountainArr.get(mid)<t)
             s = mid + 1;
            else
             e = mid - 1;
        }
        if(fl) 
        return mid;
        
        s=p+1;
        e=mountainArr.length()-1;
        while(s <= e){
            mid=s+(e-s)/2;
            if(mountainArr.get(mid)==t){
                fr=true;
                break;
            }
            else if(mountainArr.get(mid)>t)
            s=mid+1;
            else 
            e=mid-1;
        }
        if(fr)
        return mid;
        
        return -1;

    }
};