class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        
        
        int ans=0;
        
      
        for(int i=0;i<bank.size()-1;i++)
        {
            int cnt1=0,cnt2=0;
            
            for(int j=0;j<bank[0].length();j++)
            {
                if(bank[i][j]=='1'){
                    
                 cnt1++;
                   
                }
            }
            
            if(cnt1!=0)
            {
                for(int k=i+1;k<bank.size();k++)
                {
                    for(int l=0;l<bank[0].size();l++)
                    {
                        if(bank[k][l]=='1')
                        {
                            cnt2++;
                        }
                    }
                    
                    
                    if(cnt2!=0)break;
                    
                }
            }
            
            ans+=(cnt1*cnt2);
            
            
        }
        
        return ans;
    }
};