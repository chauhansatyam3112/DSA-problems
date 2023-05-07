class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& obs) {
        
        
       
        
        int n=obs.size();
         vector<int>temp;
        
       // vector<int>ans(n);
        
        for(int i=0;i<n;i++)
        {
            if(temp.empty() or temp[temp.size()-1]<=obs[i])
            {
                temp.push_back(obs[i]);
                
                obs[i]=temp.size();
                
            }
            else{
                
                int itr=upper_bound(temp.begin(),temp.end(),obs[i])-temp.begin();
                
                temp[itr]=obs[i];
                
                obs[i]=itr+1;
            }
            
        }
        return obs;
    }
};