class Solution {
public:
    
  
    
    bool isPowerOf5(int num) {
        
    if (num <= 0) {
        return false;  
    }

    while (num % 5 == 0) {
        
        num /= 5;
    }

    return num == 1;
}
    
  bool check(int i, int j, string& str) {
      
    int len = j - i + 1;
      
    int ans = 0;

    for (int k = i; k <= j; k++) {
        
        ans += (str[k] - '0') * pow(2, len - 1 - (k - i));
    }

    return isPowerOf5(ans);
}


    int solve(string &str,int idx)
    {
        if(str[idx]=='0')return 1000;
        
        if(idx==str.length())return 0;
        
        int ans=INT_MAX;
        
        for(int i=idx;i<str.length();i++)
        {
            if(check(idx,i,str))
            {
               ans=min(ans,1+solve(str,i+1));
                
            }
        }
        
        return ans;
    }
    
    int minimumBeautifulSubstrings(string s) {
        
        int ans=solve(s,0);
        if(ans>16)
        {
            return -1;
        }
        return ans;
    }
};