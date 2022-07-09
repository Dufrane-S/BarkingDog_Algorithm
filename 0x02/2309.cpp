#include <bits/stdc++.h>
using namespace std;
int main() {
	int a;
	int b = 0;
	int c[9];
	for (int i = 0; i < 9; i++)
	{
		cin >> a;
		c[i] = a;
	}
	sort(c, c + 9);
	int result[8];
	int sum = 0;
	for (int i = 0; i <9; i++)
	{
		sum = 0;
		for (int j = i + 1; j < 9; j++) {
			if (i == j)
				continue;
			sum = 0;
			for (int k = 0, f =0; k < 9; k++)
			{
				if (k == i || k == j)
					continue;
				sum += c[k];
				result[f] = c[k];
				f++;
			}
			if (sum == 100) { break; }
		}
		if (sum == 100){ break; }
	}


	for (int d = 0; d < 7; d++)
	{
		cout << result[d] << '\n';
	}
}