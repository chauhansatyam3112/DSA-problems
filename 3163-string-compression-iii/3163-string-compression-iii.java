class Solution {
    public String compressedString(String word) {
        
        
        int n=word.length();
        
        int i=0;
        int cnt=0;
        
        String res="";
         
        while(i<n)
        {
             cnt=0;
            char ch=word.charAt(i);
            
            while(i<n && cnt<9 && ch==word.charAt(i) )
            {
                cnt++;i++;
            }
            
            res+=String.valueOf(cnt)+String.valueOf(ch);
            
        }
        return res;
    }
}