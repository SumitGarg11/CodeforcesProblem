    #include <iostream>
    #include <cmath>
    using namespace std;
     
    void fun() {
        int a, b;
        cin >> a >> b;
        
       
        int bigi = ceil(b / 2.0);
        
      
        int cnt = bigi;
     
        int space = bigi * 7;
     
        if (b % 2 != 0) {
            space += 4;
        }
        
      
        if (a <= space) {
            cout << cnt << "\n";
            return;
        }
        
        
        if (a > space) {
            int left = a - space;
            
            
            int res = ceil(left / 15.0);
            
         
            cout << res + cnt << "\n";
        }
    }
     
    int main() {
     
        int t;
        cin >> t;
        while (t--) {
           fun();
        }
        return 0;
    }
