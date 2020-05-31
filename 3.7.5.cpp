#include <iostream>
using namespace std;

int main()
{
    long long w_population;//世界总人口
    long long c_population;//中国人口数

    cout<<"Enter the world's population: ";
    cin>>w_population;

    cout<<"Enter the population of the China: ";
    cin>>c_population;

    cout<<"The population of the China is "<<(double)c_population*100/(double)w_population<<"% of the world population.\n";

    return 0;
}
