#include <iostream>

int main() {
  
double weight;
int number;
  
 std::cout << "What is your Earth weight?\n";
 std::cin >> weight; 
 std::cout << "Enter a number for which planet you want to fight on. 1 is Mercury, 2 is Venus, 3 is Mars, 4 is Jupiter, 5 is Saturn, 6 is Uranus, and 7 is Neptune.\n";
 std::cin >> number; 
  switch(number) {

    case 1 :
    std::cout << "Your weight on Mercury is " << weight * 0.38 << "\n";
    break;
    case 2 :
    std::cout << "Your weight on Venus is " << weight * 0.91 << "\n";
    break;
    case 3 :
    std::cout << "Your weight on Mars is " << weight * 0.38 << "\n";
    break;
    case 4 :
    std::cout << "Your weight on Jupiter is " << weight * 2.34 << "\n";
    break;
    case 5 :
    std::cout << "Your weight on Saturn is " << weight * 1.06 << "\n";
    break;
    case 6 :
    std::cout << "Your weight on Uranus is " << weight * 0.92 << "\n";
    break;
    case 7 :
    std::cout << "Your weight on Neptune is " << weight * 1.19 << "\n";
    break;
  }
  
    
}
