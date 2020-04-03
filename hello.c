#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		printf("USAGE: %s name\n", argv[0]);
		return -1;
	}
	printf("Hello, %s!\n", argv[1]);
	retunr 0;
}
