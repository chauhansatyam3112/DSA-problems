class Solution {
public:
    int solve(int x,int y, string ch)
{
     if(ch=="+")
     {
         return x+y;
     }
        
    else if(ch=="-")
    {
        return (y-x);
    }
    
    else if(ch=="*")
    {
        return x*y;
    }
    
    else if(ch=="/")
    {
        return y/x;
    }
        
        return 0;
        
}
    int evalRPN(vector<string>& tokens) {
        
        
        stack<int>st;
        
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]!="+" and tokens[i]!="-" and tokens[i]!="*" and tokens[i]!="/")
            {
                st.push(stoi(tokens[i]));
               
            }
            
            else
               
            {
                
                if((!st.empty() && st.size()>=2)){
                    
                int x=st.top();
                    
                st.pop();
                
                int y=st.top();
                
                st.pop();
                
                int res= solve(x,y,tokens[i]);
                    
                   st.push(res);
                    
                    
                  }
            }
        }
        return st.top();
        
    
    }
};