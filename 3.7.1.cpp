#include <iostream>
using namespace std;

int main()
{
    int height;
    const int convert = 12;
    cout<<"Please enter your height(inch):___\b\b\b";
    cin>>height;
    cout<<"Your height is "<<double(height)/double(convert)<<" foot,"
        <<height<<" inch."<<endl;

    return 0;
}