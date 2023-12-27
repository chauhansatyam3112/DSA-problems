class Solution {
public:
    int minCost(string colors, vector<int>& need) {
        
        
        multiset<int>st;
        
        int ans=0;
        
        for(int i=0;i<need.size();)
        {
            while(i<need.size()&& (colors[i]==colors[i+1])|| (i>0 && colors[i]==colors[i-1]))
            {
                
               
                st.insert(need[i]);
                
                if(i>0 && colors[i]==colors[i-1] && colors[i]!=colors[i+1])break;
                
                i++;
            }
            
            
            // if(i==need.size()-1 && colors[i]==colors[i-1])st.insert(need[i]);
            
           int cnt=0;
            
           for(auto it:st)
           {
               ans+=it;
               
               cout<<it<<" ";
               
               cnt++;
               
              
               
               
               if(cnt==st.size()-1)break;
               
           }
            cout<<endl;
            
            st.clear();
            
            i++;
        }
        
        return ans;
    }
};