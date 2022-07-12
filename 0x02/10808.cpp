#include <bits/stdc++.h>
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int box[26];
	for (int i = 0; i < 26; i++)
	{
		box[i] = 0;
	}
	string a;
	cin >> a;
	for (int i = 0; i < a.length(); i++)
	{
		box[int(a[i]) - 97]++;
		//cout << int(a[i]) - 97<<' ';
	}
	for (int i = 0; i < 26; i++)
	{
		cout << box[i] << ' ';
	}
}
