for every element you have to count how many elements are there before it which are smaller than it 
to count we store indices instead of value

   vector <int> calculateSpan(int arr[], int n)
    {
       // Your code here
       vector<int>v;
    stack<int>s;
    s.push(0);
    v.push_back(1);
    for(int i=1;i<n;i++)
    {
      while(s.empty()==false && arr[i]>=arr[s.top()] )
          s.pop();
      int span=(s.empty())?(i+1):(i-s.top());
      v.push_back(span);
      s.push(i);
    }
    return v;
    }
