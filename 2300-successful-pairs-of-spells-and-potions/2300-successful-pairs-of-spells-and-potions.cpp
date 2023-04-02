class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        
        int n=spells.size(); 
        vector<int >ans;
        sort(potions.begin(),potions.end());
        long long temp;
        for(int i=0;i<spells.size();i++)
        {
            long long res=0;
            if(success%spells[i]==0)
           temp =success/spells[i];
            
            else
                temp=(success/spells[i])+1;
                
          auto it=lower_bound(potions.begin(),potions.end(),temp);
            
            
           if(it==potions.end())
           {
               ans.push_back(0);
           }
            else{
                long long idx=it-potions.begin();
                res =potions.size()-idx;
                 ans.push_back(res);
                res=0;
                
            }
           
                
              
        }
        return ans;
            
        
        
        
        
        
        
        
        
        
        
    }
};