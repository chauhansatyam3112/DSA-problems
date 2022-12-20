class Solution {
public:
    long long smallestNumber(long long num) {
        if(num==0) return 0;
        string s = to_string(num);
        int neg = 0;
        if(num<0) neg = 1;
        if(neg==0) {
            sort(s.begin(), s.end());
        } else {
            sort(s.begin(), s.end(), greater<int>());
        }
		
        int zeroes = 0;
        char val;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '0') zeroes++;
            else {
                val = s[i];
                break;
            }
        }
        for(int i = 0; i <= zeroes; i++) {
            if(i==0) s[i] = val;
            else
                s[i] = '0';
        }
        num = stoll(s);
        if(neg == 1) num *= -1;
        return num;
        
    }
};