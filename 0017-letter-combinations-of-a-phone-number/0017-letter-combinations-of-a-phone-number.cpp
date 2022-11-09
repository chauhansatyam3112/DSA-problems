class Solution {
public:
    void solve(vector<string>&ans,string digits,int index,string output,string arr[])
    {
        if(index>=digits.length()){
            ans.push_back(output);
            return;
        }
        
        
        int n=digits[index]-'0';
        string value=arr[n];
        for(int i=0;i<value.length();i++)
        {
            output.push_back(value[i]);
            solve(ans,digits,index+1,output,arr);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.length()==0)
        return ans;
       string output;
        int index=0;
        
        
       string  arr[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(ans,digits,index,output,arr);
        return ans;
    }
};