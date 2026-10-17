/* TASK 1: CINEMA SEAT BOOKING
A cinema hall has 5 rows and 8 seats per row. Seats are stored in seats[5][8] (0 = empty, 1 =
booked). Read the booking status of every seat, then print the seating map using . for empty and
X for booked. Also report how many seats are free in each row and in total. */

#include <stdio.h>
	int main() {
	int seats[5][8] ;
	int i,j;
	int freerow=0,freetotal=0;
	for(i=0;i<5;i++) {
		for(j=0;j<8;j++) {
			printf("Enter Booking Status (0-empty) (1-booked) for Row %d & Col %d: ",i+1,j+1);
			scanf("%d",&seats[i][j]);
		}
	}
	for(i=0;i<5;i++) {
		for(j=0;j<8;j++) {
			if(seats[i][j] == 0) {
				printf(". ");
			}
			else if (seats[i][j] == 1) {
				printf("X ");
			}
		}
		printf("\n");
	}

	for(i=0;i<5;i++) {
		freerow = 0;
		for(j=0;j<8;j++){
			if(seats[i][j] == 0) {
				freerow++;
				freetotal++;
			}
			
		}
		printf("Number of Free Seats in Row %d are: %d\n",i+1,freerow);
	}
	printf("Total Number of Free Seats are! %d",freetotal);
	return 0 ;
}
