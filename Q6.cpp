/* Task 6: Tic-Tac-Toe Winner Checker
Read a finished 3×3 board using scanf(" %c", &board[i][j]) (characters X, O, or -). Check
all rows, columns, and both diagonals, then print the winner or declare a draw. */

#include <stdio.h>
int main() {
	char board[3][3] ;
	int i ,j ,xflag=0,oflag=0 ;
	for(i=0;i<3;i++) {
		for(j=0;j<3;j++) {
			printf("Enter Your Move for Row %d & Col %d ",i,j);
			scanf(" %c",&board[i][j]);
		}
	}
	for(i=0;i<3;i++) {
		if(board[i][0] == 'X' && board[i][1] == 'X' && board[i][2] == 'X'){
				xflag = 1 ;
		}
		else if (board[i][0] == 'O' && board[i][1] == 'O' && board[i][2] == 'O') {
				oflag = 1 ;
		}
			
	}	
	for(i=0;i<3;i++) {
		if(board[0][i] == 'X' && board[1][i] == 'X' && board[2][i] == 'X'){
				xflag = 1 ;
		}
		else if (board[0][i] == 'O' && board[1][i] == 'O' && board[2][i] == 'O') {
				oflag = 1 ;
		}
			
	}	
	// Diagonals 
	if(board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X'){
		xflag = 1;
	}
	else if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') {
		oflag = 1 ;
	}
	if(board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X'){
		xflag = 1;
	}
	else if (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O') {
		oflag = 1 ;
	}
	
	if(xflag) {
		printf("Player X has won the match! ");
	}
	else if (oflag) {
		printf("Player O has won the Match! ");
	}
	else {
		printf("It's a Draw! ");
	}
					
}
 
