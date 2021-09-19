#include <stdio.h>
int checkTicTacToeBoard(int array[3][3]);

int main()
{
    //ex1
    int array[3][3] = {
        {0, 0, 1} ,
        {0, 1, 0} ,
        {0, 0, 0}
    };
    char * result0 = "wrong";
    int tictac = checkTicTacToeBoard(array);
    printf("Result is %d and %s\n", tictac, result0);
    //ex2
    int array1[3][3] = {
        {1, 2, 2} ,
        {1, 2, 2} ,
        {0, 0, 0}
    };
    int tictac1 = checkTicTacToeBoard(array1);
    printf("Result is %d and wrong\n", tictac1);
    return 0;
}

int checkTicTacToeBoard(int array[3][3]){
    int check = 0;
    int num1 = 0, num2 = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (array[i][j] == 1){
                num1 += 1;
            }else if (array[i][j] == 2){
                num2 += 1;
            }
        }
    }
    int sum = num1 + num2;
    if (sum % 2 == 0 && num1 != num2){
        return check;
    } else if (sum % 2 != 0 && num1 < num2){
        return check;
    } else if (sum % 2 != 0 && num1 > num2){
        check = 1;
    }
}

