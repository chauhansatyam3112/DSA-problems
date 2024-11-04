class Solution {
    public boolean rotateString(String s, String goal) {
        
        if(goal.length()!=s.length())return false;
        StringBuilder sb=new StringBuilder();
        sb.append(s);
        sb.append(s);
        
        if(sb.toString().contains(goal))return true;
        return false;
        
        
    }
}