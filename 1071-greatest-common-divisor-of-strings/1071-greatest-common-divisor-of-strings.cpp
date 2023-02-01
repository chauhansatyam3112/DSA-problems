class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        unordered_map<char,int>mp;
        set<char>st1,st2;
        for(auto it:str1)
        {
            st1.insert(it);
        }
        for(auto it:str2)
        {
            st2.insert(it);
        }
        if(st1!=st2)
        {
            return "";
        }
        string ans="";
        if(str1.length()<str2.length())
            swap(str1,str2);
    // char first=str1[0];
    //     for(int i=0;i<str1.length();i++)
    //     {
    //         if(mp.find(str1[i])==mp.end())
    //         {
    //             if(str1[i]==str2[i])
    //                 ans+=str1[i];
    //         }
    //         if(mp.find(str1[i])!=mp.end() && str1[i]!=first && mp.find(first)==mp.end())
    //         {
    //             if(str1[i]==str2[i])
    //                 ans+=str1[i];
    //         }
    //         mp[str1[i]]++;
        bool flag=true;
        int gcd=__gcd(str1.length(),str2.length());
        int i=0;
        for(;i<gcd;i++)
        {
           if(str1[i]!=str2[i])
           {
               break;
           }
           
           
        }
        if(i==gcd){
         for(int j=0;j<gcd;j++)
        {
           ans+=str1[j];
           
           
        
        }
        }
        if(ans!=""){
        for(int i=gcd;i<str2.length();i++)
        {
            if(str1[i]!=str2[i]){
            flag=false;
            break;}
        }
        }
        if(!flag)
            return "";
        else
        
         return ans;
    }
   
};