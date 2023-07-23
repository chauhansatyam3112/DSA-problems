//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    
   void solve(int n,string str,int t)
   {
       if(t==n)
       {
          cout<<str<<" ";
         
           return;
       }
       
       
      solve(n,str+'0',t+1);
       
      if(str.back()!='1')
      {
         
         // str+='1';
           solve(n,str+'1',t+1);
      }
     
      
      
       
       
   }
    void generateBinaryStrings(int &num){
        //Write your code
        
        string str="";
        
          solve(num,"",0);
    }
};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        obj.generateBinaryStrings(n);
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends