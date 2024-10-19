#include <iostream>

using namespace std;

string separarString(string x, int y, char op) { //se op = e, retornar a str esquerda, op = d str direita
    string z = "";

    if(op == 'e') {
        for(int i = 0; i < y; i++) {
            z += x[i];
        }
    }else if(op == 'd') {
        for(unsigned int i = y; i < x.length(); i++) {
            z += x[i];
        }
    }else z = "-1";

    return z;
}


int main() {
    string t, t1;
    int op1 = 0;

    cin >> t;
    for(unsigned int i = 0; i < t.length(); i++) {
        string temp1, temp2, temp;

        temp1 = separarString(t, i, 'e');
        temp2 = separarString(t, i, 'd');
        
        for(unsigned int j = 0; j < temp2.length() - 1; j++) {
            temp1 = temp1 + temp2[j];
            if(temp1 == temp2) {
                op1++;
                t1 = temp1;
            }
        }
    }

    if(op1 > 0) {
        cout << "YES" << "\n" << t1;
    }else cout << "NO" ;
}
