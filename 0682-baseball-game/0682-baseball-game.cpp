class Solution {
public:
    int calPoints(vector<string>& op) {
        
        stack<string>st;
        for(int i=0;i<op.size();i++)
        {
            if(op[i]!="C" && op[i]!="D" && op[i]!="+" )
            {
                st.push(op[i]);
            }
            else{
                if(op[i]=="C")
                    st.pop();
                else if(op[i]=="D"){
                    int x=stoi(st.top());
                
                st.push(to_string(2*x));}
                else{
                int x=stoi(st.top());
                    st.pop();
                int y=stoi(st.top());
                   // st.pop();
                    st.push(to_string(x));
                    
                    st.push(to_string(x+y));
                }
            }
        }
        int ans=0;
        while(!st.empty())
        {
             ans+=stoi(st.top());
            st.pop();      
        }
        return ans;
    }
};