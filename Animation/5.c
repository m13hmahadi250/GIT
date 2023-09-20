#include<stdio.h>
#include<windows.h>

void gotoxy(int x, int y)
{
    COORD c = { x, y };
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
    int l = 0, z = 0;

    for (int k = 1; k <= 20; k++)
    {
        Sleep(100);
        system("cls");

        for (int i = 5 + l, j = 20; j >= 10; j--) // M
        {
            gotoxy(i, j);
            printf("M");
        }

        for (int i = 7 + l, j = 11; i <= 11 + z; i++) // A
        {
            gotoxy(i, j);
            printf("A");
        }

        gotoxy(13 + z, 12); // H
        printf("H");

        for (int i = 14 + z, j = 13; i <= 18 + z; i++) // A
        {
            gotoxy(i, j);
            printf("A");
        }

        gotoxy(19 + z, 12); // D
        printf("D");

        gotoxy(21 + z, 12); // I
        printf("I");

        l++, z++;
    }

    getchar();
    return 0;
}

