// algo qui inverse le contenue d'un tableau
/*
    Algo: Inverse_tab
    variables i,a,j,nb,n,temp:entiers
              tab[50] : tableau_entiers 
    Debut
        tab[50]<--{0};
        afficher("entrer le nombre d'elements");
        lire(nb);
        n<--nb;
        pour( i<--0 ;i<n;i<-- i+1)
            
            afficher("entrer l'elements ",i);
            lire(tab[i]);
            
        fin pour
        pour(j<--0;j<--nb;j<--j+1)
            pour(a<--0;a<=n;a<--a+1)

                temp<--tab[a];
                tab[a]<--tab[a+1];
                tab[a]<--temp;
            
            fin pour
            n<--n-1;
        fin pour
    Fin
*/
#include<stdio.h>

int main()// on peut aussi faire une decrementation et prendre duex tableai
{
    int i,a,j,nb,n,temp,k;
    int tab[50]={0};
    printf("Entrer la taille du tableau ");
    scanf("%d",&nb);
    n=nb;
    for ( i = 0; i < nb; i++)
    {
        printf("veillez saisir tab[%d] :",i);
        scanf("%d",&tab[i]);
    }
    for ( j = 0; j < nb; j++)
    {
        for ( a = 0; a <n-1 ; a++) // l'iteration se fait a chaque boucle fa tsy vo manombokal
        {
            temp=tab[a];
            tab[a]=tab[a+1];
            tab[a+1]=temp;
        }
        n--;
    }
    printf("apres inversion :\n");
    for ( k = 0; k < nb; k++)
    {
        printf("tab[%d] = %d,",k,tab[k]);
    }
}
    
    
    
