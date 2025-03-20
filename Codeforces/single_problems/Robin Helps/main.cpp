#include <iostream>

using namespace std;

int main() {
    int t, n, k, ans = 0, gold = 0;

    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n >> k;
        
        int a[100];

        for(int j = 0; j < n; j++) {
            cin >> a[j];
        }

        for(int j = 0; j < n; j++) {
            if(a[j] >= k) {
                gold += a[j];
            }else if(a[j] == 0 && gold > 0) gold--, ans++;
        }
        cout << ans << '\n';
        ans = 0;
        gold = 0;
    }
}