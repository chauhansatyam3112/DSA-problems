class Solution {
public:
    bool match(string s, string t){
		unordered_map<char,char> mp1,mp2;
		for(int i=0;i<s.length();i++){
			  if(mp1.find(s[i])==mp1.end()) mp1[s[i]]=t[i];
			  if(mp2.find(t[i])==mp2.end()) mp2[t[i]]=s[i];
			  if(mp1[s[i]]!=t[i] || mp2[t[i]]!=s[i]) return false;
		}
		return true;
	}
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
        vector<string>res;
		for(int i=0;i<words.size();i++)
			if(match(words[i],pattern))res.push_back(words[i]);
		return res;
        
//        vector<string> ans;
// unordered_map<char, char> mp1, mp2;
// for (int i = 0; i < words.size(); i++)
// {
//     bool flag = true;
//     int k = 0;
//     for (int j = 0; j < words[i].length(); j++, k++)
//     {
        

//         char str = words[i][j];
//         if (mp1.find(str) == mp1.end())
//         {

//             mp1[str] = pattern[k];
//         }
//         if (mp2.find(pattern[k]) == mp2.end())
//             mp2[pattern[k]] = str;

//         if (mp1[str] != pattern[k] || mp2[pattern[k]] != str)
//         {
//             flag = false;
//             break;
//         }
//     }
//     if (flag == true)
//     {
//         ans.push_back(words[i]);
       
//     }
// }
// return ans;
        
        
        
    }
};