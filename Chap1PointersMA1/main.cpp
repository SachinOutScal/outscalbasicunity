#include <iostream>


int main() {
   int *p;
  
   int x = 10;

   p = &x;
  
   
   std::cout << "value of p is: " << p << "\n";
   std::cout << "value at address p is *p i..e: " << *p << "\n";
}