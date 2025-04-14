#include <iostream>
#include <limits>

using namespace std;

int main() {
    int t;
    int n, m;

    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n >> m;

            int a[200000];
            for(int j = 0; j < n; j++) {
                cin >> a[j];
            }

            int b[200000];
            for(int j = 0; j < m; j++) {
                cin >> b[j];
            }

            int less;
            int prev;

            for(int j = 0; j < n; j++) {
                int diff;
                if(j == 0) {
                    prev = numeric_limits<int>::min();
                }else prev = a[j - 1];
                for(int k = 0; k < m; k++) {
                    if(k == 0) {
                        less = a[j];
                    }

                    diff = b[k] - a[j];
                    //cout << diff << "\n";
                    if(diff < less && diff >= prev) less = diff;
                }
                a[j] = less;
                less = numeric_limits<int>::max();
            }

            bool toggle;
            toggle = true;
            for(int j = 0; j < n - 1; j++) {
                if(a[j] > a[j + 1]) {
                    toggle = false;
                }
            }

            if(toggle == false) {
                cout << "NO" << '\n';
                toggle = true;
            }else cout << "YES" << '\n';
            
            /*

            for(int j = 0; j < n; j++) {
                cout << a[j];
            }

            */
    } 
    return 0;
}