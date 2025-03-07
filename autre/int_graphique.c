#include<stdio.h>

void resolution_graphique(int a,int b,int c);
int main()
{
    int a,b,c;
    back:
    printf("entrer le coefficient a different de 0 :");
    scanf("%d",&a);
    if (a==0)
    {
        goto back;
    }
    printf("entrer le coefficient b :");
    scanf("%d",&b);
    printf("entrer le coefficient c :");
    scanf("%d",&c);

    resolution_graphique(a,b,c);
    return (0);
}

void resolution_graphique(int a,int b,int c)
{
    int x;
    x=(-b)/(2*a);
    
    if (a>0)
    {
        if (( (a*(x*x))+(b*x)+(c) ) > 0)
        {
            printf("l'equation %dx^2 + %dx + %d = 0 admet des solutions complexes\n",a,b,c);
        }
        else if (( (a*(x*x))+(b*x)+(c) ) < 0)
        {
            printf("l'equation %dx^2 + %dx + %d = 0 admet deux solutions reels\n",a,b,c);
        }
        else if (( (a*(x*x))+(b*x)+(c) ) == 0)
        {
            printf("l'equation %dx^2 + %dx + %d = 0 admet une solution reel unique\n",a,b,c);
        } 
    }
    else if (a<0)
    {
        if (( (a*(x*x))+(b*x)+(c) ) < 0)
        {
            printf("l'equation %dx^2 + %dx + %d = 0 admet des solutions complexes\n",a,b,c);
        }
        else if (( (a*(x*x))+(b*x)+(c) ) > 0)
        {
            printf("l'equation %dx^2 + %dx + %d = 0 admet deux solutions reels\n",a,b,c);
        }
        else if (( (a*(x*x))+(b*x)+(c) ) == 0)
        {
            printf("l'equation %dx^2 + %dx + %d = 0 admet une solution reel unique\n",a,b,c);
        }  
    }
   // return (0); voide tena tsisy return (0 fa tonga de WARNING)
}