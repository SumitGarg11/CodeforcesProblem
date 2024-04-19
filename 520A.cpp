
#include <bits/stdc++.h>
using namespace std;

bool fun(string s){
    
    
    int hash[26] = {0};
    for(char ch : s){
        if(isalpha(ch)){
        hash[tolower(ch) -'a']++;
        }    
    }
    for(int i = 0; i<26; i++){
        if(hash[i] == 0){
            return false;
        }
        
    }

    return true;
    
}

int main() {
   
    int n;
    
    cin>>n;
    string s;
    cin>>s;
    bool ans  = fun( s);
    if(ans){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
   
  

    return 0;
}