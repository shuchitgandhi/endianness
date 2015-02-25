#include<stdio.h>

union data{
	int number;
	char num[4];
};

int replace_byte(int x, int i, char b){
	union data num1;	
	num1.number = x;
	num1.num[i%4] = b;
	x = num1.number;
	return x;
}

int main(){
	printf("%x\n",replace_byte(0x12345678, 2, 0xAB));
	printf("%x\n",replace_byte(0x12345678, 0, 0xAB));
	return 0;
}
