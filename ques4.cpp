// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
     int main() {
    // Write C++ code here
    string s;
    cin>>s;
    int one = 0;
    int two = 0;
    int three = 0;
    for(char ch : s){
        
        if(ch == '1') one++;
        else if(ch == '2') two++;
        else if(ch == '3')three++;
    }
    string res = "";
    for(int i = 0; i<one; i++){
        res += "1+";
    }
    for(int i = 0; i<two; i++){
        res += "2+";
    }
    for(int i = 0; i<three; i++){
        res += "3+";
    }
    for(int i = 0; i<res.size()-1;i++ ){
        cout<<res[i];
        
    }
    cout<<endl;
    
    

    return 0;
}


// Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;
//      int main() {
//     // Write C++ code here
//     string s,s1;
//     cin>>s;
//     for(int i = 0; i<s.size(); i++){
//         if(s[i] != '+') s1.push_back(s[i]);
        
//     }
//     sort(s1.begin(), s1.end());
//     cout<<s1[0];
//     for(int i = 1; i<s1.size(); i++){
//         cout<<"+"<<s1[i];
//     }
    
    
//     cout<<endl;
    
    

//     return 0;
// }