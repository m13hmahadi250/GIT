
#include<stdio.h>
#include<windows.h>
#include <stdlib.h>
void gotoxy(int x,int y)
{
    printf("\033[%d;%dH", y+1,x+1);
    fflush(stdout);
}

int main()
{
    system("cls");

    int i,time=100000;

   for(i=0;i<=10;i++)
    {
        usleep(time);
    gotoxy(i,0);
    printf("-"); fflush(stdout);
    gotoxy(i,1);
    printf("-"); fflush(stdout);
    }


    usleep(time);
     gotoxy(10,2);
    printf("-"); fflush(stdout);

    usleep(time);
     gotoxy(9,2);
    printf("-"); fflush(stdout);

    usleep(time);
     gotoxy(8,2);
    printf("-"); fflush(stdout);



    usleep(time);
     gotoxy(9,3);
    printf("-"); fflush(stdout);

    usleep(time);
    gotoxy(8,3);
    printf("-"); fflush(stdout);

    usleep(time);
    gotoxy(7,3);
    printf("-"); fflush(stdout);


    usleep(time);
     gotoxy(8,4);
    printf("-"); fflush(stdout);

    usleep(time);
    gotoxy(7,4);
    printf("-"); fflush(stdout);

    usleep(time);
    gotoxy(6,4);
    printf("-"); fflush(stdout);


    usleep(time);
     gotoxy(7,5);
    printf("-"); fflush(stdout);

    usleep(time);
    gotoxy(6,5);
    printf("-"); fflush(stdout);

    usleep(time);
    gotoxy(5,5);
    printf("-"); fflush(stdout);

    usleep(time);
     gotoxy(6,6);
    printf("-"); fflush(stdout);

    usleep(time);
    gotoxy(5,6);
    printf("-"); fflush(stdout);

    usleep(time);
    gotoxy(4,6);
    printf("-"); fflush(stdout);

    usleep(time);
     gotoxy(5,7);
    printf("-"); fflush(stdout);

    usleep(time);
    gotoxy(4,7);
    printf("-"); fflush(stdout);

    usleep(time);
    gotoxy(3,7);
    printf("-"); fflush(stdout);

    usleep(time);
     gotoxy(4,8);
    printf("-"); fflush(stdout);

    usleep(time);
    gotoxy(3,8);
    printf("-"); fflush(stdout);

    usleep(time);
    gotoxy(2,8);
    printf("-"); fflush(stdout);

    usleep(time);
     gotoxy(3,9);
    printf("-"); fflush(stdout);

    usleep(time);
    gotoxy(2,9);
    printf("-"); fflush(stdout);

    usleep(time);
    gotoxy(1,9);
    printf("-"); fflush(stdout);

    usleep(time);
     gotoxy(2,10);
    printf("-"); fflush(stdout);

    usleep(time);
    gotoxy(1,10);
    printf("-"); fflush(stdout);

    usleep(time);
    gotoxy(0,10);
    printf("-"); fflush(stdout);

    for(i=0;i<=10;i++)
    {
        usleep(time);
    gotoxy(i,11);
    printf("-"); fflush(stdout);
    gotoxy(i,12);
    printf("-"); fflush(stdout);
    }















    getchar();
    return 0;
}
