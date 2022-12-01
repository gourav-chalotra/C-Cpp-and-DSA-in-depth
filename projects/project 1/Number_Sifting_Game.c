#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <conio.h>
#include <stdlib.h>
int Arr[4][4] = {0}, moves = 200;
void resetMatrix()
{
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            Arr[i][j] = 0;
        }
    }
}
int check(int value)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (Arr[i][j] == value)
            {
                return 0;
            }
        }
    }
    return 1;
}
void display()
{
    printf("-----------------\n");
    for (int i = 0; i < 4; i++)
    {
        printf("|");
        for (int j = 0; j < 4; j++)
        {
            if (Arr[i][j] == 0)
            {
                printf("   |");
            }
            else if (Arr[i][j] >= 10)
            {
                printf(" %d|", Arr[i][j]);
            }
            else
            {
                printf(" %d |", Arr[i][j]);
            }
        }
        printf("\n");
    }
    printf("-----------------\n");
}
void randomValueGenerater()
{
    printf("Random function enter\n");
    srand(time(0));
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j)
        {
            int randValue = (rand() % (15 - 1 + 1)) + 1;
            if (check(randValue))
            {
                Arr[i][j] = randValue;
                j++;
            }
            if (i == 3 && j == 3)
            {
                break;
            }
        }
    }
}
int currentLocationColoum()
{
    int count_j = 0;
    for (int i = 0; i < 4; i++)
    {
        count_j = 0;
        for (int j = 0; j < 4; j++)
        {
            if (Arr[i][j] == 0)
            {
                return count_j;
                break;
            }
            count_j++;
        }
    }
}
int currentLocationRow()
{
    int count_r = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (Arr[i][j] == 0)
            {
                return count_r;
            }
        }
        count_r++;
    }
}
void Loading()
{
    int gap = 90;
    printf("\n\n\t\t      Loading...\n\t\t");
    for (int i = 0; i < 19; i++)
    {
        printf("%c", 254);
        Sleep(gap);
    }
    system("cls");
}
int StartOrExt()
{
    int check = 1, enterOrNot = 0; // enterOrNot --> Enter Or Not
    char arrowsValue;
    while (arrowsValue != 13)
    {
        printf("\n\n\t\t      --------Menu--------\n");
        if (check)
        {
            printf("> START\n");
            printf("  EXIT");
            arrowsValue = getch();
        }
        else if (check == 0)
        {
            fflush(stdin); // TODO checking
            printf("  START\n");
            printf("> EXIT");
            arrowsValue = getch();
        }
        switch (arrowsValue)
        {
        case 72:
            check = 1;
            break;
        case 80:
            check = 0;
            break;
        case 13:
            system("cls");
            enterOrNot = 1;
            break;
        }
        system("cls");
        if (enterOrNot)
        {
            return check;
        }
    }
}
void Rules()
{

    printf("\n\t\t\tRULE OF THIS GAME\n\n");
    printf("1. You can move only 1 setp at a time by arrow key\n\tMove Up   : by Up arrow key\n\tMove Down   : by Down arrow key\n\tMove Left   : by Left arrow key\n\tMove Right   : by Right arrow key\n");
    printf("\n-------------------------\n|  11 |  6  |  9  |  13 |\n|  8  |  10 |  7  |  8  |\n|  9  | 12  |  1  | 14  |\n|  4  |  3  |  5  |     |\n-------------------------\n");
    printf("\n2. You have to convert this random matrix to matrix which looks like this\n");
    printf("\n-------------------------\n|  1  |  2  |  3  |  4  |\n|  5  |  6  |  7  |  8  |\n|  9  | 10  | 11  | 12  |\n| 13  | 14  | 15  |     |\n-------------------------\n");
    printf("\n\t\tWINNING SITUATION\n\nNumber in a 4*4 matrix should be in order from 1 to 15");
    printf("\n-------------------------\n|  1  |  2  |  3  |  4  |\n|  5  |  6  |  7  |  8  |\n|  9  | 10  | 11  | 12  |\n| 13  | 14  | 15  |     |\n-------------------------\n");
    printf("\n\n Enter Any key to START the game");
    getchar();
}
int win_win_situation()
{
    int Arr2[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 0}};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (Arr[i][j] != Arr2[i][j])
            {
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
    // Start Loading on the screen
    Loading();
    system("cls");
    int PlayerMood;
    // Menu bar to asking for START the game or EXIT the Game!
    PlayerMood = StartOrExt();
    if (PlayerMood) // Player want to play
    {
        // Taking Player name and Display the rules of the GAME
        Rules();
        system("cls");
        char PlayerName[30];
        printf("Enter Player name: ");
        fgets(PlayerName, 30, stdin);
        system("cls");
        char playAgain = 121;
        while (1)
        {
            printf("Play again value: %d\n", playAgain);
            if (playAgain == 121)
            {
                printf("enter Play\n");
                moves = 200;
            }
            else
            {
                return 0;
            }
            printf("Win\n");
            int win = 0;
            randomValueGenerater();
            printf("Cameback %d\n", moves);
            while (moves)
            {
                system("cls");
                // Printing remaning moves and Name of the player
                printf("Remaning moves: %d        Player Name: %s \n\n\n", moves, PlayerName);
                display();
                int coloum_C_location = currentLocationColoum(), rowns_C_location = currentLocationRow();
                printf("\n\nMake your move: ");
                char Movement;
                Movement = getch();
                switch (Movement)
                {
                // UP
                case 72:

                    if (rowns_C_location > 0)
                    {
                        int temp = Arr[rowns_C_location - 1][coloum_C_location];
                        Arr[rowns_C_location - 1][coloum_C_location] = Arr[rowns_C_location][coloum_C_location];
                        Arr[rowns_C_location][coloum_C_location] = temp;
                        moves--;
                    }
                    break;
                // DOWN
                case 80:
                    if (rowns_C_location < 3)
                    {
                        int temp = Arr[rowns_C_location + 1][coloum_C_location];
                        Arr[rowns_C_location + 1][coloum_C_location] = Arr[rowns_C_location][coloum_C_location];
                        Arr[rowns_C_location][coloum_C_location] = temp;
                        moves--;
                    }
                    break;
                // LEFT
                case 75:
                    if (coloum_C_location > 0)
                    {
                        int temp = Arr[rowns_C_location][coloum_C_location - 1];
                        Arr[rowns_C_location][coloum_C_location - 1] = Arr[rowns_C_location][coloum_C_location];
                        Arr[rowns_C_location][coloum_C_location] = temp;
                        moves--;
                    }
                    break;
                // RIGHT
                case 77:
                    if (coloum_C_location < 3)
                    {
                        int temp = Arr[rowns_C_location][coloum_C_location + 1];
                        Arr[rowns_C_location][coloum_C_location + 1] = Arr[rowns_C_location][coloum_C_location];
                        Arr[rowns_C_location][coloum_C_location] = temp;
                        moves--;
                    }
                    break;
                default:
                    printf("\nEnter arrows keys for movement \n");
                    break;
                }
                if (win_win_situation())
                {
                    win = 1;
                    break;
                }
                system("cls");
            }
            if (!win)
            {
                printf("\nYou LOSE the game!\n");
                resetMatrix();
            }
            else if (win)
            {
                printf("Congratulation %s your WIN the game!\n", PlayerName);
            }

            printf("\nPress 'y' to play again, or Press Any Key for EXIT the game!\n");
            scanf("%c", &playAgain);
            fflush(stdin);
            switch (playAgain)
            {
            // 121 y
            case 121:
                moves = 200;
                break;
            default:
                exit(0);
                break;
            }
        }
    }
    else // Player not want to play
    {
        printf("\n\nPress \"Any key\" to exit the GAME...\n");
        getch();
        system("cls");
        exit(0);
    }
    return 0;
}