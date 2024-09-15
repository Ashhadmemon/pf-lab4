#include <stdio.h>

main(){
	int time;
	printf("enter time in 24 hour format\n");
	scanf("%d", &time);
	
	if(time>=5 && time<=11){
		printf("good morning");
		
	}
	else if(time>=12 && time<=18){
		printf("good evening");
		
	}
	else if(time>=19 && time<=24){
		printf("good night");
		
	}
	return 0;
	
}