class Solution {
public:
    int compareVersion(string v1, string v2) {
        
            
             vector<string>vec1,vec2;
            
            int k=0;
            
           for(int i=0;i<v1.length();i++)
           {
                   
                   while( k<v1.length() && v1[k]!='.')
                   {
                           k++;
                   }
                   vec1.push_back(v1.substr(i,k-i));
                   
                   i=k;
                   k++;
           }
            
            int m=0;
            
            for(int i=0;i<v2.length();i++)
            {
                   while(m<v2.length() && v2[m]!='.')
                   {
                           m++;
                   }
                    
                    vec2.push_back(v2.substr(i,m-i));
                    
                    i=m;
                    m++;
            }
            
            for(int i=0;i<vec1.size();i++)cout<<vec1[i]<<" ";
            cout<<endl;
            for(int i=0;i<vec2.size();i++)cout<<vec2[i]<<" ";
            
//            cout<<v1[0]<<" ";
//             cout<<v1[1]<<" ";
            
            if(stoi(vec1[0])>stoi(vec2[0]))return 1;
            
            if(stoi(vec1[0])<stoi(vec2[0]))return -1;
            
            int i=1,j=1;
            
            
            while(i<vec1.size() && j<vec2.size())
            {
                    if(stoi(vec1[i])==stoi(vec2[j]))
                    {
                            i++;j++;
                    }
                    
                    else if(stoi(vec1[i])>stoi(vec2[j]))
                    {
                           return 1;
                    }
                    
                    else if(stoi(vec1[i])< stoi(vec2[j]))
                    {
                            return -1;
                    }
                    
                    
            }
            
           while (i < vec1.size()) {
                   
          if (stoi(vec1[i]) > 0)
                  
            return 1;
                   
         i++;
    }

    while (j < vec2.size()) {
            
        if (stoi(vec2[j]) > 0)
                
            return -1;
            
        j++;
    }
            
            return 0;
          
    }
};