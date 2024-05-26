#include <iostream>

namespace foo{
   int sub(int x, int y) {
      return x - y;
   }

   namespace goo{
      int sum(int x, int y) {
         return x + y;
      }
   }
}

int main() {
   namespace first = foo;
   namespace second = foo::goo;

   std::cout << second::sum(5,6);
   std::cout << first::sub(5,6);
}