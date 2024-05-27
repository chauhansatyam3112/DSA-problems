class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& q, int x) {
        
        vector<pair<int,int>>v;
        
        for(int i=0;i<nums.size();i++)v.push_back({nums[i],i});
        
        sort(v.begin(),v.end());
        
        int idx=-1,idx1=-1;
        
        bool flag=false;
        
        for (int i = 0; i < v.size(); ++i) {
            
        if (v[i].first == x) {
            
            if (idx == -1) {
                idx= i;
            }
            idx1 = i;
        }
    }
        int occr=-1;
        
        // cout<<flag<<endl;
        
        if(idx!=-1 && idx1!=-1)
        
         occr=idx1-idx+1;
        
        vector<int>ans;
        
        // cout<<occr<<endl;
        
        cout<<idx<<" "<<idx1<<endl;
        
        cout<<occr<<endl;
        
        
       
        for(int i=0;i<q.size();i++)
        {
            if(q[i]>occr)
            {
                ans.push_back(-1);
            }
            else{
                
              
                ans.push_back(v[idx+q[i]-1].second);
                
            }
        }
        
        return ans;
        
        
    
    }
};