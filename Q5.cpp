/* Task 5: Hotel Room Occupancy Grid
A hotel has 4 floors with 6 rooms each, stored in rooms[4][6]. Read 1 for occupied and 0 for
vacant. Find the floor with the most vacancies. Then check whether any floor has 3 or more
consecutive vacant rooms, and print the floor and the starting room number. */
#include <stdio.h>
int main() {
	int rooms[4][6];
	int i,j,vac=0 ;
	int count=0,floor,start;
	for(i=0;i<4;i++) {
		for(j=0;j<6;j++) {
			printf("For Floor %d & Room %d Enter (1-Occupied) (0-Vacant): ",i,j);
			scanf("%d",&rooms[i][j]);
		}
	}
	int max = 0 ;
	for(i=0;i<4;i++) {
		vac = 0;
		for(j=0;j<6;j++) {
			if(rooms[i][j] == 0) {
				vac++;
			}
		}
		if(vac>max) {
			max = vac ;
			floor = i ; 
		}
	}
	printf("The Floor with Highest Number of Vacant Rooms is! %d\n",floor);
	for(i=0;i<4;i++) {
		count = 0 ;
		for(j=0;j<6;j++) {
			if(rooms[i][j] == 0) {
				if(count == 0 ) {
					start = j ;
					count++;
				}
				else{
					count++;
				}
			}
			else{
				count = 0 ;
			}
			
		}
		if(count>=3) {
			printf("The Starting Room Number is! %d at Floor Number! %d\n",start,i);
		}
	}
	
}
