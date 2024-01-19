class Solution {
public:
    bool closeStrings(string word1, string word2) {

        int n1 = word1.length(), n2 = word2.length();

        if (n1 != n2)
            return false;

        unordered_map<char, int> mp1, mp2, mp3;

        for (auto it : word1) {
            mp1[it]++;
            mp3[it]++;
        }
        for (auto it : word2) {
            mp2[it]++;
            mp3[it]--;
        }

        bool flag = false;

        for (auto it : mp3) {
            if (it.second > 0) {
                flag = true;
            }
        }

        if (!flag)
            return true;

        vector<int> v1, v2;

        for (auto it : mp1) {
            v1.push_back(it.second);

            if(mp2.find(it.first)==mp2.end())return false;
        }

        for (auto it : mp2) {
            v2.push_back(it.second);
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        if (v1.size() != v2.size())
            return false;

        for (int i = 0; i < v1.size(); i++) {
            if (v1[i] != v2[i]) {
                return false;
            }
        }
        return true;
    }
};