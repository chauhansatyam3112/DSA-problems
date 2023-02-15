class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
//         long long sum=0;int n=num.size()-1;
//         vector<int>ans  ; string str1=to_string(k);int m=str1.size()-1;
//         int carry=0;
//         int i=num.size()-1;
//         for(;i>=0;i--)
//         {
            
// //            unsigned long long int nums=num[i]*pow(10,n);
// //             n--;
// //             sum=sum+nums;
           
            
            
            
//             sum=num[i]+(str1[m--]-'0')+carry;
//             int new_sum=sum;
            
            
//              carry=sum/10;
//             if(i==0 &&  new_sum>9)
//             {
//                 while(new_sum>0)
//                 {
                
//                     ans.push_back(new_sum%10);
//                     new_sum=new_sum/10;
//                 }
              
//             }
//             else{           
//            ans.push_back(sum%10);}
//             if(m<0)
//                 break;
            
            
             
            
//         }
//         if(i<0 && m>=0)
//         {
            
//                 int sum=(str1[m--]-'0')+carry;
//             int new_sum=sum;
//             if(m==0 && new_sum>9)
//                 while(new_sum>0)
//                 {
//                     ans.push_back(new_sum%10);
//                     new_sum=new_sum/10;
                    
//                 }
//         else 
//                 ans.push_back(sum);
//             carry=sum/10;
//         }
//         if(m<0){
//         for(int j=i-1;j>=0;j--)
//         {
            
//             int sum=carry+num[j];
//             int new_sum=sum;
//              if(j==0 &&  new_sum>9)
//              {
//                 while(new_sum>0)
//                 {
//                     ans.push_back(new_sum%10);
//                     new_sum=new_sum/10;
//                 }
              
//             }
//             else
//             ans.push_back(sum%10);
//             carry=sum/10;
//          }}
//         reverse(ans.begin(),ans.end());
        
//         return ans;
        for(int i=A.size()-1;i>=0&&K>0;i--)
 {
     A[i]+=K;
     K=A[i]/10;
     A[i]%=10;
 }
     while(K>0)
     {
         A.insert(A.begin(),K%10);
         K/=10;
     }
     return A;
    }
    
};