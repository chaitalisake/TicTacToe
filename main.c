#include "main.h"

int main()
{
    char player1[50];
    char player2[50];
    int start;

    printf(CYAN"=====================================\n");
    printf("          TIC TAC TOE GAME\n");
    printf("=====================================\n"RESET);
    printf("\nPress 1 to Start Game : ");
    scanf("%d",&start);
    if(start != 1)
    {
        printf("Game Closed.\n");
        return 0;
    }
    loading();
    printf("\nEnter Player 1 Name (X): ");
    scanf("%s",player1);
    printf("Enter Player 2 Name (O): ");
    scanf("%s",player2);
 
    printf(CYAN"\n=====================================\n");
    printf("          PLAYERS REGISTERED\n");
    printf("=====================================\n"RESET);

    printf(GREEN "X -> %s\n" RESET, player1);
    printf(RED   "O -> %s\n" RESET, player2);
    sleep(2);
    positionGuide();
    printf("\nPress Enter To Continue...");
    getchar();
    getchar();
    char board[10];
    for(int i = 1; i <= 9; i++)
    {
        board[i] = ' ';
    }
    int turn = 0;
    int pos;
    while(turn < 9)
    {
        system("clear");
        showHeader(player1, player2);
        displayBoard(board);
        char mark;
        char *currentPlayer;
        if(turn % 2 == 0)
        {
            mark = 'X';
            currentPlayer = player1;
        }
        else
        {
            mark = 'O';
            currentPlayer = player2;
        }
        printf("\n%s's Turn (%c)\n", currentPlayer, mark);
        printf("Enter Position (1-9): ");
        scanf("%d",&pos);
        if(pos < 1 || pos > 9)
        {
            printf("\nInvalid Position!");
            sleep(1);
            continue;
        }
        if(board[pos] != ' ')
        {
            printf("\nCell Already Occupied!");
            sleep(1);
            continue;
        }
        board[pos] = mark;
        if(checkWinner(board))
        {
            system("clear");
            showHeader(player1, player2);
            displayBoard(board);
            printf("\n");
            printf(YELLOW"<><><><><><><><><><><><><><><><><><><><>\n");
            printf("         %s WINS !!!\n", currentPlayer);
            printf("<><><><><><><><><><><><><><><><><><><><>\n"RESET);

            return 0;
        }
        turn++;
    }
    system("clear");
    showHeader(player1, player2);
    displayBoard(board);
    printf("\n");
    printf(YELLOW"<><><><><><><><><><><><><><><><><><><><>\n");
    printf("           MATCH DRAW\n");
    printf("<><><><><><><><><><><><><><><><><><><><>\n"RESET);

    return 0;
}
