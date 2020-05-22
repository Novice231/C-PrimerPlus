#include <iostream>
using namespace std;

int CelsiusToFahrenheit(int Celsius);

int main()
{
    int Celsius;//摄氏度
    cout<<"Please enter a Celsius value:";
    cin>>Celsius;
    cout<<Celsius<<" degrees Celsius is "
        <<CelsiusToFahrenheit(Celsius)<<" degrees Fahrenheit"<<endl;
    return 0;
}

int CelsiusToFahrenheit(int Celsius)
{
    int Fahrenheit;
    Fahrenheit = 1.8*Celsius+32.0;
    return Fahrenheit;
}