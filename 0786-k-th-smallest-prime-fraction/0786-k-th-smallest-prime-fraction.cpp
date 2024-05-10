class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        
            priority_queue<pair<double, pair<int, int>>, vector<pair<double, pair<int, int>>>, 
            
            greater<pair<double, pair<int, int>>>> pq;

        for (int i = 0; i < arr.size() - 1; i++)
                
            pq.push({(double)arr[i] / arr.back(), {i, arr.size() - 1}});
        
        
        while (--k > 0) {
                
            pair<int, int> cur = pq.top().second;
                
            pq.pop();
                
            cur.second--;
                
            if (cur.second > cur.first)
                    
                pq.push({(double)arr[cur.first] / arr[cur.second], 
                         
                    {cur.first, cur.second}});
        }
        
       
        pair<int, int> result = pq.top().second;
            
        return {arr[result.first], arr[result.second]};
     
    }
};