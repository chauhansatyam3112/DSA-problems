class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        
        vector<int>v;
        
//        int num=low; 
        
//         string str=to_string(low);
        
        
//         for(int i=1;i<str.length();i++)
//         {
//             int prev = stoi(str.substr(i - 1, 1));
                
              
//               str[i] = static_cast<char>(prev + 1 + '0');
                
                
//         }
//         v.push_back(stoi(str));
//         // cout<<str<<endl;
        
         
        
        
//         while(num<=high)
//         {
            
//            int n=str.length();
            
           
            
//            if (n +stoi(str.substr(0, 1)) == 10)
//            {
//                str.clear();
               
//                str=to_string(1);
               
//                while(n--)
//                {
//                    str+=(to_string(0));
                   
//                }
               
//                cout<<str<<endl;
               
//                 for(int i=1;i<str.length();i++)
//         {
//             int prev = stoi(str.substr(i - 1, 1));
                
              
//               str[i] = static_cast<char>(prev + 1 + '0');
                
                
//         }
               
//                v.push_back(stoi(str));
               
               
//            }
            
            
//             int sz=str.length();
            
//             for(int i=0;i<sz;i++)
//             {
//                int prev = stoi(str.substr(i, 1));
                
              
//               str[i] = static_cast<char>(prev + 1 + '0');
                
                
//             }
            
          
            
//              num=stoi(str);
            
//             if(num>=low && num<=high)
            
//              v.push_back(num);
            
            
            
            
            
            
//         }
        
        
        
        
        string str="123456789";
        
        int len=2;
        
        int  n=str.length();
        
        for(int i=len;i<=n;i++)
        {
            for(int j=0;j<=n-i;j++)
            {
                string s=str.substr(j,i);
                
                int num=stoi(s);
                
                 if(num>=low && num<=high)
                {
                    v.push_back(num);
                }
                
               
            }
            
            
        }
        return v;
        
        
    }
};