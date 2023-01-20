class Solution {
public:
    int nextGreaterElement(int n) {
        
        string str=to_string(n);
        if(str.length()==1)
        {
            return -1;
        }
        
        int i=str.length()-2;
        for(;i>=0 && str[i]>=str[i+1];i--){
            
        }
        if(i==-1){
            return -1;}
        reverse(str.begin()+i+1,str.end());
        for(int j=i+1;j<str.length();j++)
        {
            if(str[j]>str[i]){
                swap(str[i],str[j]);
            break;}
        }
        long ans=stol(str);
         return ans == n || ans > INT_MAX ? -1 : ans;
        
    
        
        
        
    }
};