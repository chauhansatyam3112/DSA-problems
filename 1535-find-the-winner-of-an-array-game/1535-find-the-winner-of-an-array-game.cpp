class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        
         deque<int> dq(arr.begin()+1, arr.end());
        
        int temp=arr[0];
        
        if(arr.size()<=k)return *max_element(arr.begin(),arr.end());
        
        int cnt=0;
        
       while(cnt<k)
       {
           
               if(dq.front()>temp)
               {
                   dq.push_back(temp);
                   temp=dq.front();
                   
                   cnt=1;
                   dq.pop_front();
                     
               }
               
               else {
                   cnt++;
                   int p=dq.front();
                   
                   dq.pop_front();
                   dq.push_back(p);
               }
           
       }
    return temp;
        
    
    }
};