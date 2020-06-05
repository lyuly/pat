#include <iostream>
using namespace std;

int main()
{
    int n,i=0,a[3]={0};
    cin>>n;
    while(n!=0){
        a[i++]=n%10;
        n/=10;
    }
    for(int j=0;j<a[2];j++)
      printf("B");
    for(int j=0;j<a[1];j++)
      printf("S");
    for(int j=0;j<a[0];j++)
      printf("%d",j+1);
    return 0;
}