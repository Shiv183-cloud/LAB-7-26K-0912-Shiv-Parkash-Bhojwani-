/* Task 7: University Result System
A university has 3 departments, 4 students per department, and 5 subjects each, stored in
marks[3][4][5]. Print every student’s average, the topper of each department, and the
department with the highest overall average. Mark any student with a subject below 40 as
“FAIL”. */ 
#include <stdio.h>
int main() {
	int marks[3][4][5];
	int i,j,k,total=0,highest;
	float avg,max=0.0 ; 
	for(i=0;i<3;i++) {
		for(j=0;j<4;j++) {
			for(k=0;k<5;k++) {
				printf("Enter Marks for Department %d & Student %d & Subject %d ",i+1,j+1,k+1);
				scanf("%d",&marks[i][j][k]);
			} 
		}
	}
	float avgtotal;
	int highestavg ;
	float maxavg=0.0 ;
	float avg_ ;
	for(i=0;i<3;i++) {
		max = 0.0 ;
		avgtotal = 0;
		for(j=0;j<4;j++) {
			total = 0 ;
			for(k=0;k<5;k++) {
				total = total + marks[i][j][k] ;
				if(marks[i][j][k] < 40) {
					printf("Student %d of Department %d have failed in Subject %d \n",j+1,i+1,k+1);
				} 
			} 
			avg = total/5.0;
			printf("Average of Student %d in Department %d is! %.2f\n",j+1,i+1,avg);
			avgtotal = avgtotal + avg;
			if(avg>max) {
				max = avg ;
				highest = j ;
			}
		}
		printf("Student %d has performed the best in Department %d! \n",highest+1,i+1);
		avg_ = avgtotal/4.0;
		if(avg_>maxavg) {
			maxavg = avg_;
			highestavg = i ;
			
		}
	
	}
	printf("The Department with Highest Average is! %d ",highestavg+1);
	return 0 ; 
}
