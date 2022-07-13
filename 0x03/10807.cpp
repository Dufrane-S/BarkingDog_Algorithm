#include <bits/stdc++.h>
using namespace std;

int box[2000000];
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int a;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		int b;
		cin >> b;
		if (b>=0)
		{
			box[b]++;
		}
		else
		{
			box[abs(b)+100]++;
		}
	}
	int c;
	cin >> c;
	if (c>=0)
	{
		cout << box[c];
	}
	else
	{
		cout << box[abs(c) + 100];
	}
}