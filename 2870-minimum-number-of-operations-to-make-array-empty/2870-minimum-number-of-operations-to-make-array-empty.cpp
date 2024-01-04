class Solution {
public:
   int minOperations(vector<int>& nums) {
       
        map<int,int> mp;
     
        
       
    for (int i = 0; i < nums.size(); i++) {
        
        mp[nums[i]]++;
    }
    
    int ans = 0;
       
       for(auto it:mp)
       {
           int val=it.second;
           
           if(val==1)return -1;
           
           if(val%3==0)
           {
               ans+=(val/3);
           }
           
           else if(val<=4)
           {
               ans+=(val/2);
           }
           
           else
           {
               
               
               int i=1;
               
               val=(val-2);
               
               int cnt=3;
               int p=0;
               
               if(val%3==0)
               {
                   ans+=(val/3);
                   
                   ans+=(1);
               }
               
               else{
               
               while((val-cnt)>0)
               {
                   cnt=3;
                   
                   cnt*=i;
                   
                   p=val-cnt;
                   
                   i++;
               }
                   
               
                   
               ans+=(i);
                   
                p+=2;
               
               ans+=(p/2);
                   
               }
                   
             
                
           }
           
         
       }
       
       return ans;
   
}

};