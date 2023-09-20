#include<stdio.h>
#include<windows.h>

int main()
{
	int clock_t_goal,goal,a,b,c,d,e,f,g,h,i,j,k,k1,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,z1;
	void gotoxy(int x, int y)
{
    COORD c = { x, y };
    SetConsoleCursorPosition(  GetStdHandle(STD_OUTPUT_HANDLE) , c);
}
void sleep(unsigned int mseconds)
{
    clock_t_goal = mseconds + clock();
    while (goal > clock())
        ;
}

{
    int clock_t_goal;
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

        for (int i = 6 + l, j = 11; i <= 10 + z; i++, j++) // A
        {
            gotoxy(i, j);
            printf("A");
        }

        for (int i = 11 + l, j = 14; i <= 15 + z; i++, j--) // H
        {
            gotoxy(i, j);
            printf("H");
        }

        for (int i = 15 + l, j = 11; j <= 20; j++) // A
        {
            gotoxy(i, j);
            printf("A");
        }

        for (int i = 18 + l, j = 14; i <= 22 + z; i++) // D
        {
            gotoxy(i, j);
            printf("D");
        }

        for (int i = 27 + l, j = 20; j >= 10; j--) // I
        {
            gotoxy(i, j);
            printf("I");
        }

        l++, z++;
    }

    getchar();
    return 0;
}

