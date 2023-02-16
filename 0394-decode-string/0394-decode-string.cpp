class Solution {
public:
    
     string decodeString(string& s) {
    //     string result;
    //     while(i < s.length() && s[i] != ']'){
    //         if(isdigit(s[i])){
    //             int k = 0;
    //             while(i < s.length() && isdigit(s[i]))
    //                 k = k*10 + s[i++] - '0';
    //             i++;
    //             string r = decodeString(s, i);
    //             while(k-- > 0)
    //                 result += r;
    //             i++;
    //         } else
    //             result += s[i++];
    //     }
    //     return result;
    // }
    // string decodeString(string s) {
    //     int i=0;
    //     return decodeString(s,i);
//          stack<int>nums;
//          stack<string>chars;
//          int num=0;
//          string res="";
//          for(int i=0;i<s.size();i++)
//          {
//              if(isdigit(s[i]))
//                  num=num*10+s[i]-'0';
//              else if(isalpha(s[i]))
//                  res+=s[i];
//              else if(s[i]=='['){
//                  chars.push(res);
//              nums.push(num);
//              res="";num=0;}
//              else if(s[i]==']'){
//                 string temp=res;
//              for(int i=0;i<nums.top()-1;i++)
//              {
//                  res+=temp;
//              }}
//              res+=chars.top();
//              chars.pop();nums.pop();
                 
//          }
//          return res;
         stack<string> chars;
        stack<int> nums;
        string res;
        int num = 0;
        for(char c : s) {
            if(isdigit(c)) {
                num = num*10 + (c-'0');                              
            }
            else if(isalpha(c)) {
                res.push_back(c);                
            }
            else if(c == '[') {
                chars.push(res);
                nums.push(num);
                res = "";
                num = 0;
            }
            else if(c == ']') {
                string tmp = res;
                for(int i = 0; i < nums.top()-1; ++i) {
                    res += tmp;
                }
                res = chars.top() + res;
                chars.pop(); nums.pop();
            }
        }
        return res;
        
    }
};