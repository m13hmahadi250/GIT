#include<stdio.h>
int main()
{
    int a = 1;
    int n;
    int i = 1;
    scanf("%d",&n);
    while(i<2)
    {
      if(a * a == n)
      {
          printf("Yes");
      }
      else
      {
          printf("No");
      }
      a++;
      i++;
    }
    return 0;
}
