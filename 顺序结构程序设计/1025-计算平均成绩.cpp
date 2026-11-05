#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    float n=a+b+c+d+e;
    cout<<fixed<<setprecision(1)<<n/5.0<<endl;
    return 0;
}