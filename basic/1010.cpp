#include <iostream>
using namespace std;

int main()
{
    int a,b;
    bool flag=false;
    while(cin>>a>>b){
        if(b!=0){
            if(flag==true) cout<<" ";
            cout<<a*b<<" "<<b-1;
            flag=true;
        }
    }
    if(flag==false)
    cout<<"0 0";
    return 0;
}