#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int a,b,c;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        if(a+b>c)
          printf("Case #%d: true\n",i+1);
        else
        {
            printf("Case #%d: false\n",i+1);
        }
        
    }
    return 0;
}