class Solution {
public:
    string addBinary(string a, string b) {
        
        int len1=a.length();
        int len2=b.length();
        
        int carry=0,i=0;
        string ans="";
        while(i<len1 || i<len2 || carry!=0)
        {
            int x=0;
            if(i<len1 && a[len1-i-1]=='1')
            {
                x=1;
            }
            int y=0;
            
            if(i<len2 && b[len2-i-1]=='1')
            {
                y=1;
            }
            ans=to_string((x+y+carry)%2)+ans;
            carry=(carry+x+y)/2;
            i++;
        }
        return ans;
    }
};