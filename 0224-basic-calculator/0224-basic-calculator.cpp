class Solution {
public:
    
//      int evaluatePostfix(string s)
//     {
        
//         int ans=0;
//         stack<int>st;
//         for(int i=0;i<s.length();i++)
//         {
//             if(isdigit(s[i]))
//             {
//                 st.push(s[i]-'0');
//             }
//             else
//             {
//                 int num1=st.top();st.pop();
//                 int num2=st.top();st.pop();
                
            
//             ans=eval(num2,num1,s[i]);
//             st.push(ans);
//             }
//         }
//         return ans;
    
//     }
//     int eval (int a,int b,char opr)
//     {
//         if(opr=='+')
//         {
//             return a+b;
//         }
//       else
//           return a-b;
        
      
//     }
   
//     int calculate(string s) {
//           unordered_map<char, int> mp;
       
//         mp.insert({'+', 1});
//         mp.insert({'-', 1});
//         mp.insert({'(', 0});
        
//         stack<char> st;
//         string res = "";
        
//         for(auto x: s)
//         {
//             if(isdigit(x))
//                 res += x;
//             else if(x == '(')
//                 st.push(x);
           
//             else if(x == ')')
//             {
//                 while(st.top() != '(')
//                 {
//                     char ch = st.top();
//                     res = res + ch;
//                     st.pop();
//                 }
//                 st.pop(); 
//             }
//             else
//             {
              
//                 while(!st.empty() && mp[x] <= mp[st.top()])
//                 {
//                     res = res + st.top();
//                     st.pop();
//                 }
//                 st.push(x);
//             }
//         }
        
       
//         while(!st.empty())
//         {
//             res += st.top();
//             st.pop();
//         }
        
//        return evaluatePostfix(res);
//        // return ans1;
    
    int calculate(string s) {
        int sum=0;
        int sign=1;
        int n=s.size();
        stack<int>st;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                
                int num=0;
                while(n>i && s[i]>='0' && s[i]<='9')
                {
                    num=num*10+(s[i]-'0');
                    i++;
                }
                sum+=num*sign;
                i--;
          }
            
            if(s[i]=='+')
            {
                sign=1;
            }
            if(s[i]=='-')
            {
                sign=-1;
            }
            
            if(s[i]=='(')
            {
                st.push(sum);
                st.push(sign);
                sign=1;
                sum=0;
            }
            if(s[i]==')')
            {
                sum=st.top()*sum;
                st.pop();
                sum+=st.top();
                st.pop();
            }
        }
        
        return sum;        
        
    }
    
   
        
     
    
};