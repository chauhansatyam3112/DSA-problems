class Solution {
public:
    int longestWPI(vector<int>& hours) {
        
         int n=hours.size();
    
    unordered_map<int,int> mp;
    int result=0,sum=0;
    for(int i=0;i<n;i++) {
        if(hours[i]>8) {
            sum++;
        }
        else {
            sum--;
        }
        
        if(sum>0)   result=i+1;
        else if(sum<=0) {
            if(mp.find(sum-1)!=mp.end()) {
                result=max(result,i-mp[sum-1]);
            }
        }
        if(mp.find(sum)==mp.end())
            mp[sum]=i;
    }
    return result;
    }
};