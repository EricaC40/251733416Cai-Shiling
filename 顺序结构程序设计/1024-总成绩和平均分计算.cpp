#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float a,b,c;
    cin>>a>>b>>c;
    double n=a+b+c;
    cout<<fixed<<setprecision(2);
    cout<<n<<" "<<n/3.00<<endl;
    return 0;
}