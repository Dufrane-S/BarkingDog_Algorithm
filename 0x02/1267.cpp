#include <bits/stdc++.h>
using namespace std;

int return_Y(int time) {
	if (time == 0)
		return 0;
	else
		return 10 * (time / 30 + 1);
}

int return_M(int time) {
	if (time == 0)
		return 0;
	else
		return 15 * (time / 60 + 1);

}

int main() {
	int count, time;
	int Y, M;
	int sumY=0, sumM=0;
	cin >> count;
	for (int i = 0; i < count;  i++)
	{
		cin >> time;
		sumY+=return_Y(time);

		sumM += return_M(time);
	}
	if (sumY == sumM)
		cout << "Y M " << sumM;
	else if (sumY > sumM) {
		cout << "M " << sumM;
	}
	else
		cout << "Y " << sumY;
}