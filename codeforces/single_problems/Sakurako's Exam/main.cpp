#include <iostream>
#include <string>

using namespace std;

int main() {

  int n, a1, b2, sum = 0;

  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> a1 >> b2;
    sum = a1 + b2;

    if(a1 == 0 || b2 == 0) {
      if(sum%2 == 0){
        cout << "yes";
      }else cout << "no";
    }else{
      if(a1 == b2) {
        if(a1%2 == 0) {
          cout << "yes";
        }else cout << "no";
      }else if((a1%2 != 0 && b2%2 == 0) || (a1%2 != 0 && b2%2 != 0)) {
        cout << "no";
      }else if(a1%2 == 0 && b2%2 != 0) {
        cout << "yes";
      }else cout << "yes";
    } 
    cout << "\n";
  }
  return 0;
}