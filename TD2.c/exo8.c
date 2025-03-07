/*
    Algo : Max_MinPosition
    variable i,n,j,k,M,m : entiers
             tab[50]: tableau entiers
             min[50]: tableau entiers
             max[50]: tableau entiers
    Debut
        i<-- 0;
     faire{
        i<--i+1;
        si (i>3) // remarque a retenir
        alors
            fin;
        fin si

        Afficher("Entrer la taille du tableau : ");
        lire(n);
    tant que (n>50 || n<1);

    pour ( i <--  0; i < n; i<--i+1)
        Afficher("Entrer tab[",i,"]= ");
        lire(tab[i]); 
    fin pour

    m<-- tab[0];
    M<-- tab[0];
    pour ( i <--  1; i < n; i<--i+1)

        si (M<tab[i])
        alors
            M<-- tab[i];
        fin si
        si (m>tab[i])
        alors
            m<-- tab[i];
        fin si
    finpour
    j<-- 0;
    k<-- 0;
    pour ( i <--  0; i < n; i<--i+1)
    
        si (tab[i] ==  M)
        alors
            max[j]<-- i;
            j<--j+1;
        fin si 

        si (tab[i] == m)
        alors
            min[k]<-- i;
            k<--k+1;
        fin si

    finpour
    Afficher("le nombre max est ",M,"\n ");
    Afficher("max se trouvent dans :\n");
    pour ( i = 0; i <j; i++) // et non i<=j car j est encore incrimenter une dernier faire
    
        printf("tab[",max[i],"]\t");
    fin pour
   
    printf("\n");

    printf("le nombre min est ",m,"\n ");
    printf("min se trouvent dans :\n");
    pour ( i = 0; i <k; i++)
    {
        printf("tab[",min[i],"]\t");
    }
    
    printf("\n");
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,j,k,M,m;
    int tab[50];
    int min[25];
    int max[25];
    i=0;
     do{
        i++;
        if (i>3) // remarque a retenir
        {
            exit(0);
        }
        printf("Entrer la taille du tableau : ");
        scanf("%d",&n);
    }while(n>50 || n<1);

    for ( i = 0; i < n; i++)
    {
        printf("Entrer tab[%d] = ",i);
        scanf("%d",&tab[i]); 
    }
    m=tab[0];
    M=tab[0];
    for ( i = 1; i < n; i++)
    {
        if (M<tab[i])
        {
            M=tab[i];
        }
        if (m>tab[i])
        {
            m=tab[i];
        }
    }
    j=0;
    k=0;
    for ( i = 0; i < n; i++)
    {
        if (tab[i]==M)
        {
            max[j]=i;
            j++;
        } 
        if (tab[i]==m)
        {
            min[k]=i;
            k++;
        }
    }
    printf("le nombre max est %d\n ",M);
    printf("max se trouvent dans :\n");
    for ( i = 0; i <j; i++) // et non i<=j car j est encore incrimenter une dernier faire
    {
        printf("tab[%d]\t",max[i]);
    }
    
   
    printf("\n");

    printf("le nombre min est %d\n ",m);
    printf("min se trouvent dans :\n");
    for ( i = 0; i <k; i++)
    {
        printf("tab[%d]\t",min[i]);
    }
    
    printf("\n");

    return (0);
}