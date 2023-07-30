class Solution {
public:
    string solve(string& str1, string& str2, string& str3){
        string t1 = str1;
        string t2="";
        if(t1.find(str2) == string::npos){
        for(int i=str2.size()-1 ; i>=0; i--){
            string cur = t1 + t2;
            if(cur.size() >= str2.size() && cur.substr(cur.size()-str2.size()) == str2) break;
            t2 = str2.substr(i);
         }
         t1 = t1 + t2;
         t2 = "";
        }
        if(t1.find(str3) == string::npos){
        for(int i=str3.size()-1 ; i>=0; i--){
            string cur = t1 + t2;
            if(cur.size() >= str3.size() && cur.substr(cur.size()-str3.size()) == str3) break;
            t2 = str3.substr(i);
         }
         t1 = t1 + t2;
        }
        
        return t1;
    }
    
    string minimumString(string a, string b, string c) {
        
         vector<string> v;

        string s = solve(a, b, c);
        v.push_back(s);
         s = solve(a, c, b);
        v.push_back(s);
         s = solve(b, c, a);
        v.push_back(s);
         s = solve(b, a, c);
        v.push_back(s);
         s = solve(c, a, b);
        v.push_back(s);
         s = solve(c, b, a);
        v.push_back(s);
        int mn = 300;
        for(auto str : v){
            int sz = str.size();
            mn = min(mn, sz);
        }
        vector<string> res;
        for(auto str : v){
            if(str.size() == mn) res.push_back(str);
        }
        sort(res.begin(), res.end());
        
        return res[0];
    }
        
        
        
       
        
        
        
        
    
};