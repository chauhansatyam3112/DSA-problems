class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())return false;
        
       else if((s+s).find(goal)!=string::npos){
           return true;
         
       }
        return false;
        
    }
};