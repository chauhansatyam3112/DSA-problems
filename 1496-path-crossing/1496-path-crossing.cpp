class Solution {
public:
    bool isPathCrossing(string path) {
        
        
       
        set<pair<int,int>>st;
        
        st.insert({0,0});
        
        int x=0,y=0;
        
        for(int i=0;i<path.length();i++)
        {
            if(path[i]=='N')
            {
                x++;
                
            }
            else if(path[i]=='S')
            {
                x--;
            }
            
            else if(path[i]=='E')
            {
                y++;
            }
            else if(path[i]=='W')
            {
                y--;
            }
            
            
            if(st.find({x,y})!=st.end())return true;
            
            st.insert({x,y});
        }
        return false;
        
          
    }
};