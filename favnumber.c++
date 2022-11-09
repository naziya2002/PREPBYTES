// Among all the digits from 0−9, PrepBuddy likes number 5. He has lots of numbers and wants you to find out the number of times 
// 5
//  occurred in each number.


#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;cin>>t;
    while(t--){
      int n,m,count=0;
      cin>>n;
      for(int i=0;i<n;i++){
        m=n%10;
        if(m==5)
          count=count+1;
        n=n/10;
      }
      cout<<count<<endl;
    }
    
    return 0;
  }


