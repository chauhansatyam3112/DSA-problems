//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
     bool isPossible(int pages,int a[],int n,int m)
    {
        
        long long sum=0;
        long long  cnt=1;
        
        for(int i=0;i<n;i++)
        {
            if(sum+a[i]<=pages)
             sum+=a[i];
            
          else
            {
                cnt++;
                sum=a[i];
            }
            
            if(cnt>m or a[i]>pages)
            return false;
        }
        return true;
    }
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        
        //code here
      long int sum=0;
     long int ans=-1;
      for(int i=0;i<N;i++)
      {
          sum+=A[i];
      }
      
     // sort(A,A+N);
      long long  left=*max_element(A,A+N),right=sum;
      
      while(left<=right)
      {
          int mid=left+(right-left)/2;
          
          if(isPossible(mid,A,N,M))
          {
              ans=mid;
             right=mid-1;
          }
          else
          left=mid+1;
        
      }
      return ans;
    }
    int splitArray(int arr[] ,int N, int K) {
        // code here
        return findPages(arr,N,K);
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends