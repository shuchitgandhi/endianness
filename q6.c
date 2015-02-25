#include<stdio.h>

int any_odd_one(int x){
	int result = 0;
	result |=x&0x00000001;
	x>>=2;
	result |=x&0x00000001;
	x>>=2;
	result |=x&0x00000001;
	x>>=2;
	result |=x&0x00000001;
	x>>=2;
	result |=x&0x00000001;
	x>>=2;
	result |=x&0x00000001;
	x>>=2;
	result |=x&0x00000001;
	x>>=2;
	result |=x&0x00000001;
	x>>=2;
	result |=x&0x00000001;
	x>>=2;
	result |=x&0x00000001;
	x>>=2;
	result |=x&0x00000001;
	x>>=2;
	result |=x&0x00000001;
	x>>=2;
	result |=x&0x00000001;
	x>>=2;
	result |=x&0x00000001;
	x>>=2;
	result |=x&0x00000001;
	x>>=2;
	result |=x&0x00000001;
	return result;
}


int main(){
	int x;
	printf("Enter x : ");
	scanf("%x", &x);
	printf("%d\n",any_odd_one(x));
	return 0;
}
