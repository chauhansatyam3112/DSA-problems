class Solution {
public:
    int findUnsortedSubarray(vector<int>& a) {
         stack<int>s;
       int l=a.size(), r=0, temp;
       for(int i=0;i<a.size();i++){
           while(!s.empty() && a[s.top()]>a[i])
           {
               temp=s.top(); 
               s.pop();
               l=min(l,temp);
           }
             s.push(i);
       }
       
       
        for(int i=a.size()-1;i>=0;i--){
           while(!s.empty() && a[s.top()]<a[i])
           {
               temp=s.top();  
               s.pop();
               r=max(r,temp);
           }
             s.push(i);
       }
        
        if(r==0 && l==a.size()) return 0;
        return r-l+1 ;
    }
};