#include <iostream>
#include <vector>

using namespace std;

/*判断是否为素数*/
bool isPrime(int n) {
	for (int i = 2; i*i<=n; i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}

int main()
{
	int count = 0, M, N, c = 2;
	vector<int> v;
	cin >> M >> N;
	while (count < N) {
		if (isPrime(c)) {
			count++;
			if(count>=M)
				v.push_back(c);
		}
		c++;
	}
	count = 0;
	for (int i = 0; i <v.size(); i++) {
		count++;
		if (count % 10 != 1)
			printf(" ");
		printf("%d", v[i]);
		if (count % 10 == 0)
			printf("\n");
	}
	return 0;
}