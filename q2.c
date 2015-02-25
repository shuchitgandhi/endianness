#include<stdio.h>

union data{
	int number;
	char num;
};

int main(){
	union data x,y,z;
	x.number = 0x89ABCDEF;
	y.number = 0x76543210;
	z.number = y.number;
	z.num = x.num;
	printf("x = %x y = %x z = %x\n", x.number, y.number, z.number);
	return 0;
}
