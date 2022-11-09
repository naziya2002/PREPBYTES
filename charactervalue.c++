
// You are provided with this table containing a character and its value. Given one of this character as input you need to print it's corresponding value.
// | P or p 	- PrepBytes      	|
// | Z or z 	- Zenith         	|
// | E or e 	- Expert Coder   	|
// | D or d 	- Data Structure 	|

#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    char a;
    cin>>a;
    if(a=='p'||a=='P')
    cout<<"PrepBytes";
    else if(a=='Z'||a=='z')
    cout<<"Zenith";
    else if(a=='E'||a=='e')
    cout<<"Expert Coder";
    else if(a=='D'||a=='d')
    cout<<"Data Structure";
    else
    cout<<"please enter character from p,z,e,d";
    
    return 0;
  }
