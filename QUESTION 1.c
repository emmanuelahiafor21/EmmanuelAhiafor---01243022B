#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	   //Declare the variables//
float temperature;//in degree celsius//
int heart_rate; //in bpm//
int systolic,diastolic;
int blood_pressure;// in mmHg//

//Prompt the user to input values for body temperature//
printf("Enter your body temperature:");
scanf("%f",&temperature);

//Prompt user to input value for heart rate//
printf("Enter your heart rate:");
scanf("%d",&heart_rate);

//Prompt user to input systolic and diastolic value//
printf("Enter your systolic:");
scanf("%d",&systolic);
printf("Enter your diastolic:");
scanf("%d",&diastolic);

//Display values with clear labels//
printf("Vital readings\n");
printf("Body temperature:%f °C\n",temperature);
printf("Heart rate:%d bpm\n",heart_rate);
printf("Blood pressure:%d/%d mmHg\n",systolic,diastolic);
	return 0;
}
