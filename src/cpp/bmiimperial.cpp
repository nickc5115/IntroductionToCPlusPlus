#include <iostream>
#include <math.h>

const double KG_PER_POUND = 0.453592;
const double M_PER_INCH = 0.0254;
int main()
{
    double height;
    double weight;
    
    std::cout << "Enter height in inches:" << std::endl;
    std::cin >> height;

    std::cout << "Enter weight in pounds:" << std::endl;
    std::cin >> weight;

    height = pow(height, 2);
    std::cout <<"BMI is: " << weight/height << "!";

}