class Solution {
public:
    vector<int> lastVisitedIntegers(vector<string>& words) {
        
        
        vector<int>vis,ans;
        
        int cnt=1;
        for(int i=0;i<words.size();i++)
        {
            if(words[i]=="prev" && vis.size()==0)
            {
                ans.push_back(-1);
                continue;
            }
            
           else if(words[i]!="prev")vis.push_back(stoi(words[i]));
            
            else if(words[i]=="prev" && words[i-1]!="prev")
            {
                
                cnt=1;
                ans.push_back(vis.back());
                
            }
            
            else if(words[i]=="prev" && words[i-1]=="prev")
            {
                cnt++;
                
                if(cnt<=vis.size())
                ans.push_back(vis[vis.size()-cnt]);
                
                else
                    ans.push_back(-1);
                
                
            }
        }
        return ans;
    }
};