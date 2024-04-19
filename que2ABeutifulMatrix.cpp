#include <bits/stdc++.h>
using namespace std;
int main(){
    int r = -1;
    int col = -1;
    for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            int num;
            cin>>num;
            if(num == 1){
                r=  i;
                col = j;
            }
        }
    }
    int moves  = abs(r - 2) + abs(col - 2);
    cout<<moves<<endl;
}