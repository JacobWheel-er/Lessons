#include <iostream>
#include "song.hpp"

int main() {
  // Initiation of Song
  Song electric_relaxation;
  // Change the name with .addtitle() method
  electric_relaxation.add_title("Electric Relaxation");
  std::cout << electric_relaxation.get_title() << "\n";
}
