#include <bits/stdc++.h>
using namespace std;
int main() {
	int a, b;
	int box[3];
	for (int j = 0; j < 3; j++)
	{
		b = 0;
		for (int i = 0; i < 4; i++)
		{
			cin >> a;
			if (a == 0)
				b++;
		}
		switch (b)
		{
		case 0:
			box[j]='E';
			break;
		case 1:
			box[j] = 'A';
			break;
		case 2:
			box[j] = 'B';
			break;
		case 3:
			box[j] = 'C';
			break;
		case 4:
			box[j] = 'D';
			break;
		default:
			break;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		cout << char(box[i])<<' ';
	}

}