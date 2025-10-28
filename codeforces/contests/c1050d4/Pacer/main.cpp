#include <iostream>

using namespace std;

int main() {
    int t;

    cin >> t;
    for(int i = 0; i < t; i++) {
        int n, m;

        cin >> n >> m;
        
        int sum;
        sum = 0;

        //if any m is odd -> fj in 1-side
        //if any m is even -> fj in 0-side
        //when inverse = 1, fj waited in any side and got delay, then this logic inverse
        bool inverse;
        inverse = false;

        int a[n], b[n];
        for(int j = 0; j < n; j++) {
            cin >> a[n] >> b[n];

            if(a[n]%2 == 0) {
                if(b[n] == 1 && !inverse) {
                    sum++;
                    inverse = true;
                }

                if(b[n] == 0 && inverse) {
                    sum++;
                    inverse = false;
                }
            }else{
                if(b[n] == 0 && !inverse) {
                    sum++;
                    inverse = true;
                }

                if(b[n] == 1 && inverse) {
                    sum++;
                    inverse = false;
                }
            }
        }
        cout << m - sum << "\n";
    }
}