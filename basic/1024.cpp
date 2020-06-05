#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin>>s;
	if(s[0]=='-')
	    cout<<s[0];
	int p=0,index=0; //p记录E位置,index为指数数值
	for(int i=0;i<s.length();i++){
		if(s[i]=='E')
		    p=i;
	}
	//求指数值
	for(int i=p+2;i<s.length();i++)
		index=index*10+s[i]-'0';
	if(index==0){
		for(int i=1;i<p;i++)
		    cout<<s[i];
    }
	if(s[p+1]=='-'){ //指数为负
		printf("0.");
		for(int i=0;i<index-1;i++)
		    printf("0");
		cout<<s[1]; //输出E前的数字
		for(int i=3;i<p;i++)
		    cout<<s[i];
	}
	else{ //指数为正
		for(int i=1;i<p;i++){
			if(s[i]=='.')
			   continue;
			cout<<s[i];
			if(i==index+2&&(p-3)!=index) //小数点和E之间的位数不等于指数
			    printf(".");
		}
		for(int i=0;i<index-p+3;i++)
	        printf("0");
	}
	return 0;
}
