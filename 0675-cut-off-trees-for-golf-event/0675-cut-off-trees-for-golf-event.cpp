
#define p pair<int,pair<int,int>>

class Solution {
public:
    int solve(vector<vector<int>>&nums,int &i,int &j,int &u,int &v){
        
         int m=nums.size();
        
        int n=nums[0].size();
        
 
        
        bool found=false;
        
        
          vector<vector<bool>>vis(m,vector<bool>(n,false));
        
        
        queue<pair<int,int>>q;
        
        
        q.push({i,j});
        
        vis[i][j]=true;
        
        int cnt=0;
        
        while(!q.empty()){
            
            int l=q.size();
            
            while(l--){
                
                pair<int,int>a=q.front();
                
                
                int x=a.first,y=a.second;
                
                q.pop();
                
                if(x==u && y==v){
                    
                    found=true;
                    break;
                }
                if(x>0 && nums[x-1][y] && !vis[x-1][y]){
                    
                    vis[x-1][y]=true;
                    
                    q.push({x-1,y});
                }
                if(y>0 && nums[x][y-1] &&  !vis[x][y-1]){
                    
                    vis[x][y-1]=true;
                    
                    q.push({x,y-1});
                }
                if(x<m-1 && nums[x+1][y] && !vis[x+1][y]){
                    
                    vis[x+1][y]=true;
                    
                    q.push({x+1,y});
                }
                if(y<n-1 && nums[x][y+1] && !vis[x][y+1]){
                    
                    vis[x][y+1]=true;
                    
                    q.push({x,y+1});
                }
            }
            if(found)
                
                break;
            
            cnt++;
        }
        
        return found?cnt:-1;
    }

    
    int cutOffTree(vector<vector<int>>& forest) {
        
        
        
 if (forest.empty() || forest[0].empty()) return 0;
        

    int pp = forest.size(), q = forest[0].size();

    vector<vector<int>> trees;

    for (int i = 0; i < pp; i++) {
        
        for (int j = 0; j < q; j++) {
            
            if (forest[i][j] > 1) trees.push_back({forest[i][j], i, j});
        }
    }

    sort(trees.begin(), trees.end());

    int res = 0;
        
    int x= 0, y= 0;

    for (int i = 0; i < trees.size(); i++) {
        
        int step = solve(forest, x, y, trees[i][1], trees[i][2]);

        if (step == -1) return -1;

        res += step;

        x = trees[i][1];
        
        y = trees[i][2];
    }
        
    return res;
        
        
    }
};