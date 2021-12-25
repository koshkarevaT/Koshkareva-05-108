#include <iostream>
using namespace std;
int	prNum(int num){
	if (num!=0){
		prNum(num/10);
		cout <<num 10 << " ";
	}
	return 0;
}
int	main(){
	int	num;
	cin >> num;
	prNum(num);
	return 0;