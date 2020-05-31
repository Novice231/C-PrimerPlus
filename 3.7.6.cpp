#include <iostream>
using namespace std;

int main()
{
    double mileage; //里程
    double gasoline;//汽油量
    cout << "Please enter driving mileage(mile): ";
    cin >> mileage;
    cout << "Please input the amount of gasoline(gallon) used: ";
    cin >> gasoline;
    cout << "The mileage for a gallon is " << mileage/gasoline <<"."<<endl;
    return 0;
}