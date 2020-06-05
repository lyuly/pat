#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	string s1, s2, s3, s4;
	cin >> s1 >> s2 >> s3 >> s4;
	char t[2];
	int pos, i = 0, j = 0;
	while (i < s1.length() && i < s2.length()) {
		if (s1[i] == s2[i] && ('A' <= s1[i] && s1[i] <= 'G')) {
			t[0] = s1[i];
			break;
		}
		i++;
	}
	i++;
	while (i < s1.length() && i < s2.length()) {
		if (s1[i] == s2[i] && (('A' <= s1[i] && s1[i] <= 'N')|| isdigit(s1[i]))) {
			t[1] = s1[i];
			break;
		}
		i++;
	}
	while (j < s3.length() && j < s4.length()) {
		if (s3[j] == s4[j] && isalpha(s3[j])) {
			pos = j;
			break;
		}
		j++;
	}
	string week[7] = { "MON","TUE","WED","THU","FRI","SAT","SUN" };
	int m = isdigit(t[1]) ? t[1] - '0' : t[1] - 'A' + 10;
	cout << week[t[0] - 'A'];
	cout<<" ";
	printf("%02d:%02d", m, pos);
	return 0;
}