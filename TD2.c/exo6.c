// programme qui lit deux tableaux , leurs dimension, et concatine de deux
/*
    Algo: concatine_tableau
    variable : i,j,na,nb,k,r,t : entiers
               a[100]:tableau entiers
               b[100]:tableau entiers
    Debut
        faire
            Afficher("entrer la taille du tableau A :");
            lire(na);
            Afficher("entrer une taille du tableau B inferieurs a 50 :");
            lire(nb);
        tant que( (na<1 || na>100) && (nb<1 || nb>(na/2)));  // repetition a chaque de passements de borne
        
        pour ( i<-- 0; i < na; i<--i+1)
        
            Afficher("entrer A[",i,"]=");
            lire(a[i]);
        fin pour

        Afficher("\n");
        pour ( j<-- 0; j < nb; j<--j+1)
        
            Afficher("entrer B[",j,"]=");
            lire(b[j]);
        fin pour

        r=0;
        pour ( k<-- na; k < (na+nb); k<--k+1)
        
            a[k]=b[r];
            r<--r+1;
        fin pour

        pour ( t<-- 0; t < (na+nb); t<--t+1)
        
            Afficher("A[",t,"] =",a[t],);
            
        fin pour
    Fin

*/
#include<stdio.h>
int main()
{
    int i,j,na,nb,k,r,t;
    int a[100];
    int b[100];
    do{
    printf("entrer la taille du tableau A :");
    scanf("%d",&na);
    printf("entrer une taille du tableau B inferieurs a 50 :");
    scanf("%d",&nb);
    }while( (na<1 || na>100) && (nb<1 || nb>(na/2)));  // vo midepasse an reo borne reo de tmiverina manontany
    
    for ( i = 0; i < na; i++)
    {
        printf("entrer A[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("\n");
     for ( j = 0; j < nb; j++)
    {
        printf("entrer B[%d]=",j);
        scanf("%d",&b[j]);
    }
    r=0;
    for ( k = na; k < (na+nb); k++)
    {
         a[k]=b[r];
         r++;
    }
    for ( t = 0; t < (na+nb); t++)
    {
        printf("A[%d] = %d , ",t,a[t]);
        
    }
    return (0);

}