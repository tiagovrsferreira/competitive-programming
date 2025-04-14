#include <iostream>
#include <string>
#include <cmath>

int main() {

  int t, n, qtd_zero = 0;
  float raiz;
  int temp;
  std::string x;

  std::cin >> t;
  for(int i = 0; i < t; i++) {
    std::cin >> n;
    std::cin >> x;
    raiz = sqrt(n);
    temp = raiz;

    if(temp == raiz) {
      for(int j = 0; j < n; j++) {
        if(x[j] == '0') {
          qtd_zero++;
        }
      }
      if(qtd_zero == (raiz - 2) * (raiz - 2)) {
        std::cout << "Yes";
      }else std::cout << "No";
    }else std::cout << "No";
    std::cout << "\n";
    qtd_zero = 0;
  }
  return 0;
}