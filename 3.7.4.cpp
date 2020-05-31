#include <iostream>
using namespace std;

int main()
{
    long long seconds;
    int minutes;
    int hours;
    int days;
    long long temp;
    const int seconds_to_minutes = 60;
    const int minutes_to_hours = 60;
    const int hours_to_days = 24;
    cout<<"Enter the number of seconds: ";
    cin>>seconds; 

    cout<<seconds<<" seconds = ";

    temp = seconds / seconds_to_minutes;
    seconds = seconds % seconds_to_minutes;

    minutes = temp % minutes_to_hours;
    temp = temp / minutes_to_hours;

    hours = temp % hours_to_days;
    temp = temp / hours_to_days;

    days = temp;

    cout<<days<<" days, "<<hours<<" hours, "<<minutes<<" minutes, "<<seconds<<" seconds\n";

    return 0;
}