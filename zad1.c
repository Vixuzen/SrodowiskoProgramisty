#include<stdio.h>

int n,h,x;

int main()
{
    printf("Podaj liczbę n.\n");
    scanf("%d",&n);
    while(h<n)
    {
        while(x<=h)
        {
            printf("*");
            x+=1;
        }
    h+=1;
    printf("\n");
    x=0;
    }
    return 0;
}
