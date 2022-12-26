class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        /*string str="";
        int n=strs.size();
         if(strs[0]=="" && strs[1]=="")
             return "";
        if(strs.size()==1)
        {
            return strs[0];
        }
        
        
             int i=0;
            string str1=strs[i];
            for(int j=1;j<n;j++)
            {
                 string str2=strs[j];
                int l=0;  int k=0;

                while(l<str2.size() && k<str1.size())
                {
                char ch=str1[k++];
                
                char ch1=str2[l++];
                if(ch==ch1)
                    str+=ch;
                    
                    
                }
            }
        
        return str;*/
        
        string str="";
        for(int i=0;i<strs[0].size();i++)
        {
            char ch=strs[0][i];
            bool match=true;
            
            
            for(int j=1;j<strs.size();j++)
            {
                if(strs[j].size()<i || ch!=strs[j][i]){
                    match=false;break;}
            }
            if(match==false)
                break;
            else
                str+=ch;
        }
        /* string res="";
        sort(str.begin(),str.end());
        string a=str[0];
        string b=str[str.size()-1];
        for(int i=0;i<str[0].size();i++){
            if(a[i]==b[i])
                res+=a[i];
            else
                break;
        }
        return res;*/
        return str;
    }
};