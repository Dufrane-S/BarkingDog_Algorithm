#include <bits/stdc++.h>
using namespace std;

int main(void) {
	string b;
	list<char> a;
	cin >> b;
	list<char>::iterator cur = a.begin();
	for (int i = 0; i < b.length(); i++)
	{
		a.push_back(b[i]);
	}
	cur = a.end();
	int c;
	cin >> c;
	for (int i = 0; i < c; i++)
	{
		char o, p;
		cin >> o;
		switch (o)
		{
		case 'P':
			cin >> p;
			a.insert(cur, p);
			break;
		case 'L':
			if(cur!=a.begin())
				cur--;
			break;
		case 'B':
			if (cur != a.begin()) {
				cur--;
				cur = a.erase(cur);
			}
				break;
		case 'D':
			if(cur!=a.end())
				cur++;
			break;
		default:
			break;
		}
	}
	for(list<char>::iterator it = a.begin(); it!=a.end();it++)
	{
		cout << *it;
	}
}