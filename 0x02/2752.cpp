#include <bits/stdc++.h>
using namespace std;
int main() {

	int a,b,c;
	cin >> a>>b>>c;
	if (a > b) {
		int tmp = a;
		a = b;
		b = tmp;
		if (b > c) {
			tmp = b;
			b = c;
			c = tmp;
		}
		if (a > b) {
			int tmp = a;
			a = b;
			b = tmp;
		}
	}
	else {
		if (b > c) {
			int tmp = b;
			b = c;
			c = tmp;
		}
		if (a > b) {
			int tmp = a;
			a = b;
			b = tmp;
		}
	}
	cout << a<<' ' << b<<' ' << c;
}