#include <bits/stdc++.h>
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int a;
	cin >> a;
	for (int i = 1; i <= a; i++)
	{
		for (int j = 0; j < i-1; j++)
		{
			cout << " ";
		}

		for (int j = 0; j < 2*(a-i)+1; j++)
		{
			cout << "*";
		}

		cout << "\n";
	}
	for (int i = 1; i < a; i++)
	{
		for (int j = 0; j < a-i-1; j++)
		{
			cout << " ";
		}
		for (int k = 0; k < 2*i+1; k++)
		{
			cout << "*";
		}
		cout << "\n";
	}
}