class Solution {
public:
    int minSwaps(string s) {
        int op=0;
        int swap=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='[')
                op++;
            if(s[i]==']')
                op--;
            if(op==-1){
                swap++;
            op=0;
            }
        }
        if(swap%2!=0)
            return (swap/2)+1;
        
            return swap/2;
    }
};