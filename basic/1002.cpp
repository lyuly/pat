#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string str[]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    int sum=0;
    for(int i=0;i<s.length();i++)
        sum+=s[i]-'0';
    string S=to_string(sum);
    for(int i=0;i<S.length();i++){
        cout<<str[S[i]-'0'];
        if(i!=S.length()-1)
            printf(" ");
    }
    return 0;
}