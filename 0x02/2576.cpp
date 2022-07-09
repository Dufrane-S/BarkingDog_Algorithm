#include <bits/stdc++.h>
using namespace std;
int main() {
	int a,c;
	int b = 0;
	c = 1000;
	for (int i = 0; i < 7; i++)
	{
		cin >> a;
		if (a%2==1)
		{
			b += a;
			if (c > a) {
				c = a;
			}
		}
	}
	if (b == 0) {
		cout << -1;
	}
	else
		cout << b << '\n' << c;
}