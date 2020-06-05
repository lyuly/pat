#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,m,c;
    cin>>n>>m;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>c;
        v.push_back(c);
    }
    m%=n;
    if(m!=0){
        reverse(v.begin(),v.end());
        reverse(v.begin(),v.begin()+m);
        reverse(v.begin()+m,v.end());
    }
    for(int i=0;i<n;i++){
        cout<<v[i];
        if(i!=n-1)
          cout<<" ";
    }
    return 0;
}