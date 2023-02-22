class Solution {
public:
     bool solve(vector<int>&weights,int days,int mid)
        {
            int sum=0;int d=1;
            for(int i=0;i<weights.size();i++){
               if(sum+weights[i]<=mid){sum+=weights[i] ;}else{
                   sum=weights[i];
                   d++;
               }
            }
                if(d<=days){
                    return true;
                }else{
                    return false;
                }      
        }
    int shipWithinDays(vector<int>& weights, int days) {
        int total_weight=0;
        int max_weight=0;int ans;//int d=1;
        for(int i=0;i<weights.size();i++)
        {
            if(weights[i]>max_weight)max_weight=weights[i];
            total_weight+=weights[i];
        }
        int low=max_weight,high=total_weight;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(solve(weights,days,mid))
            {
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
       
        return ans;
    }
};