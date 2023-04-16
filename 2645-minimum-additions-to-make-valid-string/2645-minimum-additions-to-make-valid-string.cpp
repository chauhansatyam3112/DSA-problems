class Solution {
public:
    int addMinimum(string word) {
        
        int ans=0;
        
        int i=0;
        while(i<word.length())
        {
            if(word[i]=='a' && i<word.length())
            {
                if(word[i+1]=='b' && i<word.length())
                {
                    if(word[i+2]=='c'&& i<word.length())
                    i+=3;
                    else{
                        ans++;
                       i+=2;}
                }else if(word[i+1]=='c' && i<word.length())
                {
                    ans+=1;
                    i+=2;
                }
                else{
                    ans+=2;
                    i++;
                }
            }else if(word[i]=='b' && i<word.length())
            {
                if(word[i+1]=='c'&& i<word.length())
                {
                    ans+=1;
                    i+=2;
                }else
                {
                    ans+=2;
                    i++;
                }
            }else
            {
                ans+=2;
                i++;
            }
        }
        return ans;
    }
};