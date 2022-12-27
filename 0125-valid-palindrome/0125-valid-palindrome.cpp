class Solution {
public:
    bool isPalindrome(string s) {
      /*
        for(int i=0;i<s.length();i++)
        {
           if(isalnum(s[i])){
               str1+=s[i];
           }
               else
              continue;
        }
       // transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
        string str=str1;
        reverse(str1.begin(),str1.end());
        if(str1==str)
            return true;
        else
            return false;
            
        
//         while(i<j )
//         {
//            // if(isalnum(str[i]) || isalnum(str[j])){
//                 // char p=tolower(str[i]);
//                 // char q=tolower
//            if(tolower(str1[i])==tolower(str1[j]))
//            {
//                i++;j--;
//            }
//             else{
//                 return false;}
//          }
                   
           
        
//         return true;*/
        int l=0,r=s.size()-1;
        while(l<r)
        {
            if(!isalnum(s[l]))
                l++;
            else if(!isalnum(s[r]))
                r--;
            else if(tolower(s[l])!=tolower(s[r]))
                return false;
            else
            {
                l++;
                r--;
            }
        }
        return true;


   }
};