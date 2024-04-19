
#include <bits/stdc++.h>
using namespace std;





int main() {
   
   int  n;

    cin>>n;
   int count = 0;
    while(n--){
       string a;
        cin>>a;
        if(a == "Tetrahedron"){
            count = count + 4;
        }
        else if( a == "Cube"){
            count += 6;
        }
        else if(a == "Octahedron"){
            count +=8;
        }
        else if(a =="Dodecahedron") count += 12;
        else if (a == "Icosahedron") count += 20;
        
       
        
        
        
    }
    cout<<count<<endl;
   
  

    return 0;
}