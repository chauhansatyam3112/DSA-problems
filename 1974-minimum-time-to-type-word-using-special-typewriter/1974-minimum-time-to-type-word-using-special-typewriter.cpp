class Solution {
public:
    int minTimeToType(string word) {
        int time_elapsed = 0, cursor = 'a';
        for(char c : word) {
            if(abs(c - cursor) < 26 - abs(c-cursor))              
                time_elapsed = time_elapsed + abs(c - cursor) + 1;
            else 
                time_elapsed = time_elapsed + 26 - abs(c-cursor) + 1;
            cursor = c;
        }
        return time_elapsed;
    }
};