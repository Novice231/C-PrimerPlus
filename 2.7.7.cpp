#include <iostream>
using namespace std;

void PrintTime(int hours,int minutes);

int main()
{
    int hours;  //小时
    int minutes;//分钟
    
    cout<<"Enter the number of hours: ";
    cin>>hours;
    cout<<"Enter the number of minutes: ";
    cin>>minutes;
    PrintTime(hours,minutes);

    return 0;
}

void PrintTime(int hours,int minutes)
{
    cout<<"Time: "<<hours<<":"<<minutes<<endl;
}