#include <iostream>
#include <cmath>
int main() {
  double colombian;
  double brazilian;
  double peruvian;
  double Converted_C;
  double Converted_B;
  double Converted_P;
  double US_dollars;
std::cout << "Enter Number of Columbian Pesos: \n";
std::cin >> colombian; 
std::cout << "Enter number of Brazilian Reais: \n";
std::cin >>  brazilian; 
std::cout << "Enter number of Peruvian Soles: \n" ;
std::cin >> peruvian;

Converted_C = (colombian/3242);
Converted_B = (brazilian/5);
Converted_P = (peruvian/3.44);
US_dollars = Converted_C + Converted_B + Converted_P;
  std::cout << " US Dollars = $ " << US_dollars;
  
}