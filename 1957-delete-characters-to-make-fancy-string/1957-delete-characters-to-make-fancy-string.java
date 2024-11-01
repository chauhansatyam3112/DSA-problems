class Solution {
    public String makeFancyString(String s) {
        
        
        char prev=s.charAt(0);
        
        int cnt=1;
        
        StringBuilder res=new StringBuilder();
        
        res.append(s.charAt(0));
        
        for(int i=1;i<s.length();i++)
        {
            if(s.charAt(i)==prev)
            {
                cnt++;
            }
            else{
                
                cnt=1;
                prev=s.charAt(i);
            }
            
            if(cnt<3)
            {
                res.append(s.charAt(i));
            }
        }
        
        return res.toString();
        
    }
}