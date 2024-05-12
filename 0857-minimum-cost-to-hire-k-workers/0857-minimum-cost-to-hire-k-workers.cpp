class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
        
        double ans=DBL_MAX;
        
        vector<pair<double,int>>v;
        
        int n=quality.size();
        
        int sum=0;
        
        for(int i=0;i<n;i++)
        {
             
        v.push_back({ static_cast<double>(wage[i]) / quality[i], quality[i] });
    
    }
        
        sort(v.begin(),v.end());
        
        priority_queue<int>pq;
        
        for(int i=0;i<k;i++)
        {
            pq.push(v[i].second);
            
            sum+=(v[i].second);
        }
       
        double p=v[k-1].first;
        
        ans=p*sum;
        
        
        for(int i=k;i<n;i++)
        {
            sum+=(v[i].second);
            
            double ratio=v[i].first;
            
            pq.push(v[i].second);
            
            if(pq.size()>k)
            {
                sum-=pq.top();
                
                pq.pop();
            }
            
            ans=min(ans,sum*ratio);
        }
        
        return ans;
        
        
    }
};