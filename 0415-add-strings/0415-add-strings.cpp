class Solution {
public:
    string addStrings(string num1, string num2) {
       // string ans="";
//         int n=num1.length(),m=num2.length();
//         int carry=0;
//         string sum;long value=0;
        
//         for(int i=0,j=0;i<n || j<m;i++,j++)
//         {
           
//             value=value+int(num1[n-i-1]-'0')+int(num2[m-j-1]-'0')+carry;
//             carry=0;
//             if(value>9)
//             {
//                 carry++;
//             }
//             string value1=to_string(value);
             
//            // int p=value1.size()-1;
           
//             sum=value1.back()+sum;
//                value=0;
//             value1="";
            
        
//         }
//         return sum;
        int i=num1.size()-1;
        int j=num2.size()-1;
        int carry=0;
        string res;
        while(i>=0 || j>=0 || carry){
            int tempSum=0;
            if(i>=0) tempSum+=(num1[i]-'0') ;
            if(j>=0) tempSum+=(num2[j]-'0') ;
            tempSum+=carry;
            int tempDigit=tempSum%10;
            carry=tempSum/10;
            res.push_back((tempDigit +'0'));
            i--;
            j--;
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
};