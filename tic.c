#include "main.h"

void loading()
{
    printf("\n");
    for(int i=0;i<8;i++)
    {
        printf("\rLoading   ");
        fflush(stdout);
        usleep(200000);
        printf("\rLoading.  ");
        fflush(stdout);
        usleep(200000);
        printf("\rLoading.. ");
        fflush(stdout);
        usleep(200000);
        printf("\rLoading...");
        fflush(stdout);
        usleep(200000);
    }
    printf("\rLoading Complete!      \n");
}

void showHeader(char p1[], char p2[])
{
    printf(CYAN"=====================================\n");
    printf("            TIC TAC TOE\n");
    printf("=====================================\n"RESET);
    printf("\n");
    printf(GREEN "%s (X)" RESET, p1);
    printf("  vs  ");
    printf(RED "%s (O)\n\n" RESET, p2);
}

void printCell(char ch)
{
    if(ch == 'X')
        printf(GREEN "  X  " RESET);
    else if(ch == 'O')
        printf(RED "  O  " RESET);
    else
        printf("     ");
}

void displayBoard(char board[])
{
    printf("+-----+-----+-----+\n");
    printf("|");
    printCell(board[1]);
    printf("|");
    printCell(board[2]);
    printf("|");
    printCell(board[3]);
    printf("|\n");
    printf("+-----+-----+-----+\n");
    printf("|");
    printCell(board[4]);
    printf("|");
    printCell(board[5]);
    printf("|");
    printCell(board[6]);
    printf("|\n");
    printf("+-----+-----+-----+\n");
    printf("|");
    printCell(board[7]);
    printf("|");
    printCell(board[8]);
    printf("|");
    printCell(board[9]);
    printf("|\n");
    printf("+-----+-----+-----+\n");
}

void positionGuide()
{
    printf("\n");
    printf("Position Reference\n\n");
    printf("+---+---+---+\n");
    printf("| 1 | 2 | 3 |\n");
    printf("+---+---+---+\n");
    printf("| 4 | 5 | 6 |\n");
    printf("+---+---+---+\n");
    printf("| 7 | 8 | 9 |\n");
    printf("+---+---+---+\n");
}

int checkWinner(char b[])
{
    int win[8][3] =
    {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {1,4,7},
        {2,5,8},
        {3,6,9},
        {1,5,9},
        {3,5,7}
    };
    for(int i=0;i<8;i++)
    {
        int a = win[i][0];
        int c = win[i][1];
        int d = win[i][2];
        if(b[a] != ' ' &&
           b[a] == b[c] &&
           b[c] == b[d])
        {
            return 1;
        }
    }
    return 0;
}


