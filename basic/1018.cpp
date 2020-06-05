#include <iostream>
using namespace std;

int main()
{
    int n,jwin=0,ywin=0,j[3]={0},y[3]={0}; //统计甲乙各自赢的次数,0、1、2代表BCJ
    cin>>n; //输入交锋次数
    char a,b;
    for(int i=0;i<n;i++){
        cin>>a>>b; //输入每次交锋的手势
        if(a=='B'&&b=='C'){
            jwin++;
            j[0]++;
        }
        else if(a=='B'&&b=='J'){
            ywin++;
            y[2]++;
        }
        else if(a=='C'&&b=='B'){
            ywin++;
            y[0]++;
        }
        else if(a=='C'&&b=='J'){
            jwin++;
            j[1]++;
        }
        else if(a=='J'&&b=='B'){
            jwin++;
            j[2]++;
        }
        else if(a=='J'&&b=='C'){
            ywin++;
            y[1]++;
        }
    }
    cout<<jwin<<" "<<n-jwin-ywin<<" "<<ywin<<endl;
    cout<<ywin<<" "<<n-jwin-ywin<<" "<<jwin<<endl;
    int maxj=j[0]>=j[1]?0:1; //求数组中的最大值即为胜算最大的手势
    maxj=j[maxj]>=j[2]?maxj:2;
    int maxy=y[0]>=y[1]?0:1;
    maxy=y[maxy]>=y[2]?maxy:2;
    char str[4]={"BCJ"};
    cout<<str[maxj]<<" "<<str[maxy]<<endl;
    return 0;
}