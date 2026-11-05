#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    double C=a+b+c,s=C/2.000;
    double S=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<fixed<<setprecision(2);
    cout<<"circumference="<<C<<" "<<"area="<<S<<endl;
    return 0;
}

