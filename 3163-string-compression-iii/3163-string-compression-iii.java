class Solution {
    public String compressedString(String word) {
        
        
        int n=word.length();
        
        int i=0;
        int cnt=0;
        
        String res="";
        
        char ch[]=word.toCharArray();
         
        while(i<n)
        {
             cnt=0;
            char chr=ch[i];
            
            while(i<n && cnt<9 && chr==ch[i] )
            {
                cnt++;i++;
            }
            
            res+=String.valueOf(cnt)+String.valueOf(chr);
            
        }
        return res;
    }
}