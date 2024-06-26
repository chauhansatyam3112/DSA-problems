class Solution {
public:
  
    int solve(vector<string>& words, unordered_map<char, int>& mp, vector<int>& score, int idx) {
        if (idx == words.size()) {
            return 0;
        }

        int maxScore = solve(words, mp, score, idx + 1);

      
        string str = words[idx];
        unordered_map<char, int> tempMap = mp;
        bool canForm = true;
        int currentScore = 0;

        for (char c : str) {
            if (tempMap[c] > 0) {
                tempMap[c]--;
                currentScore += score[c - 'a'];
            } else {
                canForm = false;
                break;
            }
        }

        if (canForm) {
            currentScore += solve(words, tempMap, score, idx + 1);
            maxScore = max(maxScore, currentScore);
        }

        return maxScore;
    }

    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        unordered_map<char, int> mp;

        for (char c : letters) {
            mp[c]++;
        }

        return solve(words, mp, score, 0);
    }

};