// Let's add more mathematics with arrays.
// You are given an array of size 
// N
// , containing 
// N
//  integers. PrepBuddy is asking you to print all the even elements in the first line and all odd elements in the second line.
// The array will contain at least one even and one odd element.



#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int n,a[n],b[n],c[n],j=0;
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    for(int i=0;i<n;i++){
    if(a[i]%2==0)
    cout<<a[i]<<" ";
    }
    cout<<"\n";
    for(int i=0;i<n;i++){
   if(a[i]%2!=0)
    cout<<a[i]<<" ";
    }
    cout<<"\n";
     
    
    
    return 0;
  }