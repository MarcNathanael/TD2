//elimner tout les 0 et replacer les reste d'elements dans le tableau
/*algo pas_de_0
variable i,n,k:entiers
debut
    afficher("entrer la taille du tableau");
    lire(n);
    pour(i<--0,i< n,i<--i+1)       
        afficher("Entrer tab[",i"] = ");
        lire(tab[i]);
        si( tab[i]== 0)alors
            tab[n]<--tab[i];
            n<--n-1;
        fsi
    fpour
    pour("k<--0 , k <= i-n ,k<-- k+1")
        afficher("tab[k]");
    fpour
fin*/
// _____TSY NETY LE ALGO_____________________________________________________
#include<stdio.h>

int main()
{
    int t,n,j,i,k;
    int tab[50]={0};
    printf("Entrer la taille du tableau ");
    scanf("%d",&n);
    j=(n-1);
    t=0;
    for ( i = 0; i < n; i++)
    {
        printf("Entrer tab[%d] = ",t);
        t++;
        scanf("%d",&tab[i]);
        if( tab[i] == 0 )
        {
            tab[j]=tab[i];
            j--;
            i--;
        }
        if (i==j || i==n-1) // pour limiter la boucle car si on continue jusqu'a n il y aecrasement / l'autre est pour eviter une boucle infini cad un core dumped
        {
            break;
        }
    }
    if(j==-1)
    {
        printf("il n'y a que des 0\n");
    }
    for ( k = 0; k <(j+1); k++)
    {
        printf("tab[%d]= %d ",k,tab[k]);
    }
    
    return (0);
}