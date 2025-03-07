#include<stdio.h>
int main()
{   
    int i,n,j;
    int tab[50]={0};
    int stock[50]={0};
    printf("entrer la taille du tableau\nN= ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
        {
        printf("veillez saisir l'element %d :",i);
        scanf("%d",&tab[i]);
        }
    j=0;
    for ( i = 0; i < n; i++)
    {
        if (tab[i]!=0)
        {
            stock[j]=tab[i];
            j++; // correspond au non 0
        }   
    }
    for ( i = 0; i < j; i++)
    {
        tab[i]=stock[i];
        printf("tab[%d] = %d",i,tab[i]);
    }
    return (0);
}
    
    