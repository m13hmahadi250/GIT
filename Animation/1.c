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

    ///for Z

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

    ///for A

    int x1=12,y1=12,x2=13,y2=12,x5=14,y5=12;
    for(i=0;i<=12;i++)
    {
        usleep(time);
        gotoxy(x1+i,y1-i);
        printf("-");

         usleep(time);
        gotoxy(x2+i,y2-i);
        printf("-");

        usleep(time);
        gotoxy(x5+i,y5-i);
        printf("-");
    }

    usleep(time);
    gotoxy(25,1);
    printf("-"); fflush(stdout);


    usleep(time);
    gotoxy(26,0);
    printf("-"); fflush(stdout);
    gotoxy(26,1);
    printf("-"); fflush(stdout);


    usleep(time);
    gotoxy(27,0);
    printf("-"); fflush(stdout);
    gotoxy(27,1);
    printf("-"); fflush(stdout);


    usleep(time);
    gotoxy(28,0);
    printf("-"); fflush(stdout);
    gotoxy(28,1);
    printf("-"); fflush(stdout);
    gotoxy(29,1);
    printf("-"); fflush(stdout);

    int x3=29,y3=0,x4=30,y4=0,x6=31,y6=0;
    for(i=0;i<=12;i++)
    {
        usleep(time);
        gotoxy(x3+i,y3+i);
        printf("-");

         usleep(time);
        gotoxy(x4+i,y4+i);
        printf("-");

        usleep(time);
        gotoxy(x6+i,y6+i);
        printf("-");
    }
    int i1;
    for(i1=24;i1<=31;i1++)
    {
        usleep(time);
    gotoxy(i1,5);
    printf("-"); fflush(stdout);
    }

    ///for B

    for(i=12;i>=0;i--)
    {
         usleep(time);
    gotoxy(46,i);
    printf("-"); fflush(stdout);

    }
    for(i=12;i>=0;i--)
    {
         usleep(time);
    gotoxy(47,i);
    printf("-"); fflush(stdout);

    }
    for(i=12;i>=0;i--)
    {
         usleep(time);
    gotoxy(48,i);
    printf("-"); fflush(stdout);

    }
usleep(time);
    gotoxy(49,0);
    printf("-"); fflush(stdout);
     usleep(time);
    gotoxy(50,0);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(51,0);
    printf("-"); fflush(stdout);


     usleep(time);
    gotoxy(51,1);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(52,1);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(53,1);
    printf("-"); fflush(stdout);

    usleep(time);
    gotoxy(52,2);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(53,2);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(54,2);
    printf("-"); fflush(stdout);

     usleep(time);
    gotoxy(53,3);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(54,3);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(55,3);
    printf("-"); fflush(stdout);

    usleep(time);
    gotoxy(53,4);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(54,4);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(55,4);
    printf("-"); fflush(stdout);

    usleep(time);
    gotoxy(54,5);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(53,5);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(52,5);
    printf("-"); fflush(stdout);

    usleep(time);
    gotoxy(53,6);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(52,6);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(51,6);
    printf("-"); fflush(stdout);

    usleep(time);
    gotoxy(54,7);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(53,7);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(52,7);
    printf("-"); fflush(stdout);

    usleep(time);
    gotoxy(55,8);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(54,8);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(53,8);
    printf("-"); fflush(stdout);

    usleep(time);
    gotoxy(55,9);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(54,9);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(53,9);
    printf("-"); fflush(stdout);

    usleep(time);
    gotoxy(54,10);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(53,10);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(52,10);
    printf("-"); fflush(stdout);

    usleep(time);
    gotoxy(53,11);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(52,11);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(51,11);
    printf("-"); fflush(stdout);

    usleep(time);
    gotoxy(52,12);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(51,12);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(50,12);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(49,12);
    printf("-"); fflush(stdout);

    ///for E

    for(i=0;i<=12;i++)
    {
        usleep(time);
    gotoxy(58,i);
    printf("-"); fflush(stdout);
    }

    for(i=0;i<=12;i++)
    {
        usleep(time);
    gotoxy(59,i);
    printf("-"); fflush(stdout);
    }

    for(i=0;i<=12;i++)
    {
        usleep(time);
    gotoxy(60,i);
    printf("-"); fflush(stdout);
    }

    for(i=61;i<=70;i++)
    {
        usleep(time);
    gotoxy(i,0);
    printf("-"); fflush(stdout);
    }

    for(i=61;i<=70;i++)
    {
        usleep(time);
    gotoxy(i,1);
    printf("-"); fflush(stdout);
    }

    for(i=61;i<=70;i++)
    {
        usleep(time);
    gotoxy(i,2);
    printf("-"); fflush(stdout);
    }

    for(i=61;i<=70;i++)
    {
        usleep(time);
    gotoxy(i,10);
    printf("-"); fflush(stdout);
    }

    for(i=61;i<=70;i++)
    {
        usleep(time);
    gotoxy(i,11);
    printf("-"); fflush(stdout);
    }

    for(i=61;i<=70;i++)
    {
        usleep(time);
    gotoxy(i,12);
    printf("-"); fflush(stdout);
    }

    for(i=61;i<=67;i++)
    {
        usleep(time);
    gotoxy(i,5);
    printf("-"); fflush(stdout);
    }

    for(i=61;i<=67;i++)
    {
        usleep(time);
    gotoxy(i,6);
    printf("-"); fflush(stdout);
    }
for(i=61;i<=67;i++)
    {
        usleep(time);
    gotoxy(i,7);
    printf("-"); fflush(stdout);
    }

    ///for D


     for(i=0;i<=12;i++)
    {
        usleep(time);
    gotoxy(73,i);
    printf("-"); fflush(stdout);
    }

    for(i=0;i<=12;i++)
    {
        usleep(time);
    gotoxy(74,i);
    printf("-"); fflush(stdout);
    }

    for(i=0;i<=12;i++)
    {
        usleep(time);
    gotoxy(75,i);
    printf("-"); fflush(stdout);
    }

    usleep(time);
    gotoxy(76,0);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(77,0);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(78,0);
    printf("-"); fflush(stdout);

    usleep(time);
    gotoxy(77,1);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(78,1);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(79,1);
    printf("-"); fflush(stdout);

    usleep(time);
    gotoxy(78,2);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(79,2);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(80,2);
    printf("-"); fflush(stdout);

    usleep(time);
    gotoxy(79,3);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(80,3);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(81,3);
    printf("-"); fflush(stdout);

    usleep(time);
    gotoxy(80,4);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(81,4);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(82,4);
    printf("-"); fflush(stdout);

    usleep(time);
    gotoxy(80,5);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(81,5);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(82,5);
    printf("-"); fflush(stdout);

    usleep(time);
    gotoxy(80,6);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(81,6);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(82,6);
    printf("-"); fflush(stdout);

    usleep(time);
    gotoxy(80,7);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(81,7);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(82,7);
    printf("-"); fflush(stdout);

    usleep(time);
    gotoxy(80,8);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(81,8);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(82,8);
    printf("-"); fflush(stdout);

    usleep(time);
    gotoxy(79,9);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(80,9);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(81,9);
    printf("-"); fflush(stdout);

    usleep(time);
    gotoxy(78,10);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(79,10);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(80,10);
    printf("-"); fflush(stdout);

     usleep(time);
    gotoxy(77,11);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(78,11);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(79,11);
    printf("-"); fflush(stdout);

    usleep(time);
    gotoxy(76,12);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(77,12);
    printf("-"); fflush(stdout);
    usleep(time);
    gotoxy(78,12);
    printf("-"); fflush(stdout);

    system("cls");


    for(i=0;i<=50;i++)
    {

        gotoxy(i,5);
    printf("Jamil Sir er shoshur borolok"); fflush(stdout);

    usleep(time);
    gotoxy(i,5);
    printf("            "); fflush(stdout);



    }

    for(i=6;i<=15;i++)
    {
        usleep(time);
        system("cls");

         gotoxy(50,i);
    printf("Jamil Sir er shoshur borolok"); fflush(stdout);

    }

     for(i=50;i>=0;i--)
    {

        gotoxy(i,15);
    printf("Jamil Sir er shoshur borolok"); fflush(stdout);

    usleep(time);
    gotoxy(i,15);
    printf("                            "); fflush(stdout);



    }

    for(i=15;i>=6;i--)
    {
        usleep(time);
        system("cls");

         gotoxy(0,i);
    printf("Jamil Sir er shoshur borolok"); fflush(stdout);
    usleep(time);
    gotoxy(0,i);
    ///printf("                            "); fflush(stdout);

    }
gotoxy(0,12);
    printf("It took 677 lines and 4 hour and 45 minutes :)");




    getchar();
    return 0;
}
