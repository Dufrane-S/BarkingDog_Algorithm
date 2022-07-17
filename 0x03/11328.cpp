#include <bits/stdc++.h>
using namespace std;

int box[2000000];
int box2[2000000];
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int a;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		string b,c,d;
		d = "Possible";
		cin >> b >>c;
		for (int j = 0; j < b.length(); j++)
		{
			box[b[j]]++;
			box2[c[j]]++;
		}
		for (int k = 0; k < size(box); k++)
		{
			if (box[k]!=box2[k])
			{
				d = "Impossible";
				break;
			}
		}
		cout << d << '\n';
		for (int k = 0; k < size(box); k++)
		{
			box[k] = 0;
			box2[k] = 0;
		}
	}
}