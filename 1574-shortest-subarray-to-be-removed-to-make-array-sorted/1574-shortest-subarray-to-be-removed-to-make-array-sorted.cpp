class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
         int len=arr.size();
    int start=0,end=len-1; 
   while(start<len-1 && arr[start]<=arr[start+1])start++;
    if(start==arr.size()-1) return 0;
    while(end>=0 && arr[end]>=arr[end-1])end--;
    if(end==0) return len-1;
    int result=min(len-1-start,end);
     int i=0;int j=end;
    while(i<=start && j<arr.size())
    {
        if(arr[j]>=arr[i]){
            result=min(result,j-i-1);
            i++;
        }
        else j++;
    }
    return result;
    }
};