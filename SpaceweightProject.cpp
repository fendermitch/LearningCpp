#include <iostream>

int main() {
  double weight;
  int x;
  std::cout << "What is your earth weight?\n";
  std::cin >> weight;
  std::cout << "We have the following Planets\n";
  std::cout << " 1. Mercury 2. Venus 3. Mars 4. Jupiter 5. Saturn 6. Uranus 7. Neptune\n";
  std::cout << "Which planet do you wish to visit (Type the 1 digit number only )";
  std::cin >> x;

   if (x==1){
    weight = weight * 0.38;
   }
   else if (x==2){
    weight = weight * 0.91;
   }
   else if (x==3){
    weight = weight * 0.38;
   }
   else if (x==4){
    weight = weight * 2.34;
   }
   else if (x==5){
    weight = weight * 1.06;
   }
   else if (x==6){
    weight = weight * 0.92;
   }
   else if (x==7) {
    weight = weight * 1.19;
   }
   else {
    std::cout << "Unknown Planet Chosen\n";
   }
std::cout << "Your weight is  " << weight << " on your new planet\n";
return 0;
}
  
  
  
  