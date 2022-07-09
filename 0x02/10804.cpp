#include <bits/stdc++.h>
using namespace std;
int main() {
	int box[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

	//int box[21];
	//for (int i = 1; i <= 20; i++) box[i] = i;
	int a, b;
	for (int i = 1; i <= 10; i++)
	{
		cin >> a >> b;
		reverse(box + a-1, box + b);
	}
	for (int i = 0; i < 20; i++)
	{
		cout << box[i] << ' ';
	}
}