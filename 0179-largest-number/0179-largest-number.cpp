class Solution {
    
    private:
static bool comparator(string a, string b) {
    return a + b > b + a;
}
public:
    
    
    string largestNumber(vector<int>& nums) {
       
        
        vector<string>res;
        string ans;
        for(int i=0;i<nums.size();i++)
        {
            res.push_back(to_string(nums[i]));
        } 
        sort(res.begin(),res.end(),comparator);
        for(int i=0;i<res.size();i++)
        {
               ans+=res[i];         
        }
        int start=0;
        while(ans[start]=='0' && start<ans.size()-1) start++;
        return ans.substr(start);
    }
};