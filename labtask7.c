#include <stdio.h>

main(){
	int input;
	printf("Enter the value coming from sensor\n");
	scanf("%d", &input);
	
	if(input<1){
		printf("This is out of range");
		return 0;
	}
	else if(input>1000){
		printf("This is out of range");
		return 0;
	}
	else if(input>=101 && input<=500){
		printf("The sensor is in medium light");
		return 0;
	}
	else if(input>500){
		printf("The sensor is exposed under sunshine");
		return 0;
	}
	else if(input>1 && input<100){
		printf("The sensor is in evening");
	}
		
	
}
