// We all know computer understands only 
// 0
//  and 
// 1
// . Let's say you are given one such array 
// A
//  consisting only 
// 0
// 's and 
// 1
// 's. Your task is to print the last index of the 
// 1
//  present in the array.


#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t,n;
    cin>>t;
    while(t--){
      int a[n],index=0,sum=0;
      cin>>n;
      for(int i=0;i<n;i++)
      cin>>a[i];
      for(int i=0;i<n;i++){
      if(a[i]==1){
      index=i;
      sum=1;
      }
      }
      if(sum==0){
        cout<<-1<<endl;
      }
      else
      cout<<index<<endl;
    }
    
    return 0;
  }