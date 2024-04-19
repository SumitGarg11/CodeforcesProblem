#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  int num = 0;
  for(char ch:s){
      if(ch == '4' || ch == '7') num++;
  }
  if(num == 4 || num == 7){
      cout<<"Yes";
  }
  else cout<<"No";
  
    
    
    

}





