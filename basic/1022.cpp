#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a,b,d;
    cin>>a>>b>>d;
    int c=a+b;
    if(c==0){
        cout<<0;
    }
    vector<int> v;
    while(c!=0){
        v.push_back(c%d);
        c/=d;        
    }
    for(int i=v.size()-1;i>=0;i--)
        cout<<v[i];
    cout<<endl;
    return 0;
}