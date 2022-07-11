#include <bits/stdc++.h>
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int a;
	cin >> a;
	for (int i = 1; i <= a; i++)
	{
		int b=i*2-1;
		int c = ((2 * a - 1)-b)/2;
		for (int j = 0; j < c; j++)
		{
			cout << " ";
		}
		for (int k = 0; k < b; k++)
		{
			cout << "*";
		}
		cout << "\n";
	}

}