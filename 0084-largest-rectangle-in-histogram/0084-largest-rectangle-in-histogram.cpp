class Solution {
public:
    
   vector<int> nextsamllerelement(vector<int>&heights,int n)
       
   {
       stack<int>st;
      st.push(-1);
       vector<int>ans(n);
       for(int i=n-1;i>=0;i--)
       {
           int curr=heights[i];
           while(st.top()!=-1 && heights[st.top()]>=curr)
           {
               st.pop();
           }
           ans[i]=st.top();
           st.push(i);
       }
       return ans;
   }
    vector<int> previoussmallerelement(vector<int>&heights,int n)
     {
                  
          stack<int>st;
      st.push(-1);
       vector<int>ans(n);
       for(int i=0;i<n;i++)
       {
           int curr=heights[i];
           while(st.top()!=-1 && heights[st.top()]>=curr)
           {
               st.pop();
           }
           ans[i]=st.top();
           st.push(i);
       }
       return ans;

         
     } 
       
    int largestRectangleArea(vector<int>& heights) {
       int n=heights.size();
        vector<int >next(n);
        vector<int>prev(n);
        
        next=nextsamllerelement(heights,n);
        prev=previoussmallerelement(heights,n);
        
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            int len=heights[i];
            if(next[i]==-1)
                next[i]=n;
            int width=next[i]-prev[i]-1;
            
            int newArea=len*width;
            
            maxi=max(maxi,newArea);
            
        }
        return maxi;
        
        
        
    }
};