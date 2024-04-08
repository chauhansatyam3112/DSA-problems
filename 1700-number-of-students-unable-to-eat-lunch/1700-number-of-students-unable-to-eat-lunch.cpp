class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandy) {
        
        
       deque<int>dq(students.begin(),students.end());
        
        
        
        queue<int> pq;
        
    for (int it: sandy) {
        
        pq.push(it);
    }
      
        int cnt=0;
        
        int p=0;
      
       while(!pq.empty())
       {
           if(!dq.empty() && dq.front()==pq.front())
           {
               dq.pop_front();pq.pop();
              cnt=0;
               p++;
           }
           
           else{
               
               dq.push_back(dq.front());
               
               dq.pop_front();
               cnt++;
               
               if(cnt==dq.size())break;
           }
           
       }
        
        return sandy.size()-p;
        
       
    }
};