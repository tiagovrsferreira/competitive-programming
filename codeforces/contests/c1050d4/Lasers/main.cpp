#include <iostream>

using namespace std;

int main() {
    int t;
    
    cin >> t;
    for(int i = 0; i < t; i++) { 
        int n, m, x, y;

        cin >> n >> m >> x >> y;

        int sum;
        sum = 0;

        int a[n];

        for(int j = 0; j < n; j++) {
            cin >> a[j];

            if(a[j] <= y) sum++;
        }

        int b[m];

        for(int j = 0; j < m; j++) {
            cin >> b[j];

            if(b[j] <= x) sum ++;
        }

        cout << sum << "\n";
        sum = 0;
    }

}