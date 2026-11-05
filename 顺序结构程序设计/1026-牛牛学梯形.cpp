#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int up,down,height;
    cin>>up>>down>>height;
    float s=(up+down)*height/2.000;
    cout<<fixed<<setprecision(3)<<s<<endl;
    return 0;
}