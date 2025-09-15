#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Declare variable//
	float temperature;
	//Prompt user to input Value for temperature//
	printf("Enter your body temperature(°C):");
	scanf("%f",&temperature);
	printf("Your body temperature is:%f°C\n",temperature);
	//Using conditional statement if...else//
	if(temperature < 35.0){
		printf("Your temperature is low\n");
		printf("You are not well\n");
		printf("Medical attention needed\n");
		
	}else if( temperature<=37.5){
			printf("Your body temperature is normal\n");
			printf("No medical attention needed\n");
		}else{
			printf("Your temperature is high\n");
			printf("You are not well\n");
			printf("Medical attention needed\n");
		
}
	
	
	return 0;
}
