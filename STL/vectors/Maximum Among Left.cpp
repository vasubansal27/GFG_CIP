Given a vector V of n elements. We need to return the list of indices such that Vi is strictly greater than all
the elements from 0 to i-1. 

Input:
n = 5
V -> 4 3 5 2 6
Output: 
2 4
  

vector<int> maximum_from_left(vector<int>v)
{
    // Your code here
    vector<int> vec;
   int max=v[0];
   for(int i=1;i<v.size();i++){
       if(max<v[i]){
           vec.push_back(i);
           max=v[i];
       }
   }
   return vec;
}
  
  
  
