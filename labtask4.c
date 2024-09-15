  #include <stdio.h>
main(){
	float discount = 0.0, saved = 0.0, price_pay = 0.0, actual_price;
	printf("Enter the actual price\n");
	scanf("%f", &actual_price);
	
	if(actual_price<500){
		printf("the discount is not available");
		return 0;
	}
	else{
		printf("discount is avaialble\n");
	}
	
    if(actual_price<2000 && actual_price>500){
		discount=5.0;
	}
	else if(actual_price<4000 && actual_price>=2000){
		discount=10.0;
	}
	else if(actual_price<6000 && actual_price>=4000){
		discount=20.0;
	}
	else if(actual_price>=6000){
		discount=35.0;
	}
    
	saved = (discount/100)*actual_price;
	price_pay = actual_price - saved;
	
	printf("The actual amount is: %.2f\n", actual_price);
	printf("The discount is: %.2f%%\n", discount);
	printf("The saved amount is: %.2f\n", saved);
	printf("The price to pay is: %.2f\n", price_pay);
	return 0;
}
