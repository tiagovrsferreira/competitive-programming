#include <iostream>

using namespace std;

int main() {
    int t, n, k, ans;

    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n >> k;

        int b[k], c[k], size;
        int brands[k] = {0};
        ans = 0, size = 0;
        

        for(int j = 0; j < k; j++) {
            cin >> b[j] >> c[j];

            int aux;
            aux = 0;

            if(j != 0) {
                for(int m = 0; m < size; m++) {
                    if(b[j] == brands[m]) aux = 1;
                }

                if(aux == 0) {
                    brands[size] = b[j];
                    size++;
                }

            }else{
                brands[0] = b[j];
                size++;
            } 
            
        }

        if(k > n) {
            int max, pos;
            max = 0;

            int total[size] = {0};

            for(int l = 0; l < size; l++) {
                for(int m = 0; m < k; m++) {
                    if(b[m] == brands[l]) total[l] += c[m];
                }
            }

            for(int l = 0; l < n; l++) {
                for(int m = 0; m < size; m++) {
                    if(total[m] > max) {
                        max = total[m];
                        pos = m;
                    }
                }

                ans += max;
                total[pos] = 0;
                max = 0;
            }
        }else{
            for(int j = 0; j < k; j++) {
                ans += c[j];
            }
        }
        cout << ans << '\n';
    }
}