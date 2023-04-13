class Solution {
public:
    bool validateStackSequences(vector<int>& pus, vector<int>& pop) {
        
        int j=0;
        stack<int>st;
      
        
        
        for(int i=0;i<pus.size();i++)
        {
            if(st.empty() ||  st.top()!=pop[j])
            {
                st.push(pus[i]);
                
            }
            while(!st.empty() && st.top()==pop[j])
            {
                st.pop();
                j++;
            }
            
        }
        return st.size()==0;
     
       
    }
};