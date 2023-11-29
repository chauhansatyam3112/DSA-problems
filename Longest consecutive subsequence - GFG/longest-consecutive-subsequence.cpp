//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      
      unordered_set<int>st,st1;
      
      for(int i=0;i<N;i++)
      {
         st.insert(arr[i]);
         
      }
      
      int maxi=INT_MIN;
      for(int i=0;i<N;i++)
      {
          int curr=arr[i];
          
          int cnt=0;
          
          if(!st1.count(arr[i])){
              
          while(st.count(curr-1))
          {
             st1.insert(curr);
             cnt++;
             curr=curr-1;
             
             
          }
          
          curr=arr[i];
          
           while(st.count(curr+1))
          {
              cnt++;
              
              st1.insert(curr);
              
              curr=curr+1;
              
              
          }
          
              
          }
         
          
          
          
         
          
          
          maxi=max(maxi,cnt);
      }
      
      return maxi+1;
      
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends