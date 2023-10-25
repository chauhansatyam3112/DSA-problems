class Solution {
public:

    int kthGrammar(int n, int k) {
        
        
        
        int left=1,right=pow(2,n-1);
        
        int ans=0;
        
        while(left<right)
        {
            int mid=left+(right-left)/2;
            
            if(k<=mid)right=mid;
            
            else
            {
                left=mid+1;
                ans^=1;
            }
        }
        
        return ans;
        
        
//         string n1="0",n2="01";
        
//         if(n==1 && k==1)return 0;
        
//         if(n==2 && k==1)return 0;
        
//         if(n==2 && k==2)return 1;
        
//         // vector<string>v;
        
//         string prev,curr;
        
// //        v.push_back(n1);v.push_back(n2);
        
//         prev=n2; curr=n2;
        
//         for(int i=2;i<n;i++)
//         {  
//             string ni=prev;
            
//             // cout<<ni<<endl;
            
//             int idx=0;
            
//             while(idx<prev.size())
//             {
//                 string str=prev;
             
//                 string p=to_string(1^(str[idx]-'0'));
                
//                 // cout<<p<<endl;
                
//                 ni+=p;
                
// //                 cout<<(v.back()[idx])<<endl;
// //                 cout<<ni;
                
//                 idx++;   
                
//             }
            
// //             cout<<ni<<endl;
            
//             prev=ni;
            
            
            
                 
//         }
//         // string str=[n-1];
// //         cout<<"[]"<<endl;
// //         cout<<str<<endl;
        
//         return int (prev[k-1]-'0');
     
    }
};