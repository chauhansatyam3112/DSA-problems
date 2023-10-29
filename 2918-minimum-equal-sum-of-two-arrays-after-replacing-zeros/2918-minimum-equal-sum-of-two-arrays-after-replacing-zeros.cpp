class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        
       int cnt1=0,cnt2=0;
        long long sum1=0,sum2=0;
        
        for(int i=0;i<nums1.size();i++)
        {
            sum1+=nums1[i];
                                     
            if(nums1[i]==0)
                
            cnt1++;
            
                                    
     }
            cout<<sum1<<endl;
        
        for(int i=0;i<nums2.size();i++){
            
            if(nums2[i]==0)
                
             cnt2++;
            
            sum2+=nums2[i];
        }
        cout<<sum2<<endl;
        
        cout<<cnt1<<" "<<cnt2<<endl;
        
        if(sum1==sum2 && cnt1==0 && cnt2==0) return sum1;
        
        if(sum1==sum2 && (cnt1!=0 && cnt2!=0))  return sum1+=(cnt1>cnt2)?cnt1:cnt2;
      
        
        long long minisum=0;
        
      
      
             
        
        
          if(cnt1==0 && sum1<sum2+cnt2) return -1;
        
          if(cnt2==0 && sum2<sum1+cnt1) return -1;
         
             sum2+=(cnt2);
             
             sum1+=cnt1;
        
           return max(sum1,sum2);

        
      
        
      
        
        
    }
};