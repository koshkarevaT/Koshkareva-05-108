#include <iostream>
using namespace std;
int	SumDel(int num){
	int	count = 0;
	int	b = 1;
	while (b<=num/2){
		if (num%b==0) count += b;
		b++;
	}
	return count;
}

int main(){
	int	i=1;
	int	j=1;
	int	sum;
	while (i<10000){
		j=i;
		sum=SumDel(i);
		while(j<10000){
			if (i!=j && sum==j && SumDel(j)==i){
				cout << i << " " << j << endl;
				break;
			}
			j++;
		}
		i++;
	}
	return 0;
}
