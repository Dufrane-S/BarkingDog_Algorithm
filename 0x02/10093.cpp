#include <bits/stdc++.h>
using namespace std;
int main() {
	long long a,b;
	cin >> a >> b;
	if (a > b) {
		long long tmp = a;
		a = b;
		b = tmp;
	}
	if (a == b || b-a==0)
		cout << 0;
	else
	{
		cout << b - a - 1<< '\n';
		a++;
		for (; a < b; a++)
		{
			cout << a << ' ';
		}
	}
	
}