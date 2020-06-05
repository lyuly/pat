#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    string s;
    int n,p=0,t=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        map<char,int> m;
        for(int j=0;j<s.length();j++){
            m[s[j]]++;
            if(s[j]=='P') p=j;
            if(s[j]=='T') t=j;
        }
        if(m['P']==1&&m['T']==1&&m['A']!=0&&t-p!=1&&p*(t-p-1)==s.length()-1-t) /*P和T的个数只能为1，A的个数不为0，前A的个数乘中A的个数等于后A的个数*/
            printf("YES\n");
        else
            printf("NO\n");
        }
    return 0;
}