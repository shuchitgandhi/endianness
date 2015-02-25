#include<stdio.h>
#include<math.h>
#define INT_MAX 0xFFFFFFFF

int lower_one_mask(int n){
	if(n==32){
		return INT_MAX;
	}
	int y=1;
	y=((y<<n)-1);
	return y; 
}

int main(){
	int x;
	printf("Enter x : ");
	scanf("%d", &x);
	printf("%x\n",lower_one_mask(x));
	return 0;
}
