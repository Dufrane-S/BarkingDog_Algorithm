#include <bits/stdc++.h>
using namespace std;

int box[2000000];
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int a;
	cin >> a;
	int count = 0;
	for (int i = 0; i < a; i++)
	{
		int b;
		cin >> b;
		box[b] = 1;
	}
	int c;
	cin >> c;
	for (int i = 0; i < (c+1)/2; i++)
	{
		if (c - i < 0)
		{
			continue;
		}
		if (box[c-i]==1&&box[i])
		{
			count++;
		}
	}
	cout << count;
	
}