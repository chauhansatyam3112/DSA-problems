class Solution {
public:
    
   static bool compare(pair<int,int>p1,pair<int,int>p2)
    {
        if(p1.first==p2.first)
        {
            return p1.second<p2.second;
        }
        
        return p1.first<p2.first;
        
    }
    vector<vector<int>> getSkyline(vector<vector<int>>& build) {
        
        vector<vector<int>>ans;
        
        vector<pair<int,int>>v;
        
        for(int i=0;i<build.size();i++)
        {
            int height=build[i][2];
            
            int start=build[i][0];
            
            int end=build[i][1];
            
            v.push_back({start,-1*height});
            
            v.push_back({end,height});
        }
        
        sort(v.begin(),v.end(),compare);
        
        
        multiset<int>st;
        
        st.insert(0);
        
        int maxi=0;
        
        for(auto it:v)
        {
            if(it.second<0)
            {
                st.insert(-1*it.second);
                
                if(maxi!=*st.rbegin())
                {
                    maxi= *st.rbegin();
                    
                    vector<int>temp={it.first,maxi};
                    
                    ans.push_back(temp);
                }
                
                
            }
            else{
                
                auto itr= st.find(it.second);
                
               
                if(itr!=st.end())
                    st.erase(itr);
                
                
                if(*st.rbegin()!=maxi)
                {
                    maxi=*st.rbegin();
                    
                    vector<int>temp={it.first,maxi};
                    
                    ans.push_back(temp);
                }
                
               
                
                
                
            }
            
            
        }
        
        return ans;
        
        
    }
};