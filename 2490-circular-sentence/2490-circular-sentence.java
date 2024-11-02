class Solution {
    public boolean isCircularSentence(String s) {
        
        String[] temp = s.split(" ");
    String str = temp[0];
    int m = str.length();
    char c = str.charAt(0);

    int n = temp.length;
    int p = temp[n - 1].length();

    
    if (temp[n - 1].charAt(p - 1) != c) return false;

    
    for (int i = 1; i < n; i++) {
        if (temp[i].charAt(0) != str.charAt(m - 1)) return false;
        
        str = temp[i];
        m = str.length(); 
    }

    return true;
    }
        
    
}
    