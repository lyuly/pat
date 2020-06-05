#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    string s=to_string(a+b);
    for(int i=0;i<s.length();i++){
        cout<<s[i];
        if(s[i]=='-') continue;
        if((s.length()-1-i)%3==0&&i!=s.length()-1) cout<<","; //判断关键
    }
    cout<<endl;
    return 0;
}