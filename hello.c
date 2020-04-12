#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		printf("USAGE: %s name\n", argv[0]);
		return -5;
	}
	//preluat de la Tiberiu
	printf("Hello, %s!\n", argv[1]);
	return 0;
}
