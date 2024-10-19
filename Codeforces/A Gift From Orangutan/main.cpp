#include <iostream>

using namespace std;

int main() {
    int t, n, less, more, ans;

    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;

        int a[1002];

        less = 1001;
        more = 0;

        for(int j = 0; j < n; j++) {
            cin >> a[j];

            if(a[j] > more) {
                more = a[j];
            }

            if(a[j] < less) {
                less = a[j];
            }
        }

        ans = (more - less) * (n - 1);

        cout << ans << '\n';
    } 
}