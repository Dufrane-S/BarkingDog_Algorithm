#include <bits/stdc++.h>
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int a;
	cin >> a;
	for (int i = 0; i <= a; i++)
	{
		int b = 2 * (a - i) - 1;
		for (int k = 0; k < (2 * a - 1 - b) / 2; k++)
		{
			cout << " ";
		}
		for (int j = 0; j <b ; j++)
		{
			cout << "*";
		}
		
		cout << "\n";
	}

}