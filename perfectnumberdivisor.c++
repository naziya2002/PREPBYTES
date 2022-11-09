// Perfect Number and Divisors
// Have you heard of Perfect numbers? If not let me tell you what is it, Perfect Numbers are integers that are equal to the sum of all its divisors except that number itself.
// Now, given an integer 
// N
// ,write a program to print true if it is a perfect number or false if it is not a perfect number.



#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;cin>>t;
    while(t--){
      int sum=0,n;
      int num=n;
      cin>>n;
      for(int i=0;i<=n;i++){
        if(n%i==0){
          sum+=i;
        }
      }
      if(sum==num){
        cout<<"true"<<endl;
        
      }
      else {
        cout<<"false"<<endl;
      }
    }
    
    return 0;
  }