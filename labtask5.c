#include <stdio.h>

main(){
	float id, units, bill;
	char name;
	printf("Enter name's first letter\n");
	scanf("%c", &name);
	
	printf("Enter id\n");
	scanf("%f", &id);
	printf("Enter units consumed\n");
	scanf("%f", &units);
	
	if(units <= 199){
		bill=
		printf("the bill is %f", units*16.20);
		
	}
	else if(units > 200 && units < 300){
		printf("the bill is %f", units*20.10);
		
	}
	else if(units > 300 && units < 500){
		printf("the bill is %f", units*27.10);
		
	}
	else if(units >= 500){
		bill=units*35.90;
		if(bill >= 18000){
			printf("the bill is %f", bill+2700);
		}
		else{
		printf("the bill is %f", bill);
	}
    }
    return 0;
			
}
