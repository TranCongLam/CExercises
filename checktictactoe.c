#include <stdio.h>
int checkTicTacToeBoard(int array[3][3]);
int checkWin(int array[3][3]);
int main()
{
    
    //checkEx1
    int array1[3][3] = {
        {0, 0, 1} ,
        {0, 1, 0} ,
        {0, 0, 0}
    };
   
    int tictac1 = checkTicTacToeBoard(array1);
    printf("Result is %d\n", tictac1);
    int exercise1 = checkWin(array1);
    printf("Player %d is win\n", exercise1);
    
    //checkEx2
    int array2[3][3] = {
        {1, 2, 2} ,
        {1, 2, 2} ,
        {0, 0, 0}
    };
    
    int tictac2 = checkTicTacToeBoard(array2);
    printf("Result is %d\n", tictac2);
    int exercise2 = checkWin(array2);
    printf("Player %d is win\n", exercise2);
    
    //checkEx3
    int array3[3][3] = {
      {1, 2, 0} ,
      {2, 1, 1} ,
      {2, 2, 1}
   };
    
    int tictac3 = checkTicTacToeBoard(array3);
    printf("Result is %d\n", tictac3);
    int exercise3 = checkWin(array3);
    printf("Player %d is win\n", exercise3);
    return 0;
}
//CheckTicTacToeBoard
int checkTicTacToeBoard(int array[3][3]){
    int check = 0;
    int num0 =0, num1 = 0, num2 = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (array[i][j] == 1){
                num1 += 1;
            }else if (array[i][j] == 2){
                num2 += 1;
            }else{
                num0 += 1;
            }
        }
    }
    int sum = num1 + num2;
    if (sum == 9){
        check = 1;
        return check;
    }else if (sum % 2 == 0 && num1 != num2){
        return check;
    }else if (sum % 2 == 0 && num1 == num2){
        check = 1;
        return check;
    }else if (sum % 2 != 0 && num1 < num2){
        return check;
    }else if (sum % 2 != 0 && num1 > num2){
        check = 1;
        return check;
    }
}
//CheckWin
int checkWin(int array[3][3]){
    int winner = 0;
    
   //Case 1
    if (array[0][0] == 1 && array[0][1] ==  1 && array[0][2] == 1){
        winner = 1;
    }
    if (array[1][0] == 1 && array[1][1] ==  1 && array[1][2] == 1){
        winner = 1;
    }
    if (array[2][0] == 1 && array[2][1] ==  1 && array[2][2] == 1){
        winner =  1;
    } 
    if (array[0][0] == 2 && array[1][0] ==  2 && array[2][0] == 2){
        winner = 2;
    }
    if (array[0][1] == 2 && array[1][1] ==  2 && array[2][1] == 2){
        winner = 2;
    }
    if (array[0][2] == 2 && array[1][2] ==  2 && array[2][2] == 2){
        winner = 2;
    }
    if (array[0][0] == 1 && array[1][1] == 1 && array[2][2] == 1){
        winner = 1;
    }
    if (array[0][2] == 2 && array[1][1] == 2 && array[2][0] == 2){
        winner = 2;
    }
    
    //Case 2
    if (array[0][0] == 2 && array[0][1] ==  2 && array[0][2] == 2){
        winner =  2;
    }
    if (array[1][0] == 2 && array[1][1] == 2 && array[1][2] == 2){
        winner = 2;
    }
    if (array[2][0] == 2 && array[2][1] == 2 && array[2][2] == 2){
        winner = 2;
    } 
    if (array[0][0] == 1 && array[1][0] ==  1 && array[2][0] == 1){
        winner = 1;
    }
    if (array[0][1] == 1 && array[1][1] ==  1 && array[2][1] == 1){
        winner = 1;
    }
    if (array[0][2] == 1 && array[1][2] == 1 && array[2][2] == 1){
        winner = 1;
    }
    if (array[0][0] == 2 && array[1][1] == 2 && array[2][2] == 2){
        winner = 2;
    }
    if (array[0][2] == 1 && array[1][1] == 1 && array[2][0] == 1){
        winner = 1;
    }
    int num = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            //printf("i = %d, j = %d", i, j);
            if (array[i][j] == 0){
                num += 1;
                return winner;
                
            }
        }
    }
    //printf("da di het"); 
    if (num == 0){
        winner = 3; //Hòa nhau
        return winner;
    }
    return winner;
}

