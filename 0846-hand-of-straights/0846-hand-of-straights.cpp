class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int k) {
        
        
        int n=hand.size();if(n%k!=0)return false;
        
        map<int,int>mp;
        for(int i=0;i<n;i++)mp[hand[i]]++;
        
        int m=n/k;
        
        for(int i=1;i<=m;++i)
        {
            auto it=mp.begin();
            
            int val=it->first;
            
            for(int j=val;j<val+k;j++)
            {
                if(mp.find(j)==mp.end())return false;
                
                 mp[j]--;
                
                if(mp[j]==0)
                {
                    mp.erase(j);
                }
            }
        }
        return true;
    }
};