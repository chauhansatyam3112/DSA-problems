class Solution {
public:
    long long wonderfulSubstrings(string word) {
        
        long long ans=0;
        
        long long sum=0;
        
        unordered_map<long long,long long>mp;
        
        mp[0]=1;
        
        for(int i=0;i<word.length();i++)
        {
            sum^=(1<<(word[i]-'a'));
            
            ans+=(mp[sum]);
            
            
            for(char ch='a';ch<='j';ch++)
            {
               long shift=(sum^(1<<(ch-'a')));
                
               ans+=(mp[shift]); 
                
                
            }
            
            mp[sum]++;
        }
        
        return ans;
    }
};