class Solution {
public:
    int minMovesToCaptureTheQueen(int a, int b, int c, int d, int e, int f) {
        
//         a,b
//         c,d
//         e,f
        
        
      if(a==e or b==f)
      {
          if(a==e && a==c && ((d-b)*(d-f))<0)return 2;
          
          if(b==f && b==d && ((c-a)*(c-e))<0)return 2;
          
          return 1;
      }
        
        
     if(abs(e-c)==abs(f-d))
     {
         if(abs(b-d)==abs(a-c) && (b-f)*(b-d)<0)return 2;
         
         return 1;
     }
         
            
            
        return 2;
            
            
        
    }
    
};