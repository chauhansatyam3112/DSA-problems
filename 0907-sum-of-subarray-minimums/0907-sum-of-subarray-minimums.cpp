class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
         int n = arr.size();
        
          stack<int> st1,st2;
        
        vector<int> left(n,-1), right(n,n);
        
        for(int i=0;i<n;i++)
        {
            while(!st1.empty()&& arr[st1.top()]>arr[i])st1.pop();
            
            if(!st1.empty())left[i]=i-st1.top();
            
            else
                left[i]=i+1;
            
            st1.push(i);
        }
        
        for(int i=n-1;i>=0;i--)
        {
            while(!st2.empty() && arr[st2.top()]>=arr[i])
                st2.pop();
            
            if(!st2.empty())
                right[i]=st2.top()-i;
            else
                right[i]=n-i;
            st2.push(i);
        }
        
        int ans=0;
        int mod=1e9+7;
        
        for(int i=0;i<n;i++)
 {
            long long res= (left[i]*right[i])%mod;
            
            res = (res*arr[i])%mod;
            
            ans=(ans+res)%mod;
        }
        return int(ans);
       
      
    }
};