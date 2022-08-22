  vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        vector<long long>v;
        stack<long long>s;
        v.push_back(-1);
        s.push(arr[n-1]);
        for(long long i=n-2;i>=0;i--)
        {
            while(s.empty()==false && s.top()<=arr[i])
               s.pop();
            long long next=(s.empty())?(-1):(s.top());
            v.push_back(next);
            s.push(arr[i]);
        }
        reverse(v.begin(), v.end());
        return v;
    }
