    #include <iostream>
    #include <vector>
    #include <unordered_map>
    #include <set>
    using namespace std;
     
    int main() {
        int t;
        cin >> t;
        while (t--) {
            int n;
            string b;
            cin >> n >> b;
     
            // Step 1: Construct the string r
            set<char> unique_chars(b.begin(), b.end());
            string r(unique_chars.begin(), unique_chars.end());
     
            // Step 2: Create the mapping from r to its symmetric counterpart
            unordered_map<char, char> decode_map;
            int len = r.length();
            for (int i = 0; i < len; ++i) {
                decode_map[r[i]] = r[len - i - 1];
            }
     
            // Step 3: Decode the string b using the mapping
            string s = b;
            for (int i = 0; i < n; ++i) {
                s[i] = decode_map[b[i]];
            }
     
            // Output the decoded string
            cout << s << endl;
        }
        return 0;
    }
