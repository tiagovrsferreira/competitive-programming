#include <iostream>

using namespace std;

int main() {
    int q, ans = 0, op = 1;
    string s, t;

    cin >> q;
    for(int i = 0; i < q; i++) {
        cin >> s;
        cin >> t;

        if(s[0] == t[0]) {
            for(int j = 0; j < s.length(); j++) {
                if(s[j] != t[j]) break;
                op++;
            }

            ans += op + 2;
            ans += (s.length() - op) + (t.length() - op);
        }else {
            ans += s.length();
            ans += t.length();
        }

        cout << ans << '\n';
        ans = 0;
        op = 1;
    }
}