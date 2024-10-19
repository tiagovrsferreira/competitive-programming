#include <iostream>

using namespace std;

int main() {
    int t, n;
    string s;

    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;

        s = "1";
        for(int j = 1; j < n; j++) {
            s += '0';
        }

        cout << s << '\n';
    }
}   