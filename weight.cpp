#include <iostream>
#include <unistd.h>

int main() {
  
  int initialweight;
  double weeks;
  double projectedweight;
  std::string nombre;

std::cout << "Yooo welcome to your missionary weight gain calculator! Jac tells me you've gained about 5 pounds since the start of the MTC. I fully support you in this endeavor. This program will tell you how much you'll weigh at any point on your mission if you continue at this rate. Enjoy.\n";

std::cout << "Please enter your name to begin.\n";

std::cin >> nombre;

std::cout << "Please enter your weight when you entered the MTC: ";
std::cin >> initialweight;
  
std::cout << "Please enter the number of weeks that have passed since entering the MTC (decimals are allowed): ";
std::cin >> weeks;

std::cout << nombre << ", your projected/current weight is: (drumroll please)....\n";

usleep(5000000);

projectedweight=(weeks*2.34) + initialweight;

std::cout << projectedweight << " lbs" << "\n";

usleep(1000000);

std::cout << "oof\n";

}
 