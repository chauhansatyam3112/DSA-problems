class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
//         if(arr.size()==1)
//         {
//             return 1;
//         }
//         if(arr[0]>arr[arr.size()-1])
//         {
//             return 1;
//         }
//         int chunk=0;
//         stack<int>st;
//         st.push(arr[0]);int flag=0;
//         for(int i=1;i<arr.size();i++)
//         {
//             if(!st.empty() && st.top()>arr[i]){
                
//                 chunk++;  flag=1;
//             }               
//             while(!st.empty() && st.top()>arr[i])
//                 st.pop();
                
                
//                 if(!st.empty() && st.top()<arr[i]){
//                     chunk++;
                  
            
//                 }
//                   st.push(arr[i]);
             
//          }
        
//         return chunk;
        int maxValue = 0;
        int count = 0;
        for(int i =0; i<arr.size();i++){
            maxValue = max(maxValue, arr[i]);
            if(maxValue == i){
                count++;
            }
        }
        return count;
    }
};