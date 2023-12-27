#include<stdio.h>
int main()
{
    int number;

    while(1)
    {
        scanf("%d",&number);
        if(number==2002)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else
        {
            printf("Senha Invalida\n");
        }
    }
}
