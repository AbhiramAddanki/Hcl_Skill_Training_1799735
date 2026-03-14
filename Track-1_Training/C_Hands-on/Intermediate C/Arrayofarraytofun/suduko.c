#include<stdio.h>
#include<stdlib.h>
int scuokuchecker(int board[9][9]){
    for(int i=0; i<9; i++){
        int row[10]={0};
        int col[10]={0};
        for(int j=0;j<9;j++){
            int num1 = board[i][j];
            int num2 = board[j][i];
            if(row[num1] || col[num2]){
                return 0;
            
            }
            row[num1] = 1;
            col[num2] = 1;
        }
    }
    return 1;
}
int main(){
    int board[9][9] = {
        {5,3,0,0,7,0,0,0,0},
        {6,0,0,1,9,5,0,0,0},
        {0,9,8,0,0,0,0,6,0},
        {8,0,0,0,6,0,0,0,3},
        {4,0,0,8,0,3,0,0,1},
        {7,0,0,0,2,0,0,0,6},
        {0,6,0,0,0,0,2,8,0},
        {0,0,0,4,1,9,0,0 ,5},
        {  0 ,  0 ,  0 ,  0 ,  8 ,  0 ,  0 ,  7 , 9 }
    };
    if(scuokuchecker(board)){
        printf("The Sudoku board is valid.\n");
    } else {
        printf("The Sudoku board is invalid.\n");
    }
     return 0;
}

