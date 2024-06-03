class Solution {
public:
    typedef pair<char,int>P;
    
    struct comp {
        
    bool operator()(const pair<char, int> &p1, const pair<char, int> &p2) {
        
        if (p1.first == p2.first) {
            
            return p1.second < p2.second; 
        }
        
        return p1.first > p2.first; 
    }
};
       
    
    
    string clearStars(string s) {
        
        priority_queue<P,vector<P>,comp>pq;
        
        string ans="";
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='*')
            {
                pq.push({s[i],i});
            }
            
            else{
                int idx=pq.top().second;
                
                s[idx]='*';
                
                pq.pop();
            }
        }
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='*')
            {
                ans.push_back(s[i]);
            }
        }
        
        return ans;
        
    }
};