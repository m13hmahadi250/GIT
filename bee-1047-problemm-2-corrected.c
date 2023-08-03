#include <stdio.h>

int main() {

    int sh,eh,sm,em;
    scanf("%d%d%d%d",&sh,&sm,&eh,&em);
    if(sh > eh)
    {
        if(sm > em)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",24 - sh + eh-1,60 - sm + em);
        }else if(sm < em)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",24 - sh + eh,em - sm);
        }
        else if(sm == em)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",24 - sh + eh,0);
        }
    }
    else if(sh < eh)
    {
         if(sm > em)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",eh - sh-1,60 - sm + em);
        }else if(sm < em)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",eh - sh,em - sm);
        }
        else if(sm == em)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",eh - sh,0);
        }
    }
    else if(sh == eh)
    {
         if(sm > em)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",24-1,60 - sm + em);
        }else if(sm < em)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",0,em - sm);
        }
        else if(sm == em)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",24,0);
        }
    }


    return 0;
}
