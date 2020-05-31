#include <iostream>
using namespace std;

int main()
{
    int degrees;
    int minutes;
    int seconds;
    double latitude;
    const double seconds_to_minutes = 60;
    const double minutes_to_degrees = 60;

    cout<<"Enter a latitude in degrees, minutes, and seconds:\n"
        <<"First, enter the degrees:";
    cin>>degrees;
    cout<<"Next, enter the minutes of arc:";
    cin>>minutes;
    cout<<"Finally, enter the seconds of arc:";
    cin>>seconds;
    latitude = degrees + (minutes + seconds / seconds_to_minutes) / minutes_to_degrees;
    cout<<degrees<<" degrees, "<<minutes<<" minutes, "<<seconds<<" seconds = "<<latitude<<" degrees\n";
    return 0;
}