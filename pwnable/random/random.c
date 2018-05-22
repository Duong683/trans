#include <stdio.h>

int main(){
	unsigned int random;
	random = rand();	// random value!

	unsigned int key=0;
	scanf("%d", &key);

	if( (key ^ random) == 0xdeadbeef ){
		printf("Good!\n");
		system("/bin/cat flag");
		return 0;
	}

	printf("Wrong, maybe you should try 2^32 cases.\n");
	return 0;
}

/*
do rand() khong co seed nen luon ra 1 so co dinh
random = 0x6b8b4567
key = 0xdeadbeef ^ 0x6b8b4567 = 3039230856
*/

