#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop *//* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	   //Declare the variables//
float temperature;
int heart_rate, blood_pressure;
int systolic,diastolic;

//Prompt the user to input values for body temperature//
printf("Please enter your body temperature in °C:");
scanf("%f",&temperature);

//Prompt user to input value for heart rate//
printf("Please enter your heart rate in bpm:");
scanf("%d",&heart_rate);

//Prompt user to input systolic and diastolic values//
printf("Please enter your blood pressure in mmHg\n");{
printf("Systolic reading:");
scanf("%d",&systolic);
printf("Diastolic reading:");
scanf("%d",&diastolic);
}
//Display values with clear labels//
printf("\n --- Medical Readings ---\n");
printf("Body temperature:%.1f °C\n",temperature);
printf("Heart rate:%d bpm\n",heart_rate);
printf("Blood pressure:%d/%d mmHg\n",systolic,diastolic);
	return 0;
}

