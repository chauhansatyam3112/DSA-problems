class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        // int sum=0;
        // int n=c.size();
        // int i=0;
        // int j=n-1;
//         if(n==k)
//         {
//             for(int i=0;i<n;i++)
//             sum+=c[i];
//             return sum;
            
//         }
        
//         while(i<n && i<=j && k!=0)
//         {
//             if(c[i]==c[j] && k--)
//             {
                
//                 if(c[i+1]>c[j-1]){
//                     sum+=c[i];
//                 i++;}
//                 else{
//                     sum+=c[j];
//                 j--;}
                
               
                
//             }
//           if(c[i]>c[j] && k!=0)
//             {
//                 sum+=c[i];
//                 i++;
//               k--;
//               if(c[j-1]>c[i] && k!=0){
//                  sum+=c[j--];k--;}
//             }
//            if(c[i]<c[j] && k!=0){
//                 sum+=c[j--];
//                 k--;
              
//                 if(c[i+1]>c[j] && k!=0){
//                sum+=c[i++];
//                 k--;
//                 }
                
//                }
            
//         }
//       return sum;
        int sum = 0;
        int n = cardPoints.size();
        
        vector<int> cummulativeSumFromFront(n+1, 0);
        vector<int> cummulativeSumFromBehind(n+1, 0);
        
        sum = 0;
        for (int i=0; i<n; i++) {
            sum += cardPoints[i];
            cummulativeSumFromFront[i+1] = sum;
        }
        sum = 0;
        for (int i=n-1; i>=0; i--) {
            sum += cardPoints[i];
            cummulativeSumFromBehind[i] = sum;
        }
        
       
        reverse(cummulativeSumFromBehind.begin(), cummulativeSumFromBehind.end());
        
        int answer = 0;
        for(int i=0; i<=k; i++) {      
            answer = max(answer, 
                           cummulativeSumFromFront[i] 
                         + cummulativeSumFromBehind[k-i]); 
        }
        return answer;
   
   
    }
};