#include <stdio.h>

main(){
	char operator;
	int a, b;
	printf("enter operator(+or-or/or*)\n");
	scanf("%c", &operator);
	
	printf("enter number 1\n");
	scanf("%d", &a);
	printf("enter number 2\n");
	scanf("%d", &b);
	
	switch(operator){
		case '+':
			printf("the sum is %d", a+b);
		break;
		case '-':
			printf("the difference is %d", a-b);
		break;
		case '*':
			printf("the multiple is %d", a*b);
		break;
		case '/':
			printf("the quotient is %d", a/b);
		break;
			
			
	}
	return 0;
}