#include <stdio.h>

main(){
	int n;
	printf("Enter the number :\n");
	scanf("%d", &n);
	
	if(n%3 == 0){
		printf("This number is multiple of 3 ");
	}
	else{
		printf("This number is not a multiple of 3");
	}
	return 0;
}