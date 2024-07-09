class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& c) {
        
       long int finish=0,cnt=0;
        
        finish=c[0][0]+c[0][1];
        
        int p=0;
        
        cnt+=(finish-c[0][0]);
        
        
        for(int i=1;i<c.size();i++)
        {
            
            if(c[i][0]>finish)
            {
                cnt+=c[i][1];
                finish=c[i][0]+c[i][1];
            }
            else{
                
                finish=c[i][0]+(finish-c[i][0])+c[i][1];
                
                cnt+=(finish-c[i][0]); 
                
            }
            
           
            
            
        }
        
        int n=c.size();
        
        double ans=(double)cnt/double(n);
        
        return ans;
    }
};    