class Solution {
public:
    int maximumGain(string s, int x, int y) {
        
        stack<char> st;
        
    int cnt = 0;

    if (y > x) {
        for (char c : s) {
            if (!st.empty() && c == 'a' && st.top() == 'b') {
                st.pop();
                cnt += y;
            } else {
                st.push(c);
            }
            
        }
            
            
            string rem="";
            
            while(!st.empty())
            {
                rem+=st.top();st.pop();
            }
            
            reverse(rem.begin(),rem.end());
            
            for (char c : rem) {
            if (!st.empty() && c == 'b' && st.top() == 'a') {
                st.pop();
                cnt += x;
            } else {
                st.push(c);
            }
                
            }
                
        }
        
        
        
        
        
    else {
        for (char c : s) {
            if (!st.empty() && c == 'b' && st.top() == 'a') {
                st.pop();
                cnt += x;
            } else {
                st.push(c);
            }
        }
            
             string rem="";
            
            while(!st.empty())
            {
                rem+=st.top();st.pop();
            }
            
            reverse(rem.begin(),rem.end());
            
            for (char c : rem) {
            if (!st.empty() && c == 'a' && st.top() == 'b') {
                st.pop();
                cnt += y;
            } else {
                st.push(c);
            }
                
            }
            
    }

   

    return cnt;
            
    }
};