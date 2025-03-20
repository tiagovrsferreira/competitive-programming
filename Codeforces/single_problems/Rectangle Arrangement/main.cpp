#include <iostream>

using namespace std;

int main() {
    int t, n, wmax, hmax;

    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;

        int w[n], h[n];
        wmax = 0, hmax = 0;

        for(int j = 0; j < n; j++) {
            cin >> w[j] >> h[j];

            if(w[j] > wmax) {
                wmax = w[j];
            }

            if(h[j] > hmax) {
                hmax = h[j];
            }
        }

        cout << wmax * 2 + hmax * 2 << '\n'; 
    }
}