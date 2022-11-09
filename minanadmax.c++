// Congratulations on making up to this question. Let us give you a fairly simple array problem to solve. If you know how to iterate through the array, you will easily be able to solve this.
// The problem statement is simple- given 
// N
//  elements, find the minimum and maximum numbers among those elements.



#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t,n;
    cin>>t;
    while(t--){
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++){
        cin>>a[i];
        
      }
      int min=a[0];
      for(int i=0;i<n;i++){
      
      if (a[i]<min)
      min=a[i];
      }
      cout<<min<<" ";
      int max=a[0];
      for(int i=0;i<n;i++){
      
      if (a[i]>max)
      max=a[i];
      }
      cout<<max<<endl;
      
    }
    
    
    return 0;
  }