#include <iostream>
#include <cmath>

int main() {
  
  double a, b, c;
  double root1, root2;
  
  std::cout << "Enter a: \n";
  std::cin >> a;
  std::cout << "Enter b: \n";
  std::cin >> b;
  std::cout << "Enter c: \n";
  std::cin >> c;

  root1 = (-b + std::sqrt(b*b - 4*a*c)) / (2*a);
  root2 = (-b - std::sqrt(b*b - 4*a*c)) / (2*a);

  std::cout << "Root 1 is: " << root1 << std::endl;
  std::cout << "Root 2 is: " << root2 << std::endl;
}
