#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y)
{
    COORD c = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void sleep(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock())
        ;
}

int main()
{
    for (int k = 1; k <= 30; k++)
    {
        Sleep(100);
        system("cls");

        // Animation 1: Bouncing M
        gotoxy(5, 10 + k % 11);
        printf("M");

        // Animation 2: Sliding A
        gotoxy(7 + k % 22, 11);
        printf("A");

        // Animation 3: Growing and Shrinking H
        int h_width = 3 + (k % 5);
        for (int i = 0; i < h_width; i++)
        {
            gotoxy(13 + i, 12);
            printf("H");
        }

        // Animation 4: Bouncing A
        gotoxy(14 + k % 15, 13 + k % 6);
        printf("A");

        // Animation 5: Waving D
        for (int i = 19; i <= 21; i++)
        {
            gotoxy(i, 12 + k % 3);
            printf("D");
        }

        // Animation 6: Rotating I
        int i_angle = (k % 4) * 90;
        if (i_angle == 0)
        {
            gotoxy(22, 12);
            printf("I");
        }
        else if (i_angle == 90)
        {
            gotoxy(21, 11);
            printf("I");
        }
        else if (i_angle == 180)
        {
            gotoxy(22, 10);
            printf("I");
        }
        else
        {
            gotoxy(23, 11);
            printf("I");
        }

        Sleep(500); // Pause at the end of animation
    }

    getchar();
    return 0;
}

