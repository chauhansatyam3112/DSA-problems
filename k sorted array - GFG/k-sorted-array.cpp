//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    string isKSortedArray(int arr[], int n, int k)
    {
        //code here.
        // 3 2 1 5 6 4
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        
        for(int i=0;i<n;i++)
        {
            pq.push({arr[i],i});
        }
        
        int cnt=0;
        while(!pq.empty())
        {
            auto val=pq.top().second;
            pq.pop();
            
            if(abs(cnt-val)>k)
            {
                return "No";
            }
            cnt++;
        }
        return "Yes";
        
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>k;
	    Solution ob;
	cout <<ob.isKSortedArray(arr, n, k)<<endl;
	}
	return 0;	 
}
// } Driver Code Ends