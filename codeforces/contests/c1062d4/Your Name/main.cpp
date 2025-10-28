#include <iostream>

using namespace std;

int main() {
    int q;

    cin >> q;
    for(int i = 0; i < q; i++) {
        int n, j;

        cin >> n;

        bool onString = false;
        string s, t;
        cin >> s >> t;

        for(j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                if(s[j] == t[k]) {
                    onString = true;
                    s[j] = ' ';
                    t[k] = ' ';
                }
            }
            if(!onString) {
                break;
            }else onString = false;
        } 
        if(j == n) {
            cout << "YES" << "\n";
        }else cout << "NO" << "\n"; 
    }
}