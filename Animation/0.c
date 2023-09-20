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
  l=0,z=0;
 for(k=1;k<=20;k++)
  {
  	Sleep(100);
  	system("cls");
      for(i=5+l,j=20;j>=10;j--)//a=5,a1=20
      {
      //	Sleep(t);
     // system("cls");
      	gotoxy(i,j);
      	printf("M");
	  }
	  for(i=6+l,j=11;i<=10+z;i++,j++)//b=6,b1=11
	  {
	  //	Sleep (t);
	  //system ("cls");
	  	gotoxy(i,j);
	  	printf("M");
	  }
	  for(i=11+l,j=14;i<=15+z;i++,j--)//c=11,c1=14
	  {
    //	Sleep(t);
    //	system("cls);
        gotoxy(i,j);
        printf("M");
	  }
	  for(i=15+l,j=11;j<=20;j++)//d=15,d1=11
	  {
	  //	Sleep(t);
	  	//system("cls");
	  	gotoxy(i,j);
	  	printf("M");
	  }
	  ///M
       for(i=17+l,j=20;j>=15;j--)//e=17,e1=20
       {
       //	 Sleep(t);
       	 //system("cls");
       	 gotoxy(i,j);
       	 printf("A");
	   }
	   for(i=18+l,j=13;i<=21+z;i++,j--)//f=18
	   {
	   	// Sleep(t);
	   	 //system("cls");
	   	 gotoxy(i,j);
	   	 printf("A");
	   }
	   for(i=22+l,j=11;i<=25+z;i++,j++)//g=22
	   {
	   	// Sleep(t);
	   	 //system("cls");
	   	 gotoxy(i,j);
	   	 printf("A");
	   }
	   for(i=25+l,j=15;j<=20;j++)//h=25
	   {
	   	// Sleep(t);
	   	 //system("cls");
	   	 gotoxy(i,j);
	   	 printf("A");
	   }
	   for(i=18+l,j=14;i<=24+z;i++)//k1=18
	   {
	   	//Sleep(t);
	   	//system("cls");
	   	gotoxy(i,j);
	   	printf("A");
	   }
	   ///A
	   for(i=27+l,j=20;j>=10;j--)//l=27
	   {
	   //	Sleep(t);
	   	//system("cls");
	   	gotoxy(i,j);
	   	printf("R");
	   }
	   for(i=28+l,j=10;i<=29+z;i++)//m=28
       {
	   //	Sleep(t);
	   	//system("cls");
	   	gotoxy(i,j);
	   	printf("R");
	   }
	   for(i=30+l,j=11;i<=32+z;i++,j++)//n=30
	   {
	   //	Sleep(t);
	   	//system("cls");
	   	gotoxy(i,j);
	   	printf("R");
	   }
	   for(i=33+l,j=14;j<=14;j++)//o=33
	   {
	   //	Sleep(t);
	   	//system("cls");
	   	gotoxy(i,j);
	   	printf("R");
	   }
	   for(i=32+l,j=15;i>=30+z;i--,j++)//p=32
	   {
	   //	Sleep(t);
	   	//system("cls");
	   	gotoxy(i,j);
	   	printf("D");
	   }







	   ///R
	   for(i=35+l,j=10;j<=17;j++)//r=35
	   {
	   //	Sleep(t);
	   	//system("cls");
	   	gotoxy(i,j);
	   	printf("U");
	   }
	   for(i=36+l,j=18;i<=38+z;i++,j++)//s=36
	   {
	   //	Sleep(t);
	   	//system("cls");
	   	gotoxy(i,j);
	   	printf("U");
	   }
	   for(i=39+l,j=20;i<=40+z;i++)//t=39
	   {
	   //	Sleep(t);
	   	//system("cls");
	   	gotoxy(i,j);
	   	printf("U");
	   }
	   for(i=41+l,j=19;i<=43+z;i++,j--)//u=40
	   {
	  // 	Sleep(t);
	   	//system("cls");
	   	gotoxy(i,j);
	   	printf("U");
	   }
	   for(i=43+l,j=17;j>=10;j--)//v=43
	   {
	   //	Sleep(t);
	   	//system("cls");
	   	gotoxy(i,j);
	   	printf("U");
	   }
	   ///U
	   for(i=45+l,j=20;j>=10;j--)//w=45
	   {
	   //	Sleep(t);
	   	//system("cls");
	   	gotoxy(i,j);
	   	printf("F");
	   }
	   for(i=46+l,j=10;i<=53+z;i++)//x=46
	   {
	   //	Sleep(t);
	   	//system("cls");
	   	gotoxy(i,j);
	   	printf("F");
	   }
	   for(i=46+l,j=14;i<=53+z;i++)//y=46
	   {
	   //	Sleep(t);
	   	//system("cls");
	   	gotoxy(i,j);
	   	printf("F");
	   }

	  l++,z++;
}


  getchar ();
  return 0;
}
