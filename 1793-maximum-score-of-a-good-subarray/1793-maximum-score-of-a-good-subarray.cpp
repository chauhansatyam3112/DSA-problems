class Solution {
public:
    
    vector<int> solve(vector<int>& arr,int k) {
        
    int n = arr.size();
        
    vector<int> left(n, -1); 
        
    vector<int> right(n, n); 
    
    stack<int> prevStack; 
        
    stack<int> nextStack; 

   
    for (int i = 0; i < n; i++) {
        
        while (!prevStack.empty() && arr[prevStack.top()] >=arr[i]) {
            
            prevStack.pop();
        }
        if (!prevStack.empty()) {
            
            left[i] = prevStack.top();
        }
        prevStack.push(i);
    }

    
    while (!prevStack.empty()) {
        prevStack.pop();
    }
        
        for(int i=0;i<arr.size();i++)cout<<left[i] <<" ";
        
        cout<<endl;

  
    for (int i = n - 1; i >= 0; i--) {
        while (!nextStack.empty() && arr[nextStack.top()] >=arr[i]) {
            
            nextStack.pop();
        }
        if (!nextStack.empty()) {
            
            right[i] = nextStack.top();
        }
        nextStack.push(i);
    }
        for(int i=0;i<arr.size();i++)cout<<right[i]<<" ";

   
     vector<int> result(n);
        
    
       for (int i = 0; i < n; i++) {
        
        if(left[i]<k && right[i]>k)
        {
            result[i]=(right[i]-left[i]-1);
        }
       
        

    }

    return result;
}
    

    int maximumScore(vector<int>& nums, int k) {
        
        int n=nums.size();
        
       vector<int>res= solve(nums,k);
        
        int maxi=0;
        
        for(int i=0;i<res.size();i++)
        {
            int p=(res[i]*nums[i]);
            
            maxi=max(p,maxi);
        }
        return maxi;
        
        
    }
};