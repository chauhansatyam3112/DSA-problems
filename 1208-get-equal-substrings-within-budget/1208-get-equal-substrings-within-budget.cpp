class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n=s.length();
         if(s==t && maxCost==0)
        {
            return s.length();
        }
        if(maxCost==0)
        {
            return 1;
        }
       
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            v[i]=abs((s[i]-'a')-(t[i]-'a'));
            
            
        }
        int curr_cost=0;
        int j=0;
        int i=0;
        int maxi=INT_MIN;
        while(i<n&& j<n)
        {
            curr_cost+=v[j++];
            if(curr_cost<=maxCost)
             maxi=max(maxi,j-i);
            if(curr_cost>maxCost)
            {
                while(curr_cost>maxCost)
                {
                  
                    curr_cost-=v[i++];
                }
                   
            }
        }
        return maxi==INT_MIN?0:maxi;
    }
};