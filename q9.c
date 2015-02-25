#include<stdio.h>
#include<math.h>
#define INT_MAX 0xFFFFFFFF

long lower_one_mask(int n){
	if(n==32){
		return INT_MAX;
	}
	long y=1;
	y=((y<<n)-1);
	return y; 
}

int main(){
	int k,j,w;
	printf("Enter w : ");
	scanf("%d", &w);
	printf("Enter k : ");
	scanf("%d", &k);
	long temp = lower_one_mask(w-k);
	temp = temp<<k;
	printf("%x",temp);
//=========================================== B Part =================================		temp = temp<<w-k;
	printf("\nEnter w : ");
	scanf("%d", &w);
	printf("Enter k : ");
	scanf("%d", &k);
	printf("Enter j : ");
	scanf("%d", &j);
	temp = lower_one_mask(k);
	temp = temp<<j;
	printf("%x\n",temp);
	
	return 0;
}
