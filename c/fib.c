#include <stdio.h>    
int getNthNumber(int n) {
        // write code here
        if(n==1 || n ==2)
            return 1;
        int sum;
        sum = getNthNumber(n-1) + getNthNumber(n-2);
        return sum;
    }

int main()
{
	int s = 0;
	int n = 3;
	s = getNthNumber(n);
	printf("%d\n",s);
}
