class Solution {
public:
    long long dividePlayers(vector<int>& skills) {
       
        int n=skills.size();
         
        int i=0,j=n-1;
        
        long long chem=0;
        
        sort(skills.begin(),skills.end());
        
    
        long long s=skills[0]+skills[n-1];
        
        while(i<j){
            
            int currskill=skills[i]+skills[j];
                
            if(currskill!=s)
            {
                return -1;
                
            }
            chem+=(long long)(skills[i])*(long long) (skills[j]);
            
            i++,j--;
            
                
        }
        return chem;
        
    }
};