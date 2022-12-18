class Solution {
public:
    vector<int> beautifulArray(int N) {
         if (N == 1) return {1};
        vector<int> even = beautifulArray(N / 2);
       
        vector<int> odd = beautifulArray(N - N / 2);
        vector<int> rtn;
        
        
        
        for (int x : even) rtn.push_back(x * 2);
       
        for (int x : odd) rtn.push_back(x * 2 - 1);
        return rtn;
    }
};