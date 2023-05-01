class Solution {
public:
    double average(vector<int>& salary) {
        int n=salary.size();
        if(n==0) return 0;
        if(n==1 or n==2) return 0;
        double ans=0;
        sort(salary.begin(),salary.end());
        for(auto x:salary) ans+=x;
        ans-=salary[0];
        ans-=salary[n-1];
        return ans/(n-2);
    }
};