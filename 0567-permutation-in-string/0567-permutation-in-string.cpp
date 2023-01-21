class Solution {
   
public:
//      const int CHAR=256;
//     bool aresame(int mp1[],int mp2[])
//     {
// for(int i=0;i<CHAR;i++){
    
//     if(mp2[i]!=mp1[i])
//         return false;
// }
        
//         return true;
//     }
    bool checkInclusion(string s1, string s2) {
//        int mp1[CHAR];int mp2[CHAR];
        
//         for(int i=0;i<s1.length();i++)
//         {
            
//             mp1[s1[i]]++;mp2[s2[i]]++;
//         }
        
//         for(int i=s1.length();i<s2.length();i++)
//             {
//                 if(aresame(mp1,mp2))
//                     return true;
//             mp2[s2[i]]++;
            
//             mp2[s2[i-s1.length()]]--;
//             // if(mp2[s2[i-s1.length()]]==0)
//             // {
//             //     mp2.erase(s2[i-s1.length()]);
//             //  }
            
            
            
            
//             }
//         return false;
        
        if(s2.size()<s1.size()) return false;
        vector<int> w(26,0), h(26,0);
        for(int i = 0; i<s1.size(); i++){
            w[s1[i]-'a']+=1;
            h[s2[i]-'a']+=1;
        }
        if(w==h) return true;
        for(int i = s1.size(); i<s2.size(); i++){
            h[s2[i-s1.size()]-'a']--;
            h[s2[i]-'a']++;
            if(w==h) return true;
        }
        return false;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};