class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {

        unordered_map<int, vector<int>> mp;

        unordered_set<int> st;

        if (n == 1 && trust.size() == 0)
            return 1;

        if (n == 2 && trust.size() == 0)
            return -1;

        for (int i = 0; i < trust.size(); i++) {
            mp[trust[i][0]].push_back(trust[i][1]);

            st.insert(trust[i][0]);
            st.insert(trust[i][1]);
        }

        int val = -1;
        
        int cnt=0;

        for (auto it : st) {
            if (mp.find(it) == mp.end()) {

                val = it;
                
                cnt++;
            }
        }
        
       if(cnt>=2)return -1; 
        
        for (auto it : mp) {
            
            vector<int> v = it.second;

            bool flag = false;

            for (auto itr : v) {
                if (itr == val) {
                    flag = true;

                    break;
                }
            }

            if (flag == false) {
                return -1;
            }
        }

        return val;
    }
};