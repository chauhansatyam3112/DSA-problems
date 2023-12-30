class Solution {
public:
    bool makeEqual(vector<string>& words) {
        
        
     unordered_map<char,int>mp;
        
        for(int i=0;i<words.size();i++)
        {
            
                for(auto it:words[i])
                {
                    mp[it]++;
                }
                
           
            
        }
      
    
       int n=words.size();
    
      for(auto it:mp)
      {
          if(it.second%n!=0)return false;
          
          
      }
    
    return true;
       
    
    
    }
};