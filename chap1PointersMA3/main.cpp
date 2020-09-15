#include <iostream>
int main() {
  
   int *m;
   int x = 10;

   m = &x;

    std::cout << "address of pointer m is &m" <<&m <<"\n";
    std::cout << "address stored in pointer m is &x or m" <<m <<"\n";
   

}