class Solution {
public:
    int minimumTimeToInitialState(string str, int k) {
        
        
        int t=1;
        int n=str.length();
        
        for(int i=k;i<str.length();i+=k)
        {
            string x1=str.substr(i,n-i);
            
            string x2=str.substr(0,n-i);
            
            if(x1==x2)return t;
            
            t++;
        }
        
        return t;
    }
};