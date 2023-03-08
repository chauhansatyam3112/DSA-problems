class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
          int  left = 1;
        int right = *max_element(piles.begin(),piles.end());
        
        while(left <right){
            int mid = left + (right - left) / 2;
            if(solve(piles, mid, h)) right = mid;
            else left = mid + 1;
        }
        return left;
    }
    bool solve(vector<int>& piles, int k, int h){
        int hours = 0;
        for(int pile : piles){
            int div = pile / k;
            hours += div;
            if(pile % k != 0) hours++;
        }
        if(hours>h)
            return false;
        else 
            return true;
      //  return hours <= h;

    }
};