class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        
        
        int cnt=1;
        vector<string>v;
        
        for(int i=0;i<target.size();i++)
        {
            while(cnt!=target[i])
            {
                cnt++;
             v.push_back("Push");   
             v.push_back("Pop");
                
            }
            v.push_back("Push");
            cnt++;
            
        }
        return v;
    }
};