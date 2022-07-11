#include <bits/stdc++.h>
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int max,b,a;
	max = -1;
	b = -1;
	int c = 0;
	for (int i = 0; i < 9; i++)
	{
		cin >> a;
		c++;
		if (max < a)
		{
			b = c;
			max = a;
		}
	}
	cout << max << "\n" << b;
}