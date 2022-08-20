N = 3
v1 -> 2 3 5
v2 -> 1 2
v3 -> 1 4 5 1
Output: 
1
  
  
int minimum_vertical_sum(vector<vector<int>>v)
{
    //Your code here
    unordered_map<int,int>mp;
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            mp[j]+=v[i][j];
        }
    }
    int ans=INT_MAX;
    for(auto it:mp)
       ans=min(ans,it.second);
       
       
     return ans;  
    
    
}
