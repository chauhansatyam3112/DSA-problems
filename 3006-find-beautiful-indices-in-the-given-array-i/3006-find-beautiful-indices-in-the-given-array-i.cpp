class Solution {
public:
    
    vector<int> LPS(string &str)
{

    vector<int> lps(str.length(), 0);

    int length = 0;
    int i = 1;

    while (i < str.length())
    {
        if (str[i] == str[length])
        {
            length++;
            lps[i] = length;
            i++;
        }
        else
        {

            if (length != 0)
            {
                length = lps[length - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}

vector<int>solve(string txt, string pattern)
{

    vector<int> lps = LPS(pattern);

    vector<int> ans;

    int i = 0, j = 0;

    while (i < txt.length())
    {
        if (txt[i] == pattern[j])
        {
            i++;
            j++;
        }

        if (j == pattern.length())
        {

            ans.push_back(i - j);

            j = lps[j - 1];
        }

        else if (txt[i] != pattern[j])
        {

            if (j != 0)
            {
                j = lps[j - 1];
            }
            else
            {
                i++;
            }
        }
    }
    // for (auto it : ans)
    //     cout << it << " ";
    
    return ans;
}
    
    
    vector<int> beautifulIndices(string s, string a, string b, int k) {
        
        vector<int>v1=solve(s,a);
        vector<int>v2=solve(s,b);
        
        
//         for(auto it:v1)cout<<it<<" ";
        
//         cout<<endl;
        
//         for(auto it:v2)cout<<it<<" ";
        
        
        vector<int>ans;
        
        int n=s.length()-1;
            
        
        for(int i=0;i<v1.size();i++)
            
            
        {
            
            int p=max(0,v1[i]-k);
            
             int right=min(n,v1[i]+k);
            
            
            auto left=lower_bound(v2.begin(),v2.end(),p);
            
            
           
            
            if(left!=v2.end() && *left<=right)
            {
                ans.push_back(v1[i]);
            }
            
            
  
            
            
        }
       
        return ans;
        
        
    }
};