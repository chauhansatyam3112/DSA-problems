class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        
        int  res=0,boat=0;
        int j=people.size()-1;
        int i=0;
        while(i<=j)
        {
            res=people[i]+people[j];
            if(res<=limit)
            {
                i++;j--;
                boat++;
            }
            else{
                j--;
                boat++;
            }
        }
        
       
        return boat;
    }
};