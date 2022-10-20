#include <iostream>
using namespace std;

int main()
{
   /* int num1;
    int num2;
    int sum;

    cout<<"Please enter two numbers separated by a space:"<<endl;
    cin>>num1>>num2;

    sum = num1 + num2;

    cout<<num1<<" + "<<num2<<" = "<<sum<<endl;*/

    int input;
    int days;
    int weeks;
    cout<<"How many days did you travel:"<<endl;

    cin>>input;

    weeks = input / 7;
    days = input % 7;

    cout<<"You traveled for "<<weeks<<" weeks and"<<days<<"days!";

    return 0;
}