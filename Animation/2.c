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
      for(i=5+l,j=20;j>=10;j--)
      {
      //	Sleep(t);
     // system("cls");
      	gotoxy(i,j);
      	printf("M");
	  }
	  for(i=6+l,j=11;i<=10+z;i++,j++)
	  {
	  //	Sleep (t);
	  //system ("cls");
	  	gotoxy(i,j);
	  	printf("M");
	  }
	  for(i=11+l,j=14;i<=15+z;i++,j--)
	  {
    //	Sleep(t);
    //	system("cls);
        gotoxy(i,j);
        printf("M");
	  }
	  for(i=15+l,j=11;j<=20;j++)
	  {
	  //	Sleep(t);
	  	//system("cls");
	  	gotoxy(i,j);
	  	printf("M");
	  }
	  ///M
       for(i=17+l,j=20;j>=15;j--)
       {
       //	 Sleep(t);
       	 //system("cls");
       	 gotoxy(i,j);
       	 printf("A");
	   }
	   for(i=18+l,j=13;i<=21+z;i++,j--)
	   {
	   	// Sleep(t);
	   	 //system("cls");
	   	 gotoxy(i,j);
	   	 printf("A");
	   }
	   for(i=22+l,j=11;i<=25+z;i++,j++)
	   {
	   	// Sleep(t);
	   	 //system("cls");
	   	 gotoxy(i,j);
	   	 printf("A");
	   }
	   for(i=25+l,j=15;j<=20;j++)
	   {
	   	// Sleep(t);
	   	 //system("cls");
	   	 gotoxy(i,j);
	   	 printf("A");
	   }
	   for(i=18+l,j=14;i<=24+z;i++)
	   {
	   	//Sleep(t);
	   	//system("cls");
	   	gotoxy(i,j);
	   	printf("A");
	   }
	   ///A
	   for(i=27+l,j=20;j>=10;j--)
	   {
	   //	Sleep(t);
	   	//system("cls");
	   	gotoxy(i,j);
	   	printf("H");
	   }
	    for(i=37+l,j=20;j>=10;j--)
	   {
	   //	Sleep(t);
	   	//system("cls");
	   	gotoxy(i,j);
	   	printf("H");
	   }
	    for(i=27+l,j=14;i<=36+z;i++)
	   {
	   //	Sleep(t);
	   	//system("cls");
	   	gotoxy(i,j);
	   	printf("H");
	   }
	   for(i=39+l,j=20;j>=14;j--)
       {
       //	 Sleep(t);
       	 //system("cls");
       	 gotoxy(i,j);
       	 printf("A");
	   }
	  for(i=40+l,j=13;i<=43+z;i++,j--)
	   {
	   	// Sleep(t);
	   	 //system("cls");
	   	 gotoxy(i,j);
	   	 printf("A");
	   }
	   for(i=44+l,j=11;i<=47+z;i++,j++)
	   {
	   	// Sleep(t);
	   	 //system("cls");
	   	 gotoxy(i,j);
	   	 printf("A");
	   }
	   for(i=47+l,j=15;j<=20;j++)
	   {
	   	// Sleep(t);
	   	 //system("cls");
	   	 gotoxy(i,j);
	   	 printf("A");
	   }
	   for(i=40+l,j=14;i<=46+z;i++)
	   {
	   	//Sleep(t);
	   	//system("cls");
	   	gotoxy(i,j);
	   	printf("A");
	   }
	   ///A
	   for(i=49+l,j=20;j>=10;j--)
	   {
	   //	Sleep(t);
	   	//system("cls");
	   	gotoxy(i,j);
	   	printf("D");
	   }
	   for(i=53+l,j=16;j<1+z;j++,i--)
	   {
	   //	Sleep(t);
	   	//system("cls");
	   	gotoxy(i,j);
	   	printf("D");
	   }
	   for(i=49+l,j=9;j<=0 + z - 4 ;i++,j++)
	   {
	   //	Sleep(t);
	   	//system("cls");
	   	gotoxy(i,j);
	   	printf("D");
	   }
	  /* for(i=53+l,j=14;j<17+z;j++)
	   {
	   //	Sleep(t);
	   	//system("cls");
	   	gotoxy(i,j);
	   	printf("D");
	   }

*/







	   for(i=59+l,j=20;j>=10;j--)
      {
      //	Sleep(t);
     // system("cls");
      	gotoxy(i,j);
      	printf("0 ");
	  }

	  l++,z++;
}


  getchar ();
  return 0;
}
