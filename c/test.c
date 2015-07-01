#include <stdio.h>
struct t{
	int a;
	int b;
	int c;
	int d;
};
#define offset(type,member) ((size_t)&(((type *)0)->member)) 
#define container_of(ptr,type,member) ({       \
		const typeof(((type *)0)->member) *tmp = (ptr); \
		((type *)((char *)tmp-offset(type,member)));})
int main()
{
	int b = 1;
	char a[16] ={0};
	int ab[2][3] = {1,2,3,4,5,6};
	printf("%x,%x,%x,%x\n",ab,ab+1,*ab,**ab);
	return 0;
}


/*
s10196@xiaoqing:/proj/test$ ./a.out 
64396930,6439693c,64396930,1
*/
