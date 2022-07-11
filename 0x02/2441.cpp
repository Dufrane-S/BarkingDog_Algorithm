#include <bits/stdc++.h>
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int a,j;
	cin >> a;
	int count = 0;
	int countj;
	for (int i = a; i > 0; i--)
	{
		countj = 0;
		for (int k = 0; k < 5-i; k++)
			cout <<' ';
		for (j = i; j > 0; j--) {
			cout << "*";
			countj++;
		}
		count++;
		if (count == 5 && countj == 1)
			break;
		cout << '\n';
	}


	//for (int i = 0; i < a; i++) {
	//	for (int j = 0; j < i; j++) cout << " ";
	//	for (int k = i-a; k < 0; k++) cout << "*";
	//	cout << "\n";
	//}



	/*int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int j = 0;
		for (; j < i; j++)  cout << ' ';
		for (; j < N; j++)  cout << '*';
		cout << "\n"<<1;
	}*/
}