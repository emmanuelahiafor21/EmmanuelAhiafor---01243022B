#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 //Declare variables//
	int systolic_bp;           
	int total_systolic_bp = 0;          
	int count = 0;            
	float average_systolic_bp;          
    
    //Display program title and instructions//
    printf("\n ---Systolic Blood Pressure Machine --- \n");
    printf("Total and Average Calculator of 4 systolic readings\n");
    //Using for loop to prompt the user for 4 systolic BP readings//
    //Loop runs 4 times (from i = 1 to i <= 4)//
    int i;
	for(i = 1; i <= 4; i++) 
	{
        //Prompt user for the user to input a value with clear labeling//
        printf("Please enter systolic BP reading #%d: ", i);
        
        //Read the entered input for this reading//
        scanf("%d", &systolic_bp);
        
        //Add the entered systolic BP reading to the running total//
        total_systolic_bp += systolic_bp;
        
        //Increment of the counter //
        count++;
    }
    
    //calculate the average systolic BP readings//    
    average_systolic_bp = (float)total_systolic_bp / count;
    
    /*Display results with  clear labels*/
    printf("\n Results:\n");
    printf("Total of 4 systolic BP readings: %d mmHg\n", total_systolic_bp);
    printf("Average of 4 systolic BP readings: %.2f mmHg\n", average_systolic_bp);

	return 0;
}

