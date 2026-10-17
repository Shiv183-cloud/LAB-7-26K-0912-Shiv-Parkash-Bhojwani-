/* Task 3: Weekly Temperature Report
A weather station records the temperature at 4 times of day (morning, noon, evening, night) for 7
days in temp[7][4]. Find the hottest and coldest readings with their day and time slot, and list
the days where the noon temperature was above the weekly noon average. */
#include <stdio.h>
int main() {
	float temp[7][4] ;
	int i,j;
	float max=-100000000.0 ,min=100000000.0,noonavg,noontotal=0.0;
	int minday,minslot,maxday,maxslot;
	for(i=0;i<7;i++) {
		for(j=0;j<4;j++) {
			printf("Enter Temperature Reading For Day: %d & Time Slot: %d ",i+1,j+1);
			scanf("%f",&temp[i][j]);	
		}
	}
	
	for(i=0;i<7;i++) {
		for(j=0;j<4;j++) {
			if(temp[i][j]> max) {
				max = temp[i][j];
				maxday = i+1 ;
				maxslot = j+1 ;
				
			}
			if (temp[i][j] < min) {
				min = temp[i][j];
				minday = i+1 ;
				minslot = j+1 ;
			}
			if(j==1) {
				noontotal = noontotal + temp[i][j];
			}
		}
	}
	printf("The Maximum Value is %.2f Occured at Day! %d & Slot was %d (1-Morning 2-Noon 3-Evening 4-Night) \n",max,maxday,maxslot);
	printf("The Minimum Value is %.2f Occured at Day! %d & Slot was %d (1-Morning 2-Noon 3-Evening 4-Night) \n",min,minday,minslot);
	noonavg = noontotal/7.0 ;
	for(i=0;i<7;i++) {
		if(temp[i][1] > noonavg) {
			printf("At Day %d Temperature is Greater than the Average Around 7 Days\n",i+1);
		}
	}
}
