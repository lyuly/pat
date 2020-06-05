//手工模拟除法
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    int b;
    cin>>a>>b;
    int t=0,temp=0;
    t=(a[0]-'0')/b;
    if((t!=0&&a.length()>1)||a.length()==1)
        cout<<t;
    temp=(a[0]-'0')%b;
    for(int i=1;i<a.length();i++){
        t=(temp*10+a[i]-'0')/b;
        cout<<t;
        temp=(temp*10+a[i]-'0')%b;
    }
    cout<<" "<<temp; 
    return 0;
}