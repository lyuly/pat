#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n,len=0,t=0; // len记录最终值
    long long p;
    scanf("%d%lld",&n,&p);
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        for(int j=i+len;j<n;j++){ //若len个数不满足,则跨越len个数开始
            if(v[j]<=v[i]*p){
                t=j-i+1;
                if(t>len)
                    len=t;
            }
            else
                break;
        }
    }
    printf("%d",len);
    return 0;
}