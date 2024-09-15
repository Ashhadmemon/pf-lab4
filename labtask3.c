#include <stdio.h>

main(){
	char any;
	printf("enter the chracter\n");
	scanf("%c", &any);
	
	if(any>='a'&& any<='z'){
	  printf(" it is a small alhabet");
    }
	else if(any>='A' && any<='Z' ){
		printf("it is a capital alphabet");
    }
		
	else if(any>='0' && any<='9' ){
		printf("it is a number");	
	}	
	else{
		printf("it is a special charecter");	
	}	
	return 0;
}
