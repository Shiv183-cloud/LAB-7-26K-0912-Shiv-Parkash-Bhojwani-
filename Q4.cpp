/* Task 4: Shop Sales Comparison
A shop sells 5 products across 3 branches. Read monthly sales into sales[3][5]. Print the total
sales per branch, total sales per product, the best-selling branch, and the product with the lowest
sales overall. */
#include <stdio.h>
int main() {
	int sales[3][5];
	int totalsales[3];
	int totalperprod[5];
	int i,j;
	int total =0 ;
	int temp,temp_=1,_temp_=1 ; 
	for(i=0;i<3;i++){
		for(j=0;j<5;j++) {
			printf("Enter Monthly Sales for Branch %d & Product %d ",i+1,j+1);
			scanf("%d",&sales[i][j]);
		}
	}
	for(i=0;i<3;i++) {
		total = 0;
		for(j=0;j<5;j++) {
			total = total + sales[i][j];
		}
		totalsales[i] = total ; 
	}
	for(j=0;j<5;j++) {
		total = 0;
		for(i=0;i<3;i++) {
			total = total + sales[i][j];
		}
		totalperprod[j] = total ; 
	}
	temp = totalsales[0] ;
	for(i=1;i<3;i++) {
		if(totalsales[i] > temp) {
			temp = totalsales[i];
			temp_ = i+1; // BRANCH 
		}
	}
	temp = totalperprod[0];
	for(j=1;j<5;j++){
		if(totalperprod[j] < temp) {
			temp = totalperprod[j] ;
			_temp_ = j + 1 ;
		}
	}
	for(i=0;i<3;i++) {
		printf("For Branch %d Total is %d\n",i+1,totalsales[i]);
	}
	for(j=0;j<5;j++) {
		printf("For Product %d Total is %d\n",j+1,totalperprod[j]);
	}
	printf("Best Selling Branch is! %d\n",temp_);
	printf("Lowest Selling Product is! %d",_temp_);
	
}
