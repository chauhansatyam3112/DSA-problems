class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n=temp.size();
        vector<int>ans;
        stack<int>st;
        // st.push(0);
        int  cnt=0;
        
        for(int i=n-1;i>=0;i--)
        {
          
            
            while(!st.empty()&& temp[st.top()]<=temp[i]){
                st.pop();     
            }
             if(st.empty())
                    ans.push_back(0);
            
            if( !st.empty() && temp[st.top()]>=temp[i]){
               
                
              int idx=st.top()-i;
            ans.push_back(idx);
                }
            st.push(i);
           
            
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};