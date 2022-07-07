#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n,x;
	cin >> n>>x;
	vector<int>a;
	for (int i = 0; i < n; i++)
	{
		int b;
		cin >> b;
		a.push_back(b);
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i]<x)
		{
			cout << a[i] <<' ';
		}
	}

}