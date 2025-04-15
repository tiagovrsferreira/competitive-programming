#include <iostream>

using namespace std;

int main() {
    int t;

    cin >> t;
    for(int i = 0; i < t; i++) {
        int n, m, l, r;
        int ans[2];
        cin >> n >> m >> l >> r;
        
        ans[0] = l;
        ans[1] = l + m;
        cout << '\n' << ans[0] << ' ' <<  ans[1];
    }

    return 0;
}