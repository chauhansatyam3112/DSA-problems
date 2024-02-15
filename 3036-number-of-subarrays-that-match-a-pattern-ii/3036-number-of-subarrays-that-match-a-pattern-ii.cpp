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
    
    int solve(string pattern, string txt)
{
         int ans = 0;

    vector<int> lps = LPS(pattern);

    // vector<int> ans;

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

            // ans.push_back(i - j);
            ans++;

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
    
    
    
    
    int countMatchingSubarrays(vector<int>& nums, vector<int>& pattern) {
        
        
      int n=nums.size(), m=pattern.size();
        string pString = "", nString = "";
        for(int i=0; i<m; i++){
            if(pattern[i] == 1) pString.push_back('a');
            if(pattern[i] == 0) pString.push_back('s');
            if(pattern[i] == -1) pString.push_back('d');
        }

        for(int i=0; i<n-1; i++){
            if(nums[i+1] - nums[i] > 0) nString.push_back('a');
            if(nums[i+1] - nums[i] == 0) nString.push_back('s');
            if(nums[i+1] - nums[i] < 0) nString.push_back('d');
        }

    
   
    
   return solve(pString, nString);
    
    
    
   
    
   
        
    }
};