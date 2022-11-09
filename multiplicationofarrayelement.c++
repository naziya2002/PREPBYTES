// PrepBuddy is happy that you solved the previous questions, just to be sure that you are comfortable with operators and arrays, he is giving you this problem.
// You are provided with the size of the array represented by 
// N
//  and 
// N
//  array elements. 
// You need to output the multiplication of all the elements. See sample test cases for better understanding.



#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t,n,i,j=1;
    cin>>t;
    while(t--){
      cin>>n;
      int a[n];
      for(i=0;i<=n;i++){
        cin>>a[i];
      }
      for(i=0;i<=n;i++){
        j=j*a[i];
      }
      cout<<j;
    }
    return 0;
  }