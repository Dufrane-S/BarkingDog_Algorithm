#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int a;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		string input;
		cin >> input;
		list<char> ps;
		list<char>::iterator it = ps.begin();
		for (auto j :input)
		{
			switch (j)
			{
			case '<':
				if (it != ps.begin())
					it--;
				break;
			case '>':
				if(it != ps.end())
					it++;
				break;
			case '-':
				if (it != ps.begin())
				{
					it--;
					it=ps.erase(it);
				}	
				break;
			default:
				ps.insert(it, j);
				break;
			}
		}
		it = ps.begin();
		while (it!=ps.end())
		{
			if (*it=='\0')
			{
				cout << "null founded";
			}
			cout << *it;
			it++;
		}
		cout << '\n';
	}
}