class Solution {
public:
    
  bool isPossible(string &a,string &b)
    {
        int n=a.size()-1,m=b.size()-1;
        if(n!=m)
            
            return false;
      
        int c=0;
        while(n>=0)
        {
            if(a[n]!=b[n])
                c++;
            n--;
        }
        return c==1;
    }
    vector<string> getWordsInLongestSubsequence(int n, vector<string>& words, vector<int>& groups) {
        
        
        int maxidx=0;
        int maxval=0;
        
        vector<int>dp(n,1),hash(n+1,-1);
        
        for(int i=0;i<n;i++)
        {
            hash[i]=i;
            
            for(int j=0;j<i;j++)
            {
                
                string str1=words[i],str2=words[j];
                
                if(groups[i]!=groups[j])
                {
                    if(isPossible(str1,str2))
                    {
                        
                        if(dp[i]<1+dp[j])
                        {
                            dp[i]=1+dp[j];
                            
                            hash[i]=j;
                            
                            
                             if(maxval<dp[i])
                          {
                             maxval=dp[i];
                                
                             maxidx=i;
                           }
                            
                            
                           
                        }
                        
                        
                    }
                }
            }
            
         }
        vector<string>ans;
        
        ans.push_back(words[maxidx]);
        
        while(hash[maxidx]!=maxidx)
        {
            
            
            ans.push_back(words[hash[maxidx]]);
             maxidx=hash[maxidx];
            
           
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};