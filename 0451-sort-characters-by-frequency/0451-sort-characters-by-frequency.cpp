class Solution {
    private:
    
         static bool cmp(const pair<int, int>  &p1, const pair<int, int> &p2)
{
    return p1.second < p2.second;
}
    
    
public:
    
    
   
         
    string frequencySort(string s) {
        string ans="";
     unordered_map<char,int>mp;
      
        for(auto it:s)
        {
            mp[it]++;
        }
        
      vector<pair<char,int>>v(mp.begin(),mp.end());
        
        
        sort(v.begin(),v.end(),cmp);
        for(auto  it:v)
        {
            int x=it.second;
            while(x--)
            ans+=it.first;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};