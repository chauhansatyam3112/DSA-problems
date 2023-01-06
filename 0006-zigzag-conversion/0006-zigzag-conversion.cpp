class Solution {
public:
    string convert(string s, int numRows) {
        int length = s.length();

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

        return zigZagChars;
    }
};