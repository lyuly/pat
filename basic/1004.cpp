#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n,score,max=-1,min=101;
    string maxname,maxnumber,minname,minnumber,name,number;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>name>>number>>score;
        if(max<score){
            max=score;
            maxname=name;
            maxnumber=number;
        }
        if(min>score){
            min=score;
            minname=name;
            minnumber=number;
        }
    }
    cout<<maxname<<" "<<maxnumber<<endl;
    cout<<minname<<" "<<minnumber<<endl;
    return 0;
}