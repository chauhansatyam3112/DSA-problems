class Solution {
public:
    bool check(vector<int>&nums,vector<int>&vec,int step,int val)
    {
        if(step>=nums.size()) return true;
        int cur=nums[step];
        for(int i=0;i<vec.size();i++)
        {
            if(vec[i]+cur<=val)
            {
                vec[i]+=cur;
                if(check(nums,vec,step+1,val)) return true;
                vec[i]-=cur;
            }
            if(vec[i]==0) break;
        }
        return false;
    }
    int minSessions(vector<int>& tasks, int sessionTime) {
         int l=1,r=tasks.size();
        while(l<r)
        {
            int mid=(l+r)/2;
            vector<int>vec(mid,0);
            if(check(tasks,vec,0,sessionTime))
            {
                r=mid;
            }
            else
                l=mid+1;
        }
        return l;
    }
};