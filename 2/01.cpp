#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int	main()
{
	int	c;
	srand(time(0));
	c = 1+rand() % 6;
	cout << c << endl;
	c = 1+rand() % 6;
	cout << c;
	return (0);
}
