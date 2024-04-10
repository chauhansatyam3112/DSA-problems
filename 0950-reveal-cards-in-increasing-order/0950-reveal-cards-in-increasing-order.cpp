class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        
        bool flag=false;
        
        int i=0,j=0;
        
        int n=deck.size();
        
        vector<int>ans(deck.size(),0);
        
        sort(deck.begin(),deck.end());
        
        while(i<deck.size())
        {
            
            if(ans[j]==0)
            {
                
                if(flag==false)
                {
                    ans[j]=deck[i];
                    i++;
                }
              
                flag=!flag;
            }
            
            j=(j+1)%n;
            
        }
        
        return ans;
    }
};