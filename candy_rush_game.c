#include <stdio.h>

// constants
#define yellow 1
#define red 2
#define blue 3
#define purple 4
#define green 5
#define orange 6

// constants for directions to move
#define move_top 1
#define move_bottom 2
#define move_left 3
#define move_right 4

void displayBoard(int boardGame[9][9], int score)
{
    printf("col:    ");
    for (int j = 0; j < 9; j++)
    {
        printf("%d ", j);
    }
    printf("\n");
    printf("        ");
    for (int j = 0; j < 9; j++)
    {
        printf("_ ");
    }
    printf("\n");
    for (int i = 0; i < 9; i++)
    {
        printf("row: %d| ", i);
        for (int j = 0; j < 9; j++)
        {
            printf("%d ", boardGame[i][j]);
        }

        printf("\n");
    }

    printf("\nYour score= %d\n", score);
}

int moveByDirection(int boardGame[9][9], int x, int y, int direction, int * score) {
    if(direction == move_top) {
        int temp = boardGame[x][y];
        boardGame[x][y] = boardGame[x - 1][y];
        boardGame[x - 1][y] = temp;
    } else if(direction == move_bottom) {
        int temp = boardGame[x][y];
        boardGame[x][y] = boardGame[x + 1][y];
        boardGame[x + 1][y] = temp;
    } else if(direction == move_left) {
        int temp = boardGame[x][y];
        boardGame[x][y] = boardGame[x][y - 1];
        boardGame[x][y - 1] = temp;
    } else {
        int temp = boardGame[x][y];
        boardGame[x][y] = boardGame[x][y + 1];
        boardGame[x][y + 1] = temp;
    }

    //TODO1 check win rows/ win columns (many - many)
        //Yes -> increase score + remove win row/col + move board after remove
        //*score += 4;
        //level 1
        //level 2 -> after this move, have win rows/ win columns (many - many) else
    
    //TODO2 how to revert move
    //No -> revert move
    
    
    // Check col
    
    for ( int j = 0; j < 9; j++){
        for ( int i = 0; i < 5; i ++){
            if ( boardGame[i][j] == boardGame[i + 1][j] && boardGame[i + 1][j] == boardGame[i + 2][j] && boardGame[i + 2][j] == boardGame[i + 3][j] && boardGame[i + 3][j] == boardGame[i + 4][j]){
                * score += 5;
                break;
            } else if ( boardGame[i][j] == boardGame[i + 1][j] && boardGame[i + 1][j] == boardGame[i + 2][j] && boardGame[i + 2][j] == boardGame[i + 3][j]){
                * score += 4;
                break;
            } else if ( boardGame[i][j] == boardGame[i + 1][j] && boardGame[i + 1][j] == boardGame[i + 2][j]){
                * score += 3;
            }
        }
    }

    // Check row
    for ( int i = 0; i < 9; i++){
        for ( int j = 0; j < 5; j++){
            if ( boardGame[i][j] == boardGame[i][j + 1] && boardGame[i][j + 1] == boardGame[i][j + 2] && boardGame[i][j + 2] == boardGame[i][j + 3] && boardGame[i][j + 3] == boardGame[i][j + 4]){
                * score += 5;
                break;
            } else if ( boardGame[i][j] == boardGame[i][j + 1] && boardGame[i][j + 1] == boardGame[i][j + 2] && boardGame[i][j + 2] == boardGame[i][j + 3]){
                * score += 4;
                break;
            } else if ( boardGame[i][j] == boardGame[i][j + 1] && boardGame[i][j + 1] == boardGame[i][j + 2]){
                * score += 3;
               
            }
        }
    }
    return score;
    return 0;

}


void main()
{
    int *score = 0;

    int board[9][9] = {
        {yellow, red, blue, yellow, purple, blue, green, red, blue},
        {purple, purple, red, green, red, yellow, purple, yellow, orange},
        {orange, red, green, purple, blue, yellow, green, orange, purple},
        {red, green, green, orange, red, green, red, yellow, orange},
        {orange, blue, orange, red, green, orange, yellow, purple, orange},
        {orange, red, purple, orange, blue, green, purple, yellow, yellow},
        {yellow, purple, orange, red, yellow, red, orange, purple, red},
        {green, blue, orange, yellow, yellow, blue, purple, yellow, yellow},
        {green, green, red, blue, red, green, green, red, purple},
    };

    displayBoard(board, score);

    //game loop
    
        int x;
        printf("Input your position x = ");
        scanf("%d", &x);

        int y;
        printf("Input your position y = ");
        scanf("%d", &y);

        int direction;
        printf("Input your direction (top 1, bottom 2, left 3, right 4) = ");
        scanf("%d", &direction);

        printf("Your choice x = %d, y = %d, value = %d\n", x, y, board[x][y]);

        if(direction == move_top) {
            printf("Your direction move top\n");
        } else if(direction == move_bottom) {
            printf("Your direction move bottom\n");
        } else if(direction == move_left) {
            printf("Your direction move left\n");
        } else {
            printf("Your direction move right\n");
        }

        moveByDirection(board, x, y, direction, &score);

        printf("After your move \n");
        displayBoard(board, score);

        //how to quit game, game over or something else -> break;
        //TODO 3 quit game after 10 move   
}