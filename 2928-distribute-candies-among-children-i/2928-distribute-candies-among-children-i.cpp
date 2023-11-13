class Solution {
public:
    int solve(int n,int limit,int child)
    {
         if(n==0)
        {
            return 1;
        }
        
        if(limit==0 || child==0)
        {
            return 0;
        }
        
       
        
        int ans=0;
        
        for(int i=0;i<=min(n,limit);i++)
        {
            ans+=solve(n-i,limit,child-1);
        }
        
        return ans;
    }
    int distributeCandies(int n, int limit) {
        
        return solve(n,limit,3);
        
        
       
//     int solve(int n) {
//     if (n == 0 || n == 1) {
//         return 1;
//     }

//     int result = 1;

//     for (int i = 2; i <= n; ++i) {
//         result *= i;
//     }

//     return result;
// }

// int distributeCandies(int n, int limit) {
//     int ans = 0;

//     set<multiset<int>> st;

//     for (int i = 0; i <= limit; i++) {
//         map<int, int> mp;

//         int sum = 0;
//         int p1 = i;

//         sum += i;

//         int rem = n - i;

//         if (rem < 0) {
//             continue;
//         }

//         if ((rem + 1) / 2 > limit)
//             continue;

//         int p2 = rem / 2;
//         sum += p2;

//         int p3 = n - sum;

//         multiset<int> temp = {p1, p2, p3};

//         if (st.find(temp) != st.end())
//             continue;

//         mp[p1]++;
//         mp[p2]++;
//         mp[p3]++;

//         int j = 1;

//         for (auto it : mp) {
//             int x = it.second;
//             int res = 0;

//             if (it.second > 1) {
//                 res = solve(x);
//                 j *= res;
//             }
//         }

//         if (j > 1) {
//             ans += (6 / j);
//         } else {
//             ans += 6;
//         }

//         st.insert(temp);
//     }
//     return ans;



    }
};