#include <stdio.h>

main(){
	int age;
	
	printf("Enter your age\n");
	scanf("%d", &age);
	
	if(age>=18){
		printf("license is approved");
	}
	else{
		printf("license is not approved");
		
	}
	
	return 0;
}