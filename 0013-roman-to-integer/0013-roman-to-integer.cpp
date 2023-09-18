class Solution {
public:
    int romanToInt(string str) {
        
      map<char,int>mp;
        
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        
        int n=str.length();
        
        char c=str.back();
        int sum=mp[c];
        for(int i=n-2;i>=0;i--)
        {
            if(mp[str[i]]>=mp[c])
            {
                sum+=mp[str[i]];
                
            }
            else{
                sum-=mp[str[i]];
            }
            c=str[i];
        }
        return sum;
      
    }
};