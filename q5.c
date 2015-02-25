#include<stdio.h>

int get_msb(int x){
	x = x>>(sizeof(x)*8-8);
	return (x & 0x000000FF);
}

int main(){
	printf("%x msb is : %x\n", 0x12345678, get_msb(0x12345678));
	return 0;
}
