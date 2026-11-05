#include <iostream>
using namespace std;
int main()
{
    int a,b,c,s,v;
    cin>>a>>b>>c;
    s=(a*b+b*c+a*c)*2;
    v=a*b*c;
    cout<<s<<endl<<v<<endl;
    return 0;
}