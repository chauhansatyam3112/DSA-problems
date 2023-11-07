class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        
        
        stack<int>st;
        int cnt=0;
        
        for(int i=0;i<nums.size();i++)
        {
            
             if(st.empty())st.push(nums[i]);
            
         else if(!st.empty()  &&  (st.top()<0 && nums[i]>0) || (nums[i]>0 && st.top()>0)|| (nums[i]<0 && st.top()<0))  

                
            st.push(nums[i]);
            
            
           
            
            
           
            
//         if(!st.empty() && nums[i]<0 && st.top()>0){
            
//               if(!st.empty() && abs(st.top())==abs(nums[i]))
//                 {
//                     st.pop();
//                     continue;
//                 }
//             }
            
           
           bool flag=false; 
            
           
          if(!st.empty() && nums[i]<0 && st.top()>0){
               
            while(!st.empty() && abs(st.top())<abs(nums[i]) && nums[i]<0 && st.top()>0)
            {
                cnt++;
                
                
                st.pop();
            
               
              
            }
              
              if(st.size()==0 || st.top()<0){
                  
                    st.push(nums[i]);
                  
                }else if(st.top() == abs(nums[i])){
                    st.pop(); 
                }
              
            cout<<cnt<<endl;
              
          }
            
            
           
            
        
               
            
          
            
               
            
        }
        vector<int>ans;
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        
       
        reverse(ans.begin(),ans.end());
        return ans;
    }
};