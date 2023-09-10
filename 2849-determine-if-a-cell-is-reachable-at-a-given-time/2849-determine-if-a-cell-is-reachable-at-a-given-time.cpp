class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        
        
        
//         if(fx-sx==1 && fy-sy==1 && t>=1)return true;
//         if(sx==fx && sy!=fy)
//         {
//             if(t>=(fy-sy))return true;
//         }
//         else if(fy==sy && sx!=fx)
//         {
//             if(t>=(fx-sx))
//                 return true;
//         }
        
//         if(sx==fx && sy==fy  && t>=3)return true;
        
//         if((sx+t)>fx && (sy+t)>fy)return true;
        
       
            
        
//         return false;
        
    int maxstep=max(abs(fx-sx),abs(fy-sy));
        
        if(maxstep==0)
            return t!=1;
        
        if(maxstep>0)
        {
            return t>=maxstep;
        }
        
        return 0;
        
        
    }
};