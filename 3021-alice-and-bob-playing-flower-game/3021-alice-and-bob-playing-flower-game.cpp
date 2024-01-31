class Solution {
public:
    #define ll long long
    
    long long flowerGame(int n, int m) {
        
        ll even1=n/2;
        ll even2=m/2;
        
        ll odd1=(n+1)/2;
        ll odd2=(m+1)/2;
        
        return (even1*odd2)+(odd1*even2);
    }
};