#include <bits/stdc++.h>
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int box[10];
	for (int i = 0; i < 10; i++)
	{
		box[i] = 0;
	}
	int a, b,c ;
	cin >> a >> b >> c;
	string d = to_string(a * b * c);
	for (int i = 0; i < d.length(); i++)
	{
		box[d[i]-48]+=1;
	}
	for (int i = 0; i <  10; i++)
	{
		cout << box[i] << "\n";
	}

}