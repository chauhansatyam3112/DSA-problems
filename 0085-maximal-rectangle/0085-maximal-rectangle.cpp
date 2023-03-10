class Solution {
public:
//         int n=histogram.size(), area=0;
//         stack<int> s;
        
//         for(int i=0; i<n; i++){
//             while(!s.empty() && histogram[s.top()]>=histogram[i]){
//                 int top = s.top();
//                 s.pop();
                
//                 int start;
//                 if(s.empty())
//                     start = -1;
//                 else
//                     start = s.top();
                    
                
//                 int curr_area = histogram[top] * (i - start -1);
//                 area = max(area, curr_area);
//             }
//             s.push(i);
//         }
        
//         while(!s.empty()){
//             int top = s.top();
//             s.pop();

//             int start;
//             if(s.empty())
//                 start = -1;
//             else
//                 start = s.top();
            
//             int curr_area = histogram[top] * (n - start -1);
//             area = max(area, curr_area);
//         }
        
//         return area;
//     }
   // vector<int> nextsamllerelement(vector<int>&heights,int n)
       
//    {
//        stack<int>st;
//       st.push(-1);
//        vector<int>ans(n);
//        for(int i=n-1;i>=0;i--)
//        {
//            int curr=heights[i];
//            while(st.top()!=-1 && heights[st.top()]>=curr)
//            {
//                st.pop();
//            }
//            ans[i]=st.top();
//            st.push(i);
//        }
//        return ans;
//    }
//      vector<int> previoussmallerelement(vector<int>&heights,int n)
//      {
                  
//           stack<int>st;
//       st.push(-1);
//        vector<int>ans(n);
//        for(int i=0;i<n;i++)
//        {
//            int curr=heights[i];
//            while(st.top()!=-1 && heights[st.top()]>=curr)
//            {
//                st.pop();
//            }
//            ans[i]=st.top();
//            st.push(i);
//        }
//        return ans;

         
//      } 
//    int  largestRectangleArea( vector<int>& heights )
//    {
//         int n=heights.size();
//         vector<int >next(n);
//         vector<int>prev(n);
        
//         next=nextsamllerelement(heights,n);
//         prev=previoussmallerelement(heights,n);
        
//         int maxi=INT_MIN;
//         for(int i=0;i<n;i++)
//         {
//             int len=heights[i];
//             if(next[i]==-1)
//                 next[i]=n;
//             int width=next[i]-prev[i]-1;
            
//             int newArea=len*width;
            
//             maxi=max(maxi,newArea);
            
//         }
//         return maxi;
//    }
   
        
     
        // vector<char>heights;
//         vector<int>v;
    
//         for(int i=0;i<matrix[0].size();i++)
//         {
//             v.push_back(matrix[0][i]-'0');
            
//         }
//         int  n=v.size();
//         int maxi=largestRectangleArea(v);
//         for(int i=0;i<matrix.size();i++)
//         {
//             for(int j=0;j<matrix[i].size();j++)
//             {
//                 if(matrix[i][j]-'0'==0)
//                     v[j]=0;
//                 else
//                     v[j]=v[j]+(matrix[i][j]-'0');
//             }
//             // n=v.size();
//             maxi=max(maxi,largestRectangleArea(v));
//         }
//         if(matrix.size()==1 && matrix[0][0]=='1' ||(matrix.size()==2 && matrix[0][0]=='0'&& matrix[0][1]=='1'))
//             return 1;
//         return maxi;
//          int m=matrix.size();
//         if(m==0) return 0;
//         int n=matrix[0].size(), result=0;
//         vector<int> histogram(n, 0);
        
//         for(int i=0; i<m; i++){
//             for(int j=0; j<n; j++){
//                 if(matrix[i][j]=='1')
//                     histogram[j]+=1;
//                 else
//                     histogram[j]=0;
//             }
            
//             result = max(result, largestArea(histogram));
//             cout<<result<<" ";
//         }
//         return result;
    
    vector<int>nextsmall(vector<int>&v1)
    {
        stack<int>st;
        st.push(-1);
        vector<int>ans(v1.size());
        for(int i=v1.size()-1;i>=0;i--)
        {
            int curr=v1[i];
            while(st.top()!=-1 && v1[st.top()]>=curr)
            {
                st.pop();
            }
          ans[i]=st.top();
            st.push(i);
        }
        return ans;
    }
    
     vector<int>prevsmall(vector<int>&v1)
    {
        stack<int>st1;
        st1.push(-1);
        vector<int>ans1(v1.size());
        for(int i=0;i<v1.size();i++)
        {
            int curr=v1[i];
            while(st1.top()!=-1 && v1[st1.top()]>=curr)
            {
                st1.pop();
            }
          ans1[i]=st1.top();
            st1.push(i);
        }
        return ans1;
    }
    int MAH(vector<int>&v1)
    {
        int n=v1.size();
    
        vector<int>nse(n);
        vector<int>pse(n);
        
    nse=nextsmall(v1);
    pse=prevsmall(v1);
        
        vector<int>width(n);
        vector<int>area(n);
        
        for(int i=0;i<v1.size();i++)
        {
            if(nse[i]==-1)
            {
                nse[i]=v1.size();
            }
            
        width[i]=nse[i]-pse[i]-1;
          }
        
        for(int i=0;i<v1.size();i++)
        {
            area[i]=width[i]*v1[i];
         }
        
        return *max_element(area.begin(),area.end());
    }
    
     int maximalRectangle(vector<vector<char>>& mat) {
         
         
         int n=mat.size();
         int m=mat[0].size();
         vector<int>v1;
         
         
         for(int i=0;i<m;i++)
         {
             
             v1.push_back(mat[0][i]-'0');
             
             
         }
         int maxi= MAH(v1);
         
         
         for(int i=1;i<n;i++)
         {
             for(int j=0;j<m;j++)
             {
                
                 if(mat[i][j]=='0')
                 {
                     v1[j]=0;
                  }
                 else{
                     v1[j]=v1[j]+(mat[i][j]-'0');
                 }
              }
             
             maxi=max(maxi,MAH(v1));
         }
         
         return maxi;
         
        
         
        
           
        
    }
};