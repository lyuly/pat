#include <iostream>
#include <string>
using namespace std;

int main()
{
    int hashTable[256];
    for(int i=0;i<256;i++) // 哈希表初始化为全0
        hashTable[i]=0;
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.length();i++){ //将字符中小写字符转为大写,并将出现的字符次数记录至哈希表
        if(s1[i]>='a'&&s1[i]<='z')
            s1[i]=s1[i]-'a'+'A';
        hashTable[s1[i]]++;
    }
    for(int i=0;i<s2.length();i++){ //删除两字符中重复字符出现的次数
        if(s2[i]>='a'&&s2[i]<='z')
            s2[i]=s2[i]-'a'+'A';
        hashTable[s2[i]]--;
    }
    for(int i=0;i<s1.length();i++){ //打印破坏的键盘
        if(hashTable[s1[i]]!=0){
            cout<<s1[i];
            hashTable[s1[i]]=0; //防止出现相同的情况
        }
    }
    return 0;
}