#include <iostream>

using namespace std;

int main() {

    int t, x, y, z, z1, s = 0;
    
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> x >> y;
        s = (x * 1) + (y * 4);
        
        if(y%2 == 0) {
            z = y / 2;
        }else z = (y / 2) + 1;
        
        if(s%15 == 0) {
            z1 = s / 15;
        }else z1 = (s / 15) + 1;
        
        if(z > z1) {
            cout << z << '\n';
        }else cout << z << '\n';
    }

    return 0;
}