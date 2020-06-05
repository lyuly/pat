#include <iostream>
#include <string>
using namespace std;

bool isRight(string s){
    int sum=0;
    int a[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    int b[11]={1,0,10,9,8,7,6,5,4,3,2};
    for(int i=0;i<17;i++){
        if(s[i]<'0'||s[i]>'9') return false;
        sum+=(s[i]-'0')*a[i];
    }
    int t=(s[17]=='X')?10:(s[17]-'0'); //最后一位判断
    return b[sum%11] == t; //是否与校验码对应
}

int main()
{
    int n,flag=1; //flag标记有问题的身份证号
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(!isRight(s)){
            cout<<s<<endl;
            flag=0;
        }
    }
    if(flag==1) //都通过则输出
        cout<<"All passed";
    return 0;
}