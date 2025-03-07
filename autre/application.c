/*
algo remplir_un _tab2D
variables k,i,j,n,p:entiers;
          tab[100][100]:tableau entiers;
debut
    k=0;
    faire
        tab[100][100]<--{0};
        Afficher("Entrer le nombre de ligne du tableau");
        lire(n);
        k=k+1;
        si(k==3)alors
            fin
        finsi
    tantque(n>100 || n<1);

    k=0;
    faire
        Afficher("Entrer le nombre de lcolonne du tableau");
        lire(p);
        k<--k+1;
        si(k==3)alors
            fin
        finsi
    tantque(n>100 || n<1);

    pour(i<--0,i < n ,i<--i+1)
        pour(j<--0,j < p,j<--j+1)
            afficher("tab[",i"][",j"]=",tab[i][j]);
            lire(tab[i][j]);
        finpour
    finpour

    pour(i<--0,i < n ,i<--i+1)
        pour(j<--0,j < p,j<--j+1)   
            afficher(tab[i][j]);
        finpour
        afficher("\n");
    finpour  
fin

*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n,p,k,min,x,y;
    int tab[100][100]={0};
    k=0;
    // tsy atao while satria mbola tsy ananana ny valeur de n anaovana condition
    do{
        /*
        k++;
        printf("Entrer le nombre de ligne du tableau : ");
        scanf("%d",&n);
        if (k==4) // lasa 4 essaie rah k=4
        {
            exit(0);
        }*/
        k++;
        if (k>3) // remarque a retenir
        {
            exit(0);
        }
        printf("Entrer le nombre de ligne du tableau : ");
        scanf("%d",&n);
    }while(n>100 || n<1);

    k=0;
    do{
    printf("Entrer le nombre de lcolonne du tableau : ");
    scanf("%d",&p);
    k++;
    if (k==3)
    {
        exit(0);
    }
    }while(p>100 || p<1);

    for(i=0;i < n ;i++)
    {
        for(j=0;j < p;j++)
        {
            printf("tab[%d][%d] = ",i,j);
            scanf("%d",&tab[i][j]);
        }
    }

    for(i=0;i < n ;i++)
    {
        for(j=0;j < p;j++)   
        {
            printf("__");
            printf("%d\t",tab[i][j]);
        }
        printf("\n");
    }  
    min=tab[0][0];
    for(i=0;i < n ;i++)
    {
        for(j=0;j < p;j++)   
        {
            if (min>=tab[i][j])
            {
                min=tab[i][j];
                x=i;
                y=j;
            }   
        }
    }  
    printf("min est dans tab[%d][%d] =%d\n",x,y,min);
    
    return (0);
}