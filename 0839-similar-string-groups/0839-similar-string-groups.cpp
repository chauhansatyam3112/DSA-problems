class Solution {
public:
     bool issimilar(string a, string b){
        if(a==b) return true;
        int end=b.size()-1,count=0;
         
        for(int start=0;start<=end;start++){
            
            if(b[start]!=a[start]) count++;
            
            
            if(b[end]!=a[end]&&start!=end) count++;
            
            if(count>2)return false;
            end--;
        }
        return true;
    }
public:
    int numSimilarGroups(vector<string>& strs) {
        int size=strs.size(),count=0;
        
        
        vector<int> store (size,0);
        
        queue<string> q;
        
        for(int i=0;i<size;i++){
            
            if(store[i]==0)count++;
            else 
                continue;
            store[i]=1;
            
            q.push(strs[i]);
            
            while(!q.empty()){
                
            for(int j=i+1;j<size;j++){
                if(store[j]==1)
                    continue;
                
                if(issimilar(q.front(),strs[j])){
                    
                    q.push(strs[j]);
                    
                    store[j]=1;
                    }
                }
                q.pop();
            }
        }
        return count;
    }
};