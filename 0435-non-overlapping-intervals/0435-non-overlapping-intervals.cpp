class Solution {
public:
   int eraseOverlapIntervals(vector<vector<int>>& inte) {
    vector<pair<int, int>> v;

  
    int n = inte.size();

    for (int i = 0; i < n; i++) {
        v.push_back({inte[i][1], inte[i][0]});
    }

    sort(v.begin(), v.end());

    int en = v[0].first;
    int st = v[0].second;

    int cnt = 1;

    for (int i = 1; i < n; i++) {
        if (v[i].second >=en) {
            cnt++;
            en = v[i].first;
        }
    }

    return n-cnt; 
}

    
};