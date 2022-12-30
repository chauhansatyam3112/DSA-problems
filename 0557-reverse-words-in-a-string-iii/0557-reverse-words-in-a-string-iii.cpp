class Solution {
public:
    string reverseWords(string s) {
//         int n=s.length();//vector<string>v;
//            int i=0;int j=0;string ans="",temp="";
//         while(i<n && j<n)
//         {
            
//             j=i+1;
//             while(j!=' ')
//             {
//                 if(j!=n){
//                 j++;}
//                 else{
//                 break;
//                 }
//             }
// //             ans+=s.substr(i,j);
            
            
// //             ans=" "+ans;
//            // v.push_back(ans);
//             // temp=temp+ans;
//             reverse(s.begin()+i,s.begin()+j);
             
//             ans.clear();
// //             int len=temp.length();
           
// //             j=len;i=len;
//             i=j+1;
            
            
//         }
//        /* int m=temp.length()-1;int k=m;
//         string temp1="";
//         for(int i=m;i>=0;i--)
//         {
//              while(k!=' '){
//                  if(k!=0){
//                  k--;}
//                  else
//                      break;
                 
//              }
                 
//                   temp1+=temp.substr(k,i);
//                temp1+=" ";
//             j=temp1.length();
//             i=temp1.length();
                 
            
                 
//         }*/
//         // reverse(ans.begin(),ans.end());
//         //     temp+=ans;
//         return s;
         if(s.size()<=1) return s;
        int i=0,j,len=s.size();
        while(i<len){
            j=i+1;
            while(s[j]!=' ' && j<len)  j++;
            reverse(s.begin()+i,s.begin()+j);
            i=j+1;
        }
        return s;
        
        
    }
};