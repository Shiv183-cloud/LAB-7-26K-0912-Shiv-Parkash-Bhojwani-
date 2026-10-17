/* Task 09: Library Book Catalog
A library shelf holds 5 books. Read each title (with spaces) using the scanset scanf(" %[^\n]",
titles[i]) into char titles[5][50], and read its number of copies into an int. Then:
1. Print the catalog as a neat table.
2. Count the vowels in each title using nested loops.
3. Let the user enter a single letter, then show which titles start with that letter.
4. Print the title with the most copies. */

#include <stdio.h>
int main() {
	char titles[5][50],ch;
	int copies[5];
	int i,j,vowelc = 0,highest,max = 0;
	for(i=0;i<5;i++) {
		printf("Enter Title for Book Number %d: ",i+1);
		scanf(" %[^\n]",&titles[i]);
		printf("Enter Copies for this Book %d: ",i+1);
		scanf("%d",&copies[i]);
	}
	printf("----------------------------------------\n");
	printf("--------WELCOME TO FAST NUCES LIBRARY--------\n");

	for(i=0;i<5;i++) {
		printf("Name of Book is! %s & Number of Copies are %d \n",titles[i],copies[i]);
	}
	printf("----------------------------------------\n");
	for(i=0;i<5;i++) {
		vowelc = 0 ;
		for(j=0;titles[i][j]!='\0';j++) {
			ch = titles[i][j] ;
			if(ch=='A' || ch == 'a'|| ch=='E' || ch == 'e' || ch=='I' || ch == 'i' || ch=='O' || ch == 'o'|| ch=='U' || ch == 'u') {
				vowelc++;				
			}	
		
		}
		printf("There are %d Vowels in Title: %s\n",vowelc,titles[i]);
	}
	printf("Enter Character of the Book You are Trying to Find: ");
	scanf(" %c",&ch);
	for(i=0;i<5;i++) {
		if(ch == titles[i][0]) {
			printf("The Title of Book Starting with Character %c is: %s\n",ch,titles[i]);
		}
	}
	for(i=0;i<5;i++) {
		if(copies[i] > max) {
			max = copies[i];
			highest = i ;
		}
	}
	printf("The Book with Highest Number of Copies is: %s\n",titles[highest]);
}
