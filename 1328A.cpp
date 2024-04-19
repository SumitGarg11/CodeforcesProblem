
#include <bits/stdc++.h>
using namespace std;


// 10 4
// 13 9
// 100 13
// 123 456
// 92 46


int main() {
   
    long long n;
    
    cin>>n;
    int moves = 0;
    while(n--){
        long long int a,b;
        cin>>a>>b;
        if(a%b == 0){
            moves = 0;
            cout<<moves<<endl;
        }
        
        if(a%b != 0){
           while(a%b !=0 ){
               a = a+1;
               moves++;
           }
            cout<<moves<<endl;
        }
        moves = 0;
        
        
    }
   
  

    return 0;
}

// inputCopy
// 5
// 10 4
// 13 9
// 100 13
// 123 456
// 92 46
// outputCopy
// 2
// 5
// 4
// 333
// 0