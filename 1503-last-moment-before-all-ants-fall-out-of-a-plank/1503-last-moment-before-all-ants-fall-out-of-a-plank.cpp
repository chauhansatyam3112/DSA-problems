class Solution {
public:
    int getLastMoment(int p, vector<int>& left, vector<int>& right) {
        
        sort(left.begin(),left.end());
        sort(right.begin(),right.end());
        
        int ans=0;
        
        int n =left.size();
        int m=right.size();
        
        int maxi=0;
        
        for(int i=0;i<n;i++)
       
//             if(abs(right[m-i]-left[i])==2)
//             {
//                 int d1=(left[i]+2);
//                 int  d2=(n-(right[m-i]+2));
            
            maxi=max(maxi,abs(0-left[i]));
        
            
            for(int i=0;i<m;i++)     
//                 maxi=max(d1,d2);
            
             maxi=max(maxi,abs(p-right[i]));
                
            // }
//             else{
//                 int d3=n-left[i];
//                 int d4=right[m-i];
//                 maxi=max({d3,d4,maxi});
                
            // }
        
        
        return maxi;
        
       
        
        
    }
};