class Solution {
public:
    vector<string> getWordsInLongestSubsequence(int n, vector<string>& words, vector<int>& groups) {
        
        
        vector<int>index1,index2;
         bool flag1=true;
        
        for(int i=0;i<n;i++)
        {
           
            if(groups[i]==1 && flag1)
            {
                index1.push_back(i);
                flag1=false;
            }
            if(groups[i]==0 && !flag1)
            {
                index1.push_back(i);
                flag1=true;
            }
        }
          bool flag2=true;
        
        for(int i=0;i<n;i++)
        {
           
            if(groups[i]==0 && flag2)
            {
                index2.push_back(i);
                flag2=false;
            }
            if(groups[i]==1 && !flag2)
            {
                index2.push_back(i);
                flag2=true;
            }
        }
        
        vector<int>v;
        if(index1.size()>index2.size())
        {
            v=index1;
        }
        else{
            v=index2;
        }
       
        vector<string>ans;
        
        for(int i=0;i<max(index1.size(),index2.size());i++)
        {
            ans.push_back(words[v[i]]);
           
        }
        return ans;
    }
};