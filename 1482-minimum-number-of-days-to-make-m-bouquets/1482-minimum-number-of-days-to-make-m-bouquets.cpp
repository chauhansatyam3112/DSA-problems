class Solution {
public:
    bool isPossible(int days,vector<int>&bloom,int m,int k)
    {
        
        int cnt=0;
        
       int  bouquets=0;
        
        for(int i=0;i<bloom.size();++i)
        {
            if(bloom[i]<=days)cnt++;
            else{
                 bouquets+=(cnt/k);
                
                cnt=0;
            }
        }
         bouquets+=cnt/k;
        
        return  bouquets>=m;
    }
    int minDays(vector<int>& bloom, int m, int k) {
        
        
        if(1LL*m*k>bloom.size())return -1;
        
        
        int left=*min_element(bloom.begin(),bloom.end());
        
        int right=*max_element(bloom.begin(),bloom.end());
        
        while(left<right)
        {
            int mid=left+(right-left)/2;
            
            if(isPossible(mid,bloom,m,k))
            {
                right=mid;
            }
            
            else{
                left=mid+1;
            }
        }
        return left;
        
    }
};