class Solution {
public:
    bool canPlaceFlowers(vector<int>& fl, int n) {
        
        int ans=0;
        int prev,next;
        for(int i=0;i<fl.size();i++)
        {
            if(fl[i]==0)
            {
                
                if(i==0 || fl[i-1]==0)
                     prev=0;
                else
                    prev=1;
                if(i==fl.size()-1|| fl[i+1]==0)
                     next=0;
                else
                    next=1;
                
                if(prev==0 && next==0)
                {
                    ans++;
                    fl[i]=1;
                    
                }
            }
        }
        return ans>=n;
    }
};