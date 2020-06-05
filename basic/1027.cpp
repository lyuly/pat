#include <iostream>

using namespace std;

int main()
{
    int n,row=0;
    char s;
    cin>>n>>s;
    for(int i=0;i<n;i++){
        if((2*i*(i+2)+1)>n){
            row=i-1; 
            break;
        }
    }
    for(int i=row;i>=1;i--){
        for(int k=row-i;k>0;k--) cout<<" ";
        for(int j=i*2+1;j>0;j--) cout<<s;
        cout<<endl;
    }
    for(int i=0;i<row;i++) cout<<" ";
    cout<<s<<endl;
    for(int i=1;i<=row;i++){
        for(int k=row-i;k>0;k--) cout<<" ";
        for(int j=i*2+1;j>0;j--) cout<<s;
        cout<<endl;
    }
    printf("%d",n-(2*row*(row+2)+1));
    return 0;
}