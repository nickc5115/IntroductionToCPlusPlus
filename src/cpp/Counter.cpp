#include <iostream>

const double QUARTER_VAL = .25;
const double DIME_VAL = .10;
const double NICKEL_VAL = .05;
const double PENNY_VAL = .01;

int main() {
  int quarter_count;
  int dime_count;
  int nickel_count;
  int penny_count;
  double total;

  std::cout << "Please enter the number of coins:\n";
  std::cout << "Number of quarters:\n";
  std::cin >> quarter_count;
  std::cout << "Number of dimes:\n";
  std::cin >> dime_count;
  std::cout << "Number of nickels:\n";
  std::cin >> nickel_count;
  std::cout << "Number of pennies:\n";
  std::cin >> penny_count;

  total = (quarter_count * QUARTER_VAL) + (dime_count * DIME_VAL) +
          (nickel_count * NICKEL_VAL) + (penny_count * PENNY_VAL);

  int dollars = total / 1;
  double cents = (total - dollars) / .01;

  std::cout << "You entered " << dollars << " dollars and " << cents << " cents";

  return 0;
}