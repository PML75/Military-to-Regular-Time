#include "time_converter.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
  int military_time;
  std::cout << "Please enter the time in military time: ";
  std::cin >> military_time;

  std::string regular_time = MilitaryToRegularTime(military_time);

  std::cout << "The equivalent regular time is: " << std::setw(2) << std::setfill('0') << regular_time << "\n";
  return 0;
}
