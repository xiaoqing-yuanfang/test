#include<stdio.h>

char *myString()
{
	char buffer[6] = {0};
	char *s = "Hello World!";
	int i = 0;
	for (i = 0; i < sizeof(buffer) - 1; i++)
	{
		buffer[i] = *(s + i);
	}
	return buffer;
}
int main(int argc, char **argv)
{
	    printf("%s\n", myString());
		    return 0;
}
