class Solution {
public:
    
    
    
    
    
    const int M = 1e9+7;
    
		vector<int> arr;
    
    
		int solve(int low,int high,int zero,int one,int i) {
            
            
            if(i>high) return 0;
            if(arr[i]!=-1) return arr[i];
            int ans = 0;
            if(i>=low && i<=high) {
                ans +=1 ;
            }
            return arr[i] =  (ans + solve(low,high,zero,one,i+zero)+solve(low,high,zero,one,i+one))%M;
    }
 
    
//     int cnt1=0,cnt2=0,sum=0;
//     int solve(int low,int high,string &temp1,string &temp2,string str)
//     {
//         if(str.length()>=high)
//             return 0;
        
//      //int sum=0;
        
//          if(str.length()>=low && str.length()<=high)
         
//             sum=1;
        
//             sum+=solve(low,high,temp1,temp2,str+temp1);
//              sum+=solve(low,high,temp1,temp2,str+temp2);
 
         
//          if(str.length()<low  || str.empty()){
            
//             solve(low,high,temp1,temp2,str+temp1);
//             solve(low,high,temp1,temp2,str+temp2);
//         }
        
//         return  sum;
//     }
    
    
    
    
    int countGoodStrings(int low, int high, int zero, int one) {
        
        
//         string temp1="",temp2="";
//         string str;
//         while(zero--)
//         {
//             temp1+='0';
//         }
//         while(one--)
//         {
//             temp2+='1';
//         }
        
//        return solve(low,high,temp1,temp2,str);
//         //return sum;
        arr.resize(high+1,-1);
        return solve(low,high,zero,one,0)%M;		
        
    }
};