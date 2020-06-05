#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int sum = 0;
    for(int i = 0; i < s.size(); i++)
        sum += s[i] - '0';
    string b = to_string(sum);
    string a[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cout << a[b[0]-'0'];
    for(int i = 1; i < b.size(); i++)
        cout<< " " << a[b[i]-'0'];
    return 0;
}