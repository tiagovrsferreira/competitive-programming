#include <iostream>

using namespace std;

int main() {
    int t;

    cin >> t;
    for(int i = 0; i < t; i++) {
        string country, ans = "";
        
        for(int j = 0; j < 3; j++) {
            cin >> country;
            ans += country[0];
        }
        cout << ans << '\n';
        ans = "";
    }
    return 0;
}
