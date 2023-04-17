class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int ex) {
        int n=candies.size();
        vector<bool>v(n);
        vector<pair<int,int>>temp;
        for(int i=0;i<n;i++)
            
        {
            temp.push_back({candies[i],i});
        }
        sort(temp.begin(),temp.end());
      for(int i=0;i<n;i++)
      {
        int check=temp[i].first;
        int res=check+ex;
          if(res>=temp[n-1].first)
          {
              v[temp[i].second]=true;
          } 
     }
        return v;
}
};