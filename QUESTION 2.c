 #include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Declare variable//
	float temperature;
	//Prompt user to input temperature reading//
	printf("Please enter your temperature reading in °C:");
	scanf("%f",&temperature);
	//Using conditional statement if...else//
	if(temperature < 35.0){
		printf("Your temperature is low\n");
		
	}else if( temperature<=37.5){
			printf("Your body temperature is normal\n");
		}else{
			printf("Your temperature is high\n");	
}
	
	
	return 0;
}
