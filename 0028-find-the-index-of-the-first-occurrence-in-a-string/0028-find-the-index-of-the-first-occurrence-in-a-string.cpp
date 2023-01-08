class Solution {
public:
    int strStr(string h, string need) {
        int n=h.size(), m=need.size();
        for(int i=0;i<=n-m;i++)
        {
           int j=0;
            for(;j<m;j++)
            {
                if(need[j]!=h[i+j])
                    break;
               
            }
            // if(j==0)
            //         i++;
                 if(j==m)
                    return i;
                
                // else
                //     i=j+i;
            
        }
        return -1;
    }
};