// for example: 20 30 10 5 15
// jo element aayega vo apne se chote wale sbko hatadega kyuki ab vo maximum hai aage walo ke liye
// aur tab tak hatayega jb tak usko apne se bada ya brabar nhi milta

// agar stack pr phle se bda element present hai toh vo simple push hojayega kyuki vo agle waalo ke liye max ho skta hai jasie ki 10
void printPrevGreater(int arr[], int n)
{
  stack<int>s;
  s.push(arr[0]);
  cout << -1 << " ";
  for(int i=1;i<n;i++)
  {
    while(s.top()<=arr[i] && s.empty()==false )
    {
      s.pop();
    }
    if(s.empty())   cout << -1 << " ";
    else  cout << s.top() << " ";
    
      s.push(arr[i]);
  }
  
}
