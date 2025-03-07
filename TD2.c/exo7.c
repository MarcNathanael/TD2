/*
    Algo produit_scalaire
    variable i,j:entiers;
             u[2],v[2]:tableau_entiers;
             t[2]:tableau_caractere;
    debut
        t[2]={'x','y'};
        j=1;
        Afficher("entrer les coordonnes du vecteur U");
        pour(i<--0 ; i <2 ;i<--i+1)
            afficher("u",t[i],"=")
            lire(u[i]);
        finpour

        Afficher("entrer les coordonnes du vecteur v");
        pour(i<--0 ; i <2 ;i<--i+1)
            afficher("v",t[i],"=")
            lire(v[i]);
        finpour

        p= (u[0]*v[0]) + (u[1]*v[1]);
        Afficher("le produit scalaire de u et v est",p);    
*/
#include<stdio.h>
int main()
{
    int i,j,p;
    int u[2],v[2];
    char t[2]={'x','y'};
    j=1;
    printf("Entrer les coordonnes du vecteur U\n");
    for(i=0 ; i < 2 ;i++)
    {
        printf("u%c = ",t[i]);
        scanf("%d",&u[i]);
    }
    printf("\n");
    printf("Entrer les coordonnes du vecteur v\n");
    for(i=0 ; i < 2 ;i++)
    {
        printf("v%c = ",t[i]);
        scanf("%d",&v[i]);
    }
    p= (u[0]*v[0]) + (u[1]*v[1]);
    printf("\n");
    printf("le produit scalaire de u et v est P = %d\n",p);    

    return (0);
}