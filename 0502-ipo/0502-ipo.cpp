class Solution {
public:
   static bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        
        
        int n=profits.size();
        vector<pair<int,int>>p;
        for(int i=0;i<n;++i)
        {
           p.push_back({profits[i],capital[i]}); 
        }
        // sort(p.begin(),p.end(),[&](int a,int b){
        //     return a.second<b.second;
        // });
        sort(p.begin(),p.end(),sortbysec);
        priority_queue<int>pq;
        int i=0;
        while(k)
        {
            while(i<n && w>=p[i].second)
                pq.push(p[i++].first);
            
            if(!pq.empty()){
                w+=pq.top();
            pq.pop();}
            k--;
            
            
        }
        return w;
       
        
    }
};