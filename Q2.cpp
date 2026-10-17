/* Task 2: Student Marks Sheet
A teacher has 6 students and 4 subjects. Read the marks into marks[6][4]. Print each student’s
total and average, each subject’s class average, and the name of the subject (by number) where
the class performed best. */
#include <stdio.h>
int main() {
	int marks[6][4] ; 
	int total=0,i,j,highest,max;
	float avg;
	for(i=0;i<6;i++) {
		for(j=0;j<4;j++){
			printf("Please Enter Marks! for Student %d & Subject %d ",i+1,j+1);
			scanf("%d",&marks[i][j]);
		}
	}
	for(i=0;i<6;i++) {
		total = 0 ;
		for(j=0;j<4;j++) {
			total = total + marks[i][j];
		}
		printf("Total of Student %d is! %d\n",i+1,total);
		printf("Average of Student %d is! %.2f\n",i+1,total/4.0);
	}
	total = 0 ;
	max = -100;
	for(j=0;j<4;j++) {
		total = 0 ;
		for(i=0;i<6;i++){
			total = total + marks[i][j];
		}
		avg = total/6.0;
		printf("Average of Entire Class in Subject %d is! %.2f\n",j+1,avg);
		if(avg>max) {
			max = avg;
			highest = j ; 
		}
		
	}
	printf("Students Performed the Best! in Subject %d",highest+1);
	return 0 ; 
}
