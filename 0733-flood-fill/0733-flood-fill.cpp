class Solution {
public:
    
    vector<vector<int>>directions{{1,0},{-1,0},{0,1},{0,-1}};
    
    void dfs(int sr,int sc,vector<vector<int>>vis,int n,int m,int color,vector<vector<int>>& image,int inicolor)
        
    {
        vis[sr][sc]=true;
        
        image[sr][sc]=color;
        
        for(auto it:directions)
        {
            int xx=sr+it[0];
            int yy=sc+it[1];
            
            if(xx<0 || xx>=n || yy<0 || yy>=m || vis[xx][yy] || image[xx][yy]==color || image[xx][yy]!=inicolor)
                continue;
            
            dfs(xx,yy,vis,n,m,color,image,inicolor);
        }
        
        
        
        
        
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int n=image.size(),m=image[0].size();
        
        vector<vector<int>>vis(n,vector<int>(m,false));
        
        int inicolor=image[sr][sc];
        
        
        
        dfs(sr,sc,vis,n,m,color,image,inicolor);
        
        return image;
        
        
    }
};