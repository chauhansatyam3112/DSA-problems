class Solution {
public:
    #define ll long long
    
    int mod=1e9+7;
    
    int countVowelPermutation(int n) {
        
        if(n==1) return 5;
        
        unordered_map<char,ll> m1;
        
        unordered_map<char,ll> m2;
        
       
        m1['a']=1; m1['e']=1; m1['i']=1; m1['o']=1; m1['u']=1;
        
        for(int i=1;i<n;i++){
            
            for(auto c: m1){  
                
                if(c.first=='a'){ 
                    
                    m2['e'] += (c.second%mod);
                    
                }else if(c.first=='e'){
                    m2['a'] += (c.second%mod);
                    
                    m2['i'] += (c.second%mod);
                    
                }else if(c.first=='i'){
                    m2['a'] += (c.second%mod);
                    
                    m2['e'] += (c.second%mod);
                    
                    m2['o'] += (c.second%mod);
                    
                    m2['u'] += (c.second%mod);
                }else if(c.first=='o'){
                    m2['i'] += (c.second%mod);
                    
                    m2['u'] += (c.second%mod);
                    
                }else if(c.first=='u'){
                    
                    m2['a'] += (c.second%mod);
                }  }
          
           
            m1 = m2;
            m2.clear();
        }
        ll ans=0;
	
        for(auto c: m1){
            ans += (c.second%mod);
            ans%=mod;
        }
        
        return ans;
    }
    
};