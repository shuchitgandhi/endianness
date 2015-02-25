#include<stdio.h>

int is_little_endian(){
	union data{
		int number;
		char num;
	};
	union data store;
	store.number = 0x00000001;
	printf("%x\n",store.num);
	return 0;
}

int main(){
	is_little_endian();
	return 0;
}
