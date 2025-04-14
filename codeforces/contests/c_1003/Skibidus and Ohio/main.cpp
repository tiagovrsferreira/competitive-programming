#include <iostream>

using namespace std;

int main() {
    int t;
    string s;

    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> s;
        int ans;

        if(s.length() == 1) {
            ans = 1;
        }else{
            ans = s.length();
            bool toggle = false;

            for(int j = 0; j < s.length() - 1; j++) {
                if(s[j] == s[j + 1]) {
                    toggle = true;
                    break;
                }
            }

            if(toggle == true) {
                ans = 1;
                toggle = false;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}