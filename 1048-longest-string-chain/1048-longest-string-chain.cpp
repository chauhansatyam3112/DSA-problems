class Solution {
public:
    int longestStrChain(vector<string>& words) {
        unordered_map<string,int>dp;
        sort(words.begin(),words.end(),sortbylen);
        
        
        int ans=INT_MIN;
        for(auto word:words)
        {
            for(int i=0;i<word.length();i++)
            {
              string pre=word.substr(0,i)+word.substr(i+1);
                dp[word]=max(dp[word],dp[pre]+1);
                
            }
            ans=max(ans,dp[word]);
            
        }
        return ans;
    }
    static bool sortbylen(string &s1,string &s2)
    {
        return s1.size()<s2.size();
    }
};