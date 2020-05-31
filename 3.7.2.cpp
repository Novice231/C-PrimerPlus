#include <iostream>
using namespace std;


int main()
{
    int height_foot; //身高（英尺）
    int height_inch; //身高（英寸）
    int height;
    int weight_pound;//体重（磅）
    int weight_kg;
    const double convert_height = 12;
    const double convert_weight = 2.2;
    double BMI;

    cout<<"Please your height __foot___inch,and your weight ___pounds.\n";
    cin>>height_foot>>height_inch>>weight_pound;
    height = (height_foot*convert_height+height_inch)*0.0254;
    weight_kg = weight_pound*convert_weight;
    BMI = weight_kg/(height*height);
    cout<<"Your BMI is "<<BMI<<".\n";


    return 0;
}