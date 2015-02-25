#include<stdio.h>

union number{
	int num;
	char no[4];
};

int main(){
	int x;
	printf("x = ");
	scanf("%d",&x);
	printf("Any bit of x is 1 : %d\n",!!x);
	printf("Any bit of x is 0 : %d\n",!!~x);
	union number x1;
	x1.num = x;
	int temp = x1.no[0];
	printf("Any bit in the least significant byte of x equals 1 : %d\n",!!temp);
	temp = x1.no[3];
	printf("Any bit in the most significant byte of x equals 0 : %d\n",!!~temp);
	return 0;
}
