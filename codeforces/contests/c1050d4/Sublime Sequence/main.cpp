#include <iostream>

using namespace std;

int main() {
    int t;
    int x, n;

    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> x >> n;

        if(n%2 == 0) {
            cout << 0 << "\n";
        }else cout << x << "\n";
    }
}


