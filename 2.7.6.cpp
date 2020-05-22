#include <iostream>
using namespace std;

int lightYearsToAstronomical(double light_years);

int main()
{
    double light_years;
    cout<<"Enter the number of light years: ";
    cin>>light_years;

    cout<<light_years<<" light years = "
        <<lightYearsToAstronomical(light_years)<<" astronomical units"<<endl;
    return 0;
}

int lightYearsToAstronomical(double light_years)
{
    int astronomical;
    astronomical = 63240 * light_years;
    return astronomical;
}