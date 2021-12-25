#include <iostream>
using namespace std;
int	fibn(int n)
{
	if (n == 1)
		return 1;
	if (n == 0)
		return 0;
	return (fibn(n - 1) + fibn(n - 2));
}
int	main()
{
	int	num;
	cin >> num;
	if (num > 45) {
		cout << "error";
		return -1;
	}
	cout << fibn(num);
	return 0;
}
