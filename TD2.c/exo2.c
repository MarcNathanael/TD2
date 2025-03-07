
#include<stdio.h>

int main()
{
    int i,n,j,max;
    int position[50]={0};
    int tab[50]={0};
    printf("Entrer la taille du tableau ");
    scanf("%d",&n);
    max=tab[0];
    for ( i = 1; i < n; i++)
    {
        printf("Entrer tab[%d] = ",i);
        scanf("%d",&tab[i]);
            if(max<=tab[i])
            {
                max=tab[i];  
            }   
    }for ( i = 0; i < n; i++)
    {
        if (tab[i]==max)
        {
            position[j]=i;
            j++;
        } 
    }

    printf("le nombre max est %d\n ",max);
    printf("max se trouvent dans :\n");
    for ( i = 0; i < j; i++)
    {
        printf("tab[%d],",position[i]);
    }
    return (0);
}