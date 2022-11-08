include <bits/stdc++.h>
using namespace std;
  
  int main()
  {
   int t;cin>>t;
   while(t--){
     int h,m;
     cin>>h>>m;
     h=(h*30)+(m*0.5);
     m=m*6;
   int k=abs(h-m);
     if(k>180){
       k=360-k;
       cout<<k<<"\n";
       
     }
     else{
       cout<<k<<endl;
     }
   }
    
    return 0;
  }