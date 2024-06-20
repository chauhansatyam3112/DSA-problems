class Solution {
public:
    
    bool isPossible(int dist,vector<int>&stalls,int k)
{
        int n=stalls.size();
    int cnt=1;
    int prev=stalls[0];
    
    for(int i=1;i<n;i++)
    {
        if(stalls[i]-prev>=dist)
        {
            cnt++;
            prev=stalls[i];
            
        }
        
       if(cnt>=k)return true;
    }
    return false;
}
    int maxDistance(vector<int>& stalls, int k) {
        int n=stalls.size();
        int ans=-1;
         sort(stalls.begin(),stalls.end());
        
        int left=1,right=1e9-1;
        
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            
            if(isPossible(mid,stalls,k))
            {
                ans=mid;
                left=mid+1;
                
            }
            else{
                right=mid-1;
            }
            
        }
        return ans;
    }
};