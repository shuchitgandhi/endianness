 #include<stdio.h>

int main(){
	int x;
	printf("Enter x : ");
	scanf("%d", &x);
	int multipy = (x<<2) + x;
	printf("%d is multipled by 5: %d\n",x,multipy);
	multipy = (x<<3) + x;
	printf("%d is multipled by 9: %d\n",x,multipy);
	multipy = (x<<4) - 2*x;
	printf("%d is multipled by 14: %d\n",x,multipy);
	multipy = (x<<3) - (x<<6);
	printf("%d is multipled by -56: %d\n",x,multipy);
	return 0;
}
