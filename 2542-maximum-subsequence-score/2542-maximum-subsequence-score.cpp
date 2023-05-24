class Solution {
public:
    static bool comparator(const pair<int,int>&a,const pair<int,int>&b)
    {
        return a.first>b.first;
    }
    
    #define ll long long
    typedef pair<int,int>p;
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        
        vector<pair<int,int>>pr;
        
        for(int i=0;i<nums2.size();i++)
        {
            pr.push_back({nums1[i],nums2[i]});
        }
        sort(pr.begin(),pr.end(),comparator);
        
        ll sum=0;
        ll maxi=INT_MIN;
       priority_queue< p,vector<p> ,greater<p>>pq;
        for(int i=0;i<nums1.size();i++)
        {
            sum+=pr[i].first;
            pq.push({pr[i].second,pr[i].first});
            
            if(pq.size()==k)
            {
                maxi=max(maxi,sum*pq.top().first);
                sum-=pq.top().second;
                pq.pop();
            }
        }
        
//         for(int i=0;i<nums1.size();i++)
//         {
//             sum+=nums2[pr[i].second];
//             if(i==k-1)
//             {
//                 k=k*2;
//                 maxi=max(sum,maxi);
                
//             }
//         }
        // ll mini=pr[k-1].first;
        
        // ll ans=sum*mini;
        // return ans;
        return maxi;
        
        
    
    }
};