#include <iostream>

int main(){
 // interger (whole number)
    int x; //declaration
    x = 5; //assign

    int y = 6;
    int sum = x + y ;
    
    int age = 21;
    int year = 2026;
    int days = 15;
     std::cout << x << '\n' ;
  std::cout << y << '\n' ; 
  std::cout << sum << '\n' ;    //'n' represents seperate lines
    std::cout << x + y << '\n' ; 
    std::cout << age << '\n';
    std::cout << year << '\n';
    std::cout << days << '\n';

    //double (number including decimal)
    double price = 10.99; 
    std::cout << price << '\n';
    double gpa = 2.5;
    double temperature = 25.1;
    
    std::cout << price << '\n';
                                    std::cout << gpa << '\n';
                                    std::cout << temperature << '\n';
// char datatype (single character)

char grade = 'A';
char initial = 'B';

std::cout << grade << '\n';
      std::cout << initial << '\n';


      // boolean (true or false)
  
     bool student = true;
     bool lightswitch = false;
     
     std::cout << student << '\n';
        std::cout << lightswitch << '\n';
    
        // string datatype (objects that represents a series of text or sentences.)
        std::string firstname = "Aarush ";
                std::cout << firstname << '\n';
        std::string lastname = "Muthuprakash";
std::string name = firstname + lastname ;    //adding 2 variables together. like x + y
            std::cout << "Hello " << name << '\n'; //adding a string datatype and variable together can form sentences based on user.

        std::cout << "You are " << age << " years old";
    return 0;
} 