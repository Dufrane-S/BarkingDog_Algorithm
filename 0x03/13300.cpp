#include <bits/stdc++.h>
using namespace std;

int box[2000000];
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int st_num, full_num;
	cin >> st_num>>full_num;

	for (int i = 0; i < st_num; i++)
	{
		int a, b=0;
		cin >> a >> b;
		if (a==1)
		{
			box[b]=box[b]+1;
		}
		else
		{
			box[b+6]=box[b + 6]+1;
		}
	}
	int sum=0;
	for (int i = 1; i < 13; i++)
	{
		//cout << box[i]<< " ";
		if (box[i]%full_num==0) {
			sum += box[i] / full_num;
		}
		else
		{
			sum += box[i] / full_num+1;
		}
	}
	cout << sum;
}