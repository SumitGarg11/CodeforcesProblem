// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
   
    int n;
    cin>>n;
    int count = 0;
    while(n--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if((a<b) ){
            count++;
            
        }
        if((a<c)){
            count++;
        }
        if(a<d){
            count++;
        }
        if((a>b) && (a>c) && (a>d)){
            count  = 0;
        }
        
        cout<<count<<endl;
        count = 0;
        
    }
    

    return 0;
}