#include <iostream>
#include <string>
#include <cmath>

int main() {

  int t, l, r, var = 1, qtd_array = 1;

  std::cin >> t;
  for(int i = 0; i < t; i++) {
    std:: cin >> l >> r;
    if(l == r) {
      std::cout << 1 << "\n";
    }else{
      while(true) {
          l += var;
          if(l > r) break;
          qtd_array++;
          var++;
        }
      std::cout << qtd_array << "\n";
    }
    var = 1;
    qtd_array = 1;
  }
    
    
  return 0;
}