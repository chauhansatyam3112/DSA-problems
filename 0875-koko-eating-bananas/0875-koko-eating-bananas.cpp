class Solution {
public:
    bool isPossible(int speed,int h,vector<int>&piles)
    {
        int cnt=0;
        for(int i=0;i<piles.size();++i)
        {
            cnt+=(piles[i]/speed);
            
            if(piles[i]%speed!=0)cnt++;
            
            
        }
        return cnt<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        
        
        int left=1,right=*max_element(piles.begin(),piles.end());
        
        while(left<right)
        {
            int mid=left+(right-left)/2;
            
            if(isPossible(mid,h,piles))
            {
                right=mid;
            }else left=mid+1;
        }
        return left;
        
    }
};