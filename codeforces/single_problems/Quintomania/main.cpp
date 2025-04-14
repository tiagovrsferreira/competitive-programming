#include <iostream>

using namespace std;

int main() {
    int t, n, op;

    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;

        int a[n];
        op = 0;

        for(int j = 0; j < n; j++) {
            cin >> a[j];
            if(j != 0) {
                int aux;

                aux = a[j] - a[j - 1];
                if(aux < 0) aux *= -1;

                if(aux != 5 && aux != 7) op = 1;
            }
        }
        if(op == 1) {
            cout << "NO" << '\n';
        }else cout << "YES" << '\n';
    }
}