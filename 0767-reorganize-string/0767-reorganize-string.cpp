class Solution {
public:
    string reorganizeString(string s) {
        string ans="";
        priority_queue<pair<int,char>>pq;
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        for(auto it:mp)
        {
            pq.push(make_pair(it.second,it.first));
            
        }
        pair<int ,char>p={-1,'$'};
        while(pq.size()>0)
        {
            auto temp=pq.top();
            pq.pop();
            ans+=temp.second;
            temp.first--;
            if(p.first>0)
            {
                pq.push(p);
            }
            p=temp;
        }
        if(s.size()==ans.size())
            return ans;
        return "";
    }
};