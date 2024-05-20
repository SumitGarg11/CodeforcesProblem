    #include <iostream>
    #include <vector>
    #include <cmath>
    using namespace std;
     
    int countPairs(const vector<int>& a) {
        int n = a.size();
        if (n < 3) return 0;
     
        vector<vector<int>> t;
        for (int j = 0; j <= n - 3; ++j) {
            t.push_back({a[j], a[j+1], a[j+2]});
        }
     
        int cnt = 0;
        int m = t.size();
        
        for (int i = 0; i < m; ++i) {
            for (int j = i + 1; j < m; ++j) {
                int d = 0;
                if (t[i][0] != t[j][0]) ++d;
                if (t[i][1] != t[j][1]) ++d;
                if (t[i][2] != t[j][2]) ++d;
                if (d == 1) ++cnt;
            }
        }
     
        return cnt;
    }
     
    int main() {
        int ww;
        cin >> ww;
     
        while (ww--) {
            int n;
            cin >> n;
            vector<int> a(n);
            for (int i = 0; i < n; ++i) {
                cin >> a[i];
            }
            cout << countPairs(a) << endl;
        }
     
        return 0;
    }
