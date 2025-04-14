#include <iostream>
#include <string>

using namespace std;

int main() {

  string x;
  int n;

  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> x;
    if(x.length() > 10) {
      cout << x[0] << x.length() - 2 << x[x.length() - 1] << "\n";
    }else cout << x << "\n";
          
  }
  
  return 0;
}