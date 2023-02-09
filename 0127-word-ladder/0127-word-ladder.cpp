class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
//          if(find(wordList.begin(),wordList.end(),endWord)==wordList.end())
//             return 0;
//         queue<pair<string,int>>q;
//        unordered_set<string>st(wordList.begin(),wordList.end());
//         q.push({beginWord,1});
//         st.erase(beginWord);
//         while(!q.empty());
//         {
//             string word=q.front().first;
//             int steps=q.front().second;
//             q.pop();
//             if(word==endWord)
//                 return steps;
            
//             for(int i=0;i<word.size();i++)
//             {
//                 char original=word[i];
//                 for(char ch='a';ch<='z';ch++)
//                 {
//                     word[i]=ch;
//                     if(st.find(word)!=st.end()){
//                         st.erase(word);
                    
//                     q.push({word,steps+1});}
                    
//                 }
                
//                 word[i]=original;
//             }
//         }
//         return 0;
         unordered_set<string>dict(wordList.begin(),wordList.end());
        if(dict.find(endWord)==dict.end())
        {
            return 0;
        }
        queue<string>q;
        q.push(beginWord);
        int steps=1;
        while(!q.empty())
        {
            int n=q.size();
            while(n)
            {
                string node=q.front();
                q.pop();
                if(node==endWord)
                {
                    return steps;
                }
                for(int i=0;i<node.length();i++)
                {
                    for(char c='a';c<='z';c++)
                    {
                        char x=node[i];
                        node[i]=c;
                        if(dict.find(node)!=dict.end())
                        {
                            dict.erase(node);
                            q.push(node);
                        }
                        node[i]=x;
                    }
                }
                n--;
            }
            steps++;
        }
        return 0;
        
        
        
    }
};