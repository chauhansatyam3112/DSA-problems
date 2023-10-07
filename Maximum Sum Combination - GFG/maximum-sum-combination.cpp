//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> maxCombinations(int n, int k, vector<int> &a, vector<int> &b) {
        // code here
        
        priority_queue<pair<int,pair<int,int>>>pq;
        
        set<pair<int,int>>st;
        
        vector<int>ans;
        
        sort(a.begin(),a.end(),greater<int>());
        sort(b.begin(),b.end(),greater<int>());
        
        pq.push({a[0]+b[0],{0,0}});
        
        for(int i=0;i<k;i++)
        {
            pair<int,pair<int,int>>p=pq.top();
            
            
            ans.push_back(p.first);
            pq.pop();
            
            
         if(p.second.first+1<n && st.find({p.second.first+1,p.second.second})==st.end())
        {
            pq.push({a[p.second.first+1]+b[p.second.second],{p.second.first+1,p.second.second}});
            
            st.insert({p.second.first+1,p.second.second});
            
        }
        
         if(p.second.second+1<n && st.find({p.second.first,p.second.second+1})==st.end())
        {
            pq.push({a[p.second.first]+b[p.second.second+1],{p.second.first,p.second.second+1}});
            
            st.insert({p.second.first,p.second.second+1});
            
        }
        
        }
        
        
        
        return ans;
        
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<int> A(N), B(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        for (int i = 0; i < N; i++) {
            cin >> B[i];
        }
        Solution obj;
        vector<int> ans = obj.maxCombinations(N, K, A, B);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends