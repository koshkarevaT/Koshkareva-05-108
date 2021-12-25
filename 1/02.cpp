#include <iostream>
using namespace std;
int main()
{
	int a, b;
	int c = 365;
	int i = 1, j = 0;
	cin >> b >> a;
	if (a > 12)
		cout << "error";
	while (i < a) {
		if (i == 4 || i == 6 || i == 9 || i == 11) {
			if (b > 30) {
				cout << "error";
				return -1;
			}
			j += 30;
		}
		else if (i == 2) {
			if (b > 28) {
				cout << "error";
				return -1;
			}
			j += 28;
		}
		else {
			if (b > 31) {
				cout << "error";
				return -1;
			}
			j += 31;
		}
		i++;
	}
	j += b;
	c = c - j;
	cout << c;
	return 0;
}

