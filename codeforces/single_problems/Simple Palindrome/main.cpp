#include <iostream>

using namespace std;

//logica vei podi
void zerarString(string *x, int qtd) {
    for(int i = 0; i < qtd; i++) {
        x[i] = "";
    }
}

int main() {
    int t, n;
    string vogais[5], res = "";
    
    cin >> t;
    for(int i = 0; i < t; i++){
        //logica formacao string
        zerarString(vogais, 5);
        
        cin >> n;
        
        for(int j = 0; j < n / 5; j++) {
            vogais[0] += 'a';
            vogais[1] += 'e';
            vogais[2] += 'i';
            vogais[3] += 'o';
            vogais[4] += 'u';
        }
        
        //se n for menor que 5
        if(n < 5) {

            if(n == 1) {
                vogais[0] += 'a';
            }
            if(n == 2) {
                vogais[0] += 'a';
                vogais[1] += 'e';
            }
            if(n == 3) {
                vogais[0] += 'a';
                vogais[1] += 'e';
                vogais[2] += 'i';
            }
            if(n == 4) {
                vogais[0] += 'a';
                vogais[1] += 'e';
                vogais[2] += 'i';
                vogais[3] += 'o';
            }
        }

        //caso nao for multiplo de 5
        if(n%5 != 0 && n > 5) {
            for(int j = 0; j < n%5; j++) {
                vogais[j] += vogais[j][0];
            }
        }

        //print resultado
        for(int k = 0; k < 5; k++) {
            res += vogais[k];
        }

        cout << res << "\n";
        res = "";
    }

    return 0;
}