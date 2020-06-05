#include <iostream>
using namespace std;

bool isPrime(int n){
    bool flag=true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
          flag=false;
          break;
        }
    }
    return flag;
}

int main()
{
    int n,count=0;
    cin>>n;
    for(int i=2;i<=n;i++){
        if(isPrime(i)&&isPrime(i+2)&&(i+2)<=n)
          count++;
    }
    cout<<count;
    return 0;
}