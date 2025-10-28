#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        vector<int> a(n);
        vector<string> b(n);

        for (int j = 0; j < n; j++) {
            cin >> a[j];
            b[j] = to_string(a[j]);
        }

        // Exemplo: encontrar o menor lexicográfico
        string sless = b[0];
        int iless = a[0];
        int index = 0;

        for (int j = 1; j < n; j++) {
            if (b[j] < sless) {
                sless = b[j];
                iless = a[j];
                index = j;
            }
        }

        // Exemplo: troca se paridade for diferente
        for (int l = 0; l < n; l++) {
            if ((iless % 2) != (a[l] % 2)) {
                swap(a[l], a[index]);
            }
        }

        // imprime resultado
        for (int j = 0; j < n; j++) {
            cout << a[j] << ' ';
        }
        cout << '\n';
    }
}
