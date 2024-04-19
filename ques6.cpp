#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int uper =0;
    int lower= 0;
    for(char ch : s){
        if(isupper(ch)){
            uper++;
        }
        else lower++;
    }
    if(uper > lower){
        for(char&ch:s){
            ch = toupper(ch);
        }
    }
    else{
        for(char&ch:s){
            ch = tolower(ch);
        }
    }
    
    cout<<s<<endl;
    
    

}





