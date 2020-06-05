#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name, birth, min = "2014/09/06", maxn = "1814/09/06",maxname,minname;
	int n,count=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> name >> birth;
		if (birth >= "1814/09/06"&&birth <= "2014/09/06") {
			count++;
			if (birth >= maxn) {
				maxn = birth;
				maxname = name;
			}
			if (birth <= min) {
				min = birth;
				minname = name;
			}
		}
	}
	cout << count;
	if(count!=0)
		cout<< " " << minname << " " << maxname;
	return 0;
}