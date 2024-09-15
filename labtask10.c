#include <stdio.h>
main(){
	int temp;
	printf("enter the tempreture(o to 40)\n");
	scanf("%d", &temp);
	
	if(temp<0){
		printf("freezing weather");
	}
	else if(temp>=0 && temp<=10){
		printf("very cold weather");
		
	}
		else if(temp>=11 && temp<=20){
		printf("cold weather");
		
	}	
	else if(temp>=21 && temp<=30){
		printf("normal temperature");
		
	}	
	else if(temp>=31 && temp<40){
		printf("hot weather");
		
	}
	else if(temp==40){
		printf("very hot weather");
		
	}

	return 0;
	
	
}