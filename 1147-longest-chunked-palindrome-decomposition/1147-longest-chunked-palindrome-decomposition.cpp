class Solution {
public:
    int longestDecomposition(string text) {
          string l="",r="";int cnt=0;
        int n=text.length();
        for(int i=0;i<n;i++)
        {
            l+=text[i];
            r=text[n-i-1]+r;
            if(l==r){
                cnt++;
            l="";r="";
            }
        }
        return cnt;
    }
};