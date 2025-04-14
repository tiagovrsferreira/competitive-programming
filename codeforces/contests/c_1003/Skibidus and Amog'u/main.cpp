#include <iostream>

using namespace std;

int main() {
    int t;
    string w;

    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> w;
        unsigned int qty = w.length();
        w[qty - 1] = ' ';
        w[qty - 2] = 'i';
        cout << w << "\n";
    }
    return 0;
}