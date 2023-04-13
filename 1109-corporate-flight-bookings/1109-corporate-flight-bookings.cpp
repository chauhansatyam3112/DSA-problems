class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        
        
        vector<int>res(n);
        vector<int> change(n+1,0);
        for(int i=0;i<bookings.size();i++)
        {
            change[bookings[i][0]-1]+=bookings[i][2]; // add no of seats to change[start] 
            change[bookings[i][1]]-=bookings[i][2]; // delete no of seats from change[end+1] , so when we add prev seats in future, this will cancel that addition
        }
        res[0]=change[0];
        for(int i=1;i<n;i++)
            res[i]+=res[i-1]+change[i]; // add prev and current seats
        return res;
            
        
//         vector<pair<int,int>>v;
//         for(int i=0;i<book.size();i++)
//         {
//             v.push_back({book[i][0],book[i][2]});
//             v.push_back({book[i][1],book[i][2]});
//         }
//         sort(v.begin(),v.end());
//         vector<int>ans(n);
//       int j=0;
//        for(int i=0;i<n;i++)
//        {
//          int res=0;
//            bool flag=false;
//           while(v[j].first==i+1)
//            {
//               res+=v[j].second;
//               j++;
//               flag=true;
             
               
//            }
//            if(flag==false)
//            {
//                ans.push_back(v[j].second);
//            }
//           else
          
//                ans.push_back(res);
//        }
        
//         return ans;
        
        
    }
};