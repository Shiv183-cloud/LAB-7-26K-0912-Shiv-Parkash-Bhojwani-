/* Task 8: Warehouse Inventory
A warehouse has 3 buildings, 4 shelves per building, and 5 slots per shelf, stored in
stock[3][4][5]. Each element is the number of items in that slot. Print the total stock per
building, find the single fullest shelf and report its building and shelf number, and list every slot
with fewer than 5 items as “needs restock” along with its [building][shelf][slot] position. */
#include <stdio.h>
int main() {
	int stock[3][4][5];
	int i,j,k,total;   
	int max=0,highest;
	for(i=0;i<3;i++) {
		for(j=0;j<4;j++) {
			for(k=0;k<5;k++) {
				printf("Enter Number of Items for Building %d & Shelf %d & Slot %d: ",i,j,k);
				scanf("%d",&stock[i][j][k]);
			}
		}
	}
	int _high;
	int shelftotal;
	max = 0 ;
	for(i=0;i<3;i++) {
		total = 0;
		for(j=0;j<4;j++) {
			shelftotal = 0;
			for(k=0;k<5;k++) {
				total = total + stock[i][j][k] ;
				shelftotal = shelftotal + stock[i][j][k];
				if(stock[i][j][k] < 5){
					printf("Needs Restock! in Bulding %d & Shelf %d & Slot %d \n",i,j,k);
				}
			}
			if(shelftotal>max) {
				max = shelftotal;
				highest = j ; // SHELF NUMBER 
				_high = i ; // BUILDING 
			}
			
		}
		
		printf("Total Stock In Building %d is! %d \n",i,total);
		 
	} 
	printf("Fullest Shelf Building Number is! %d & Shelf Number is! %d\n",_high,highest); 
	return 0 ; 
}
 



