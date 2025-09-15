#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		//Declare variable//
	float temperature;
	//Prompt user to input temperature reading//
	printf("Enter your body temperature in °C:");
	scanf("%f",&temperature);
	//Using conditional statement, if...else//
	if(temperature < 35.0){
		printf("\n --- Medical Report ---\n");
		printf("Your body temperature is low,\n");
		printf("You need immediate medical attention, Thank you.\n");
		
	}else if( temperature<=37.5){
		printf("\n --- Medical Report ---\n");
			printf("Your body temperature is normal.\n");
			printf("You're in a good condition, Thank you.\n");
		}else{
			printf("\n --- Medical Report ---\n");
			printf("Your body temperature is high.\n");
			printf("You need immediate medical attention, Thank you.\n");
		
}

	return 0;
}

