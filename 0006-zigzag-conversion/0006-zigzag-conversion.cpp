class Solution {
public:
    string convert(string s, int n) {
        /*int length = s.length();

        if (numRows > length || numRows <= 1) {
            return s;
        }

        string zigZagChars = "";
        int interval = 2 * numRows - 2;

        for (int i = 0; i < numRows; i++) {
            int step = interval - 2 * i;
            for (int j = i; j < length; j += interval) {
                zigZagChars += s[j];
                if (step > 0 && step < interval && j + step < length) {
                    zigZagChars += s[j + step];
                }                
            }            
        }

        return zigZagChars;*/
//         if(n==1)
//             return s;
//         string ans[n];
//         int currRow=0,mod=1;
//         for(int i=0;i<s.size();i++)
//         {
//             ans[currRow].push_back(s[i]);
//             if(currRow==0){
//                 mod=1;}
//             if(currRow=n-1){
//                 mod=-1;}
            
//             currRow+=mod;
//         }
//         s.clear();
//         for(auto it:ans)
//         {
//             s.append(it);
//         }
//         return s;
         if(n == 1){
            return s;
        }
        
        string ans = "";
        string flag = "";
        int cnt = 0;
        vector<string> v(n);
        for(int i=0; i<(int)s.size(); i++){
            v[cnt] += s[i];
            if(cnt == n-1){
                flag = "up";
            }
            if(cnt == 0){
                flag = "down";
            }
            if(flag == "up"){
                cnt -= 1;
            }
            else{
                cnt += 1;
            }
        }
        for(int i=0; i<n; i++){
            ans += v[i];
        }
        return ans;
        
        
    }
};