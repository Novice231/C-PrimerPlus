#include <iostream>
using namespace std;

int main()
{
    double gasoline;
    cout << "请按欧洲风格输入汽车的耗油量（每100公里消耗的汽油量（升））：";
    cin >> gasoline;
    cout << "美国风格的耗油量（每加仑多少英里）："<< 62.14/(gasoline/3.875);
    return 0;
}