#include <bits/stdc++.h>
using namespace std;
int main() {
	int a;
	int b = 0;
	int c[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> a;
		b += a;
		c[i] = a;
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5; j++)
		{
			if (c[i] > c[j]) {
				int tmp = c[i];
				c[i] = c[j];
				c[j] = tmp;
			}

		}

	}
	cout << b/5 << '\n'<<c[2];
}