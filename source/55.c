#include <stdio.h>
main()
{
	int a = 3;
	a = a + 1;
	
	if(a > 5) {
		printf("%d\n", a);
	printf("조건이 참일때, 실행됩니다. \n");
	}else {
		printf("%d\n", a);
	printf("조건이 거짓일때, 실행됩니다. \n");
	}
	//printf("%d\n", a - 6);
}