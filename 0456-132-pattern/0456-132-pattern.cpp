class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n=nums.size();
        // stack<int>st;int thrdelemnt=INT_MIN;
        // for(int i=n-1;i>=0;i--)
        // {
        //     if(nums[i]<thrdelemnt) return true;
        //     while(!st.empty() && st.top()<nums[i]){
        //         thrdelemnt=st.top();
        //     st.pop();}
        //          st.push(nums[i]);
        // }
        // return false;
        vector<int> minarr(n);
        minarr[0] = nums[0];
        for(int i = 1; i<n; i++){
           minarr[i] = min(nums[i], minarr[i-1]);  
        }
        stack<int> st;
        for(int j = n - 1; j>=0; j--){
            while(!st.empty() && st.top() <= minarr[j]) st.pop();
            if(!st.empty() && st.top() < nums[j]){
                return true;
            }
            st.push(nums[j]);
        }
        return false;   
        
        
    }
};