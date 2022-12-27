class Solution {
public:
    bool wordPattern(string pattern, string s) {
//        unordered_map<char,set<string>>mp;
//         int i=0,j=0,k=0;
//         while(i<s.length() && j<s.length())
//         {
//           if(s[j]!=' '){
//                 j++;}
//             string str=s.substr(i,j);
//             while(k<pattern.length()){
//              mp[pattern[k]].insert(str);k++;}
//               i=j;
//             if(s[i]==' '){
//                 i++;
//             }
//             j=i;
//           }
//     for (auto it = mp.begin();it != mp.end();it++) {
        
//         set<string> st = it->second;
//         for(auto it:st)
//         {
//             if()
//         }
//     }
//         return true;
//         unordered_map<char,string>charmap;
//         unordered_map<string,char>stringmap;
//         stringstream s(str);
//         string word;
//         int n=pattern.size(),i=0;
//         while(s>>word)
//         {
//             if(i==n)return false;
//             char c=pattern[i];
//             if(charmap.count(c)!=stringmap.count(word)) return false;
//             if(charmap.count(c))
//             {
//                 if(charmap[c]!=word || stringmap[word]!=c) return false;
//             }else{
//                 charmap.insert({c,word});
//             stringmap.insert({word,c});}
            
//             i++;
                
//         }
//         return i==n;
        vector<string> v;
		int i = 0;
		string temp = "";
		while(i < s.size()){
			if(s[i] == ' '){
				v.push_back(temp);
				temp = "";
			}
			else{
				temp += s[i];
			}
			i++;
		}
		v.push_back(temp);

		if(v.size() != pattern.size()){
			return false;
		}
		unordered_map<char, string> m;
		set<string> st;
		for(int i = 0; i < pattern.size(); i++){
			if(m.find(pattern[i]) != m.end()){ //pattern in  hashmap
                if(m[pattern[i]] != v[i]){
					return false;
				}
			}
			else{
				if(st.count(v[i]) > 0){
					return false;
				}
				m[pattern[i]] = v[i];
				st.insert(v[i]);
			}
		}
		return true;
        
        
    }
};