class Solution {
public:
    
    vector<int>solve1(vector<int>&v)
    {
        int n=v.size();
        
        stack<int>st;
        
        vector<int>ans(n,-1);
        
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && v[st.top()]>=v[i])
            {
                st.pop();
            }
            
            if(!st.empty())
            {
                ans[i]=st.top();
            }
            
            st.push(i);
            
        }
        
        return ans;
    }
    
    
     vector<int>solve2(vector<int>&v)
    {
        int n=v.size();
        
        stack<int>st;
        
        vector<int>ans(n,n);
        
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && v[st.top()]>=v[i])
            {
                st.pop();
            }
            
            if(!st.empty())
            {
                ans[i]=st.top();
            }
            
            st.push(i);
            
        }
         
         
         return ans;
    }
    
    
    
    
    
    int MAH(vector<int>&v)
    {
        
        int n=v.size();
        
        vector<int>nsl(n);
        
        nsl=solve1(v);
        
        vector<int>nsr(n);
        
        nsr=solve2(v);
        
        vector<int>width(n);
        
        for(int i=0;i<n;i++)
        {
            width[i]=nsr[i]-nsl[i]-1;
            
        }
        
        int maxi=INT_MIN;
        
        for(int i=0;i<n;i++)
        {
            int area=width[i]*v[i];
            
            
            maxi=max(maxi,area);
        }
        
        return maxi;
        
    }
    
    
    int maximalRectangle(vector<vector<char>>& matrix) {
        
        int n=matrix.size();
        int m=matrix[0].size();
        
        vector<int>v;
        
        for(int i=0;i<m;i++)
        {
            v.push_back(matrix[0][i]-'0');
        }
        
        int maxi =MAH(v);
        
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]-'0'==0)
                {
                    v[j]=0;
                }
                else{
                    
                    v[j]=(matrix[i][j]-'0')+v[j];
                }
            }
            
            maxi=max(maxi,MAH(v));
            
        }
        
        
        return maxi;
        
        
    }
};