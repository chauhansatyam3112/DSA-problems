//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        
        int cnt=0;
        int temp=n;
        
        while(temp!=0)
        {
            cnt++;
            temp/=10;
        }
        long long sum=0;
        int q=n;
        while(n!=0)
        {
            int p=n%10;
            
            sum+= pow(p,cnt);
        n/=10;
        }
      if(sum==q)
      {
         return "Yes";
         
      }
      else
      return "No";
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends