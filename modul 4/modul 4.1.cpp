#include <iostream>
#include <string.h>

int main()
{
	int n;
	printf("\nInput n = ");
	scanf("%d", &n);
	
	if (n > 50){
		n = n + 10;
	}else{
		n = n - 25;
	}
	printf("\n\n%d", n);
	return 0;
}
