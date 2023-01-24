class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>lastoccr(26,0);
        vector<int>res;
        for(int i=0;i<s.length();i++)
        {
            lastoccr[s[i]-'a']=i;
        }
       int prev=-1,maxi=0;
        for(int i=0;i<s.length();i++)
            
        {
            maxi=max(maxi,lastoccr[s[i]-'a']);
            if(i==maxi){
                res.push_back(maxi-prev);
                prev=maxi;
                maxi=0;
                
            }
        }
        return res;
    }
};