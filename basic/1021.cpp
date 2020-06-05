#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int a[10]={0}; //数组a存放的是数的位数
    for(int i=0;i<s.length();i++)
        a[s[i]-'0']++;
    for(int i=0;i<10;i++){
        if(a[i]!=0)
            cout<<i<<":"<<a[i]<<endl;
    }
    return 0;
}