#include <iostream>
using namespace std;

int main()
{
    int c1,c2;
    cin>>c1>>c2;
    int n,h,m,s;
    n=(c2-c1+50)/100;
    h=n/3600;
    n%=3600;
    m=n/60;
    s=n%60;
    printf("%02d:%02d:%02d\n",h,m,s);
    return 0;
}