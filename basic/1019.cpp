#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool cmp(char a,char b){
    return a>b;
}

int main()
{
    string s;
    cin>>s;
    s.insert(0,4-s.length(),'0'); //加入前导的0
    do{
        string a=s,b=s;
        sort(a.begin(),a.end(),cmp);
        sort(b.begin(),b.end());
        int result=stoi(a)-stoi(b); //string to int
        s=to_string(result);
        s.insert(0,4-s.length(),'0'); //结果若是低于4位,则需加入前导的0
        cout<<a<<" - "<<b<<" = "<<s<<endl;
    }while(s!="6174"&&s!="0000");
    return 0;
}