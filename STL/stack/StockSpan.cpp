for every element you have to count how many elements are there before it which are smaller than it 
to count we store indices instead of value

    stack<int>s;
    s.push(0);
    for(int i=1;i<n;i++)
    {
      while(s.empty()==false && arr[i]>=arr[s.top()] )
          s.pop();
      int span=(s.empty())?(i+1):(i-s.top());
      cout << span << " ";
      s.push(i);
        
    }
