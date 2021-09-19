#include <stdio.h>
int checkWin(int array[3][3]);

int main()
{
    //ex 1
    int array[3][3] = {
      {1, 2, 0} ,
      {2, 1, 1} ,
      {2, 1, 1}
   };
    int exercise = checkWin(array);
    printf("%d is win\n", exercise);
    
    //ex 2
    int array1[3][3] = {
      {2, 2, 2} ,
      {1, 0, 1} ,
      {2, 1, 1}
   };
    int exercise1 = checkWin(array1);
    printf("%d is win\n", exercise1);
    
    //ex 3
    int array2[3][3] = {
      {1, 2, 1} ,
      {1, 2, 1} ,
      {2, 1, 2}
   };
    int exercise2 = checkWin(array2);
    printf("%d is win\n", exercise2);
    
    //ex 4
    int array3[3][3] = {
      {0, 2, 2} ,
      {1, 0, 1} ,
      {0, 1, 2}
   };
    int exercise3 = checkWin(array3);
    printf("%d is win\n", exercise3);
    
    //ex 5
    int array4[3][3] = {
      {0, 2, 2} ,
      {1, 2, 1} ,
      {1, 1, 2}
   };
    int exercise4 = checkWin(array4);
    printf("%d is win\n", exercise4);
    return 0;
}

int checkWin(int array[3][3]){
    int winner = 0;
    
   //Case 1
    if (array[0][0] == 1 && array[0][1] ==  1 && array[0][2] == 1){
        return 1;
    }
    if (array[1][0] == 1 && array[1][1] ==  1 && array[1][2] == 1){
        return 1;
    }
    if (array[2][0] == 1 && array[2][1] ==  1 && array[2][2] == 1){
        return 1;
    } 
    if (array[0][0] == 2 && array[1][0] ==  2 && array[2][0] == 2){
        return 2;
    }
    if (array[0][1] == 2 && array[1][1] ==  2 && array[2][1] == 2){
        return 2;
    }
    if (array[0][2] == 2 && array[1][2] ==  2 && array[2][2] == 2){
        return 2;
    }
    if (array[0][0] == 1 && array[1][1] == 1 && array[2][2] == 1){
        return 1;
    }
    if (array[0][2] == 2 && array[1][1] == 2 && array[2][0] == 2){
        return 2;
    }
    
    //Case 2
    if (array[0][0] == 2 && array[0][1] ==  2 && array[0][2] == 2){
        return 2;
    }
    if (array[1][0] == 2 && array[1][1] == 2 && array[1][2] == 2){
        return 2;
    }
    if (array[2][0] == 2 && array[2][1] == 2 && array[2][2] == 2){
        return 2;
    } 
    if (array[0][0] == 1 && array[1][0] ==  1 && array[2][0] == 1){
        return 1;
    }
    if (array[0][1] == 1 && array[1][1] ==  1 && array[2][1] == 1){
        return 1;
    }
    if (array[0][2] == 1 && array[1][2] == 1 && array[2][2] == 1){
        return 1;
    }
    if (array[0][0] == 2 && array[1][1] == 2 && array[2][2] == 2){
        return 2;
    }
    if (array[0][2] == 1 && array[1][1] == 1 && array[2][0] == 1){
        return 1;
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
        return 3;
    }
}
