//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
//     long long solve(int n){
//     vector<int>v;
        
//         for(int i=1;i<=sqrt(n);i++)
//         {
//             if(n%i==0)
//             {
//                 v.push_back(i);
//                 if(n/i!=i)
//                 v.push_back(n/i);
               
//             }
           
            
//         }
        
//         long long sum=0;
//         for(int i=0;i<v.size();i++)

// {
//     sum+=v[i];
// }    
// return sum;
// }
    long long sumOfDivisors(int N)
    {
        // Write Your Code here
    
       
          long long ans = 0 ;
        for(int i = 1 ; i <= N ; i++){
            ans  = ans + i * ( N / i );
        }
        return ans;
    
    }
  
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        long long ans  = ob.sumOfDivisors(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends