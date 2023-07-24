//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
long long merge(long long arr[], long long left, long long mid, long long right) {
    long long cnt = 0;
    long long low = left, high = mid + 1;
    vector<long long> temp;
    
    while (low <= mid && high <= right) {
        if (arr[low] <= arr[high]) {
            temp.push_back(arr[low]);
            low++;
        } else {
            temp.push_back(arr[high]);
            cnt += (mid - low + 1); // Corrected line to count inversions
            high++;
        }
    }
    
    while (low <= mid) {
        temp.push_back(arr[low]);
        low++;
    }
    
    while (high <= right) {
        temp.push_back(arr[high]);
        high++;
    }
    
    for (int i = left; i <= right; i++) {
        arr[i] = temp[i - left];
    }
    
    return cnt;
}

    
    long long mergesort(long long arr[],long long left,long long right)
    {
        long long cnt=0;
        
        if(left>=right) return cnt;
        
        long long mid=left+(right-left)/2;
        
        cnt+=mergesort(arr,left,mid);
       cnt+= mergesort(arr,mid+1,right);
        
       cnt+= merge(arr,left,mid,right);
       
       return cnt;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        
        
      return  mergesort(arr,0,N-1);
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends