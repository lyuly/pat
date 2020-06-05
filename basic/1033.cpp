#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1,s2;
	cin>>s1>>s2;
	bool hashTable[256]; //设置哈希数组，标志键位是否好坏
	for(int i=0;i<256;i++)
	    hashTable[i]=true;
	for(int i=0;i<s1.length();i++){
		if(s1[i]>='A'&&s1[i]<='Z')
		    s1[i]=s1[i]-'A'+'a';
		hashTable[s1[i]]=false; //坏掉的键 
	}
	for(int i=0;i<s2.length();i++){
		if(s2[i]>='A'&&s2[i]<='Z'){
			if(hashTable[s2[i]-'A'+'a']==true && hashTable['+']==true)
		        cout<<s2[i]; //小写字母和上档键均完好，才可打印
		}
		else if(hashTable[s2[i]]==true)
		    cout<<s2[i]; 
	}
	cout<<endl; 
	return 0;
}
