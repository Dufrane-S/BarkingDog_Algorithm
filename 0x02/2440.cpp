#include <bits/stdc++.h>
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int a;
	cin >> a;
	for (int i = a; i >= 0; i--)
	{
		
		for (int j = i; j > 0; j--) {
			cout << "*";
		}
		cout << '\n';
	}
}