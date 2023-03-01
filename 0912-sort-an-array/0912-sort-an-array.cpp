class Solution {
public:
    vector<int> sortArray(vector<int>& arr) {
        //Bubble Sort
        int n=arr.size();
        
//         for(int i=0;i<n-1;i++)
//         {
            
//             bool swapped=true;
//             for(int j=0;j<n-i-1;j++)
//             {
//                 if(arr[j]>arr[j+1]){
//                     swap(arr[j],arr[j+1]);
//                 swapped=false;}
                
//             }
//             if(swapped==true)
//                     break;
            
//          }
//         return arr;
        
        
        //selection sort
        
//         for(int i=0;i<n-1;i++)
//         {
//             int minIdx=i;
//             for(int j=i+1;j<n;j++)
//             {
//                 if(arr[j]<arr[minIdx])
//                     minIdx=j;
               
                
//             }
//              swap(arr[minIdx],arr[i]);
//         }
//         return arr;
        //Insertion sort
        
//         for(int i=1;i<n;i++)
//         {
//             int temp=arr[i];
//             int j=i-1;
//             for(;j>=0;j--)
//             {
//                 if(arr[j]>temp)
//                     arr[j+1]=arr[j];
                
//                 else
//                     break;
//             }
//             arr[j+1]=temp;
//         }
//         return arr;
        sort(arr.begin(),arr.end());
        return arr;
        
    }
};