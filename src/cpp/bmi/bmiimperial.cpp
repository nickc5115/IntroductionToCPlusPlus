#include <iostream>
#include <math.h>

const double KG_PER_POUND = 0.453592;
const double M_PER_INCH = 0.0254;
int main() {
  double height;
  double weight;

  std::cout << "Enter height in inches:" << std::endl;
  std::cin >> height;

  std::cout << "Enter weight in pounds:" << std::endl;
  std::cin >> weight;
  double heightM = height * M_PER_INCH;
  double weightKg = weight * KG_PER_POUND;

  heightM = pow(heightM, 2);
  std::cout << "BMI is: " << weightKg / heightM << "!";

  exit(0);
}