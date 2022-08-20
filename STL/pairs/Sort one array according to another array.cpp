Input:
a[] = {3, 1, 2}
b[] = {'G', 'E', 'K'}
Output:
E K G


Input:
a[] = {4, 1, 3, 2}
b[] = {'A', 'X', 'B', 'Y'}
Output:
X Y B A


void sortArray(int a[], char b[], int n){
    
    // code here
    //pair kro fr sort
    vector<pair<int,char>>v;
    for(int i=0;i<n;i++)
    {
        v.push_back(make_pair(a[i],b[i]));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
       cout << v[i].second << " ";
    
    
}

