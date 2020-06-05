#include <iostream>

using namespace std;

int fun(int n){
    if(n==1)
        return 0;
    int i=0;
    while(n!=1){
        if(n%2==0){
            n/=2;
            i++;
        }
        else{
            n=(3*n+1)/2;
            i++;
        }
    }
    return i;
}

int main()
{
    int n;
    cin>>n;
    printf("%d",fun(n));
    return 0;
}
