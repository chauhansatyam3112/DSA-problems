class Solution {
public:
    
   int minute(int hours, int minutes) {
       
    return hours * 60 + minutes;
}

 bool solve(string time1, string time2) {
    
    int hours1 = stoi(time1.substr(0, 2));
    
    int minutes1 = stoi(time1.substr(2, 2));
    
    int hours2 = stoi(time2.substr(0, 2));
    
    int minutes2 = stoi(time2.substr(2, 2));

    int totalMinutes1 = minute(hours1, minutes1);
     
    int totalMinutes2 = minute(hours2, minutes2);

    int differenceInMinutes = abs(totalMinutes2 - totalMinutes1);

    return differenceInMinutes <=59;
}

vector<string> findHighAccessEmployees(vector<vector<string>>& nums) {
   
    unordered_map<string, vector<string>> mp;
    
    for (int i = 0; i < nums.size(); i++) {
        
        mp[nums[i][0]].push_back(nums[i][1]);
    }

    vector<string> ans;

    for (auto it : mp) {
        
        vector<string> v=it.second;
        
        sort(v.begin(), v.end());

       for(int i=2;i<v.size();i++)
       {
           if(solve(v[i],v[i-2]))
           {
               ans.push_back(it.first);
               break;
              
           }
       }
       
    }

    return ans;
}
};