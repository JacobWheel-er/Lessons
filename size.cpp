#include <iostream>
#include <vector>

int main() {
  
  std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};
    
  // Add more 
  grocery.push_back("Orange");
  grocery.push_back("Juice");
  grocery.push_back("Pizza");
  std::cout << grocery.size() << "\n";
  
  
  
  
}
