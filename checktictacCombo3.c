#include <stdio.h>
int play(int player, int x, int y, int array[3][3]);

int main()
{
    int array[3][3] = {
        {0, 0, 0},
        {0, 1, 0},
        {0, 0, 0}
    };
    int tictac = checkTicTacToeBoard(array);
    printf("Check wrong or right: %d\n", tictac);
    if (tictac == 1){
        int ex = play(1, 2, 1, array);
        printf("Is correct? %d\n", ex);
        if (ex == 1){
            int exercise = checkWin(array);
            printf("Player %d is win\n", exercise);
        }
        int ex1 = play(2, 1, 1, array);
        printf("Is correct? %d\n", ex1);
        if (ex1 == 1){
            int exercise1 = checkWin(array);
            printf("Player %d is win\n", exercise1);
        }
    }
    
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
    
    if (sum % 2 == 0 && num1 != num2){
        return check;
    }else if (sum % 2 != 0 && num1 < num2){
        return check;
    }
    check = 1;
    return check;
}


//Ktra nuoc danh cua player laf dung or sai
int play(int player, int x, int y, int array[3][3]){
    int correct = 0;
    
    if (player > 2 || player < 1){
        return correct;
    }else if (array[x][y] != 0 || x > 3 || x < 0 || y > 3 || y < 0){
        return correct;
    }
    correct = 1;
    array[x][y] = player;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
                printf("%d\n", array[i][j]);
        }
        printf("\n");
    }
    return correct;
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
