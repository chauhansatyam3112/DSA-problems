class Solution {
public:
//     bool ispalindrome(string str)
//     {
//        int len=str.size();int i=0;
//         int j=len-1;
//         while(i<j )
//         {
//             if(str[i]==str[j]){
//                 i++;j--;}
            
//             else{
//                 return false;
//             }
            
//       }
//         return true;
//     }
    string longestPalindrome(string s) {
//         int i=0,j=0;
//         int n=s.size();string ans;string res="";
//         set<int>st; string str;
//         while(i<n && j<n)
//         {
//             if(st.find(s[i])==st.end())
//                 st.insert(s[i++]);
//             else{
//                str=s.substr(j,i);
//             if(ispalindrome(str)){
                
//                 string s1=str;
//                 if(s1.size()>str.size())
//                     ans=s1;
//                 else
//                     ans=str;
//             }
            
            
//             else{
//                 st.erase(s[j]);
//                 j++;}
                
//             }
//         }
//         return ans;
         int n = s.length();
        int low,high;
        
        int st=0 ;// this will store starting index of longest palindrome substring
      int   len=1; //this will store length of longest palindrome substring
        
        for(int i=1;i<n;i++){
            
            //even case
            low = i;
            high = i-1;
            while(low>=0 && high<n && s[low]==s[high]){
                
                if(high-low+1 > len){//this condition is checking if we got better length of palindrome substring then store it
                    st = low;
                    len = high-low+1;
                }
                low--;high++;
            }
            
            //odd case
            low = i-1;
            high = i+1;
            while(low>=0 && high<n && s[low]==s[high]){
                
                if(high-low+1 > len){
                    st = low;
                    len = high-low+1;
                }
                low--;high++;
            }
            
            
        }
        
        return s.substr(st,len);
        
    }
};