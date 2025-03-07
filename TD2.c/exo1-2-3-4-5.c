/*
    Algo Manipulation_tableau
    variable i,j,s,n,max,p,g,nb,temp : entiers;
             tab[100],position[50],stock[50] : tableau_entiers;
    debut
        s=0;
    back:
    Afficher("Entrer la taille du tableau inferieur a 50\n N=",n);
    Lire(n);
    si (n>=50)alorrs
        aller back;
    finsi
    
    pour ( i <-- 0; i < n; i<-- i+1)
        Afficher("Saisir l'element",i);
        Lire("tab[i]);
    fin pour

    Afficher("\t\t TABLEAU:\n");

    pour ( i <-- 0; i < n; i<-- i+1)
         Afficher("tab[",j,"]=",tab[i]);
    fin pour

    Afficher("\n");

    pour ( i <-- 0; i < 10; i<-- i+1)
        s<--s+tab[i];
    fin pour

    Afficher("\tLa somme des elements est =",s"\n");
// _____________________________________________________________exo2
    j<--0;
    max<--tab[0];
    pour ( i <-- 1; i < n; i<-- i+1)
        si(max<tab[i])alors
            max<--tab[i];
        fin si
    fin pour

    pour ( i <-- 0; i < n; i<-- i+1)
        si (tab[i]<--<--max)alors
            position[j]<--i;
            j++;
        fin si
    fin pour
    
    Afficher("\tLe nombre max est =",max"\n");

    Afficher("\tMax se trouvent dans :\n");

    pour ( i <-- 0; i < j; i<-- i+1)
        Afficher("tab[",position[i],"]\t");
    fin pour

    Afficher("\n");
//_______________________________________________________________exo3
    Afficher("\t\tVoici le tableau sans 0\n");
    nb<--0;
    pour ( i <-- 0; i < n; i<-- i+1)
        si (tab[i]!<--0)alors
            stock[nb]<--tab[i];
            nb++; // correspond au non 0
        fin si   
    fin pour

    pour ( i <-- 0; i < nb; i<-- i+1)
        tab[i]<--stock[i];
        Afficher("tab[",i,"] =",tab[i]);
    fin pour

    Afficher("\n");

    //_______________________________________________________________________exo4
    g<--0;
    p<--0;
    int TPOS[50]<--{0};
    int TNEG[50]<--{0};
    pour ( j <-- 0; j < nb; j<--- j+1) 
            si (tab[j]>0)alors
                TPOS[p]<--tab[j];
                p++;
            fin si
            Sinon si (tab[j]<0)alors
                TNEG[g]<--tab[j];
                g++;
            fin sinon    
    fin pour

    Afficher("\n");

    Afficher("\tLes elements Positifs:\n");

    pour ( j <-- 0; j <p; j<--- j+1)
        Afficher("TPOS[",j,"] = ",TPOS[j],"\n");
    fin pour

    Afficher("\n");

    Afficher("\tLes elements Negatifs:\n");

    pour ( j <-- 0; j <g; j<--- j+1)
        Afficher("TNEG[",j,"] =",TNEG[j],"\n");
    fin pour
//________________________________________________________________exo5
    n<--nb;
        pour ( j <-- 0; j < nb; j<--- j+1)
            pour ( i <-- 0; i <n-1 ; i<-- i+1) // l'iteration se fait a chaque boucle fa tsy vo manombokal
                temp<--tab[i];
                tab[i]<--tab[i+1];
                tab[i+1]<--temp;
            fin pour
            n--;
        fin pour

        Afficher("\n");

        Afficher("Apres inversion :\n");

        pour ( j <-- 0; j < nb; j<--- j+1)
            Afficher("tab[",j,"] = ",tab[j]");
        fin pour

    Afficher("\n");
       
*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{   
    int act,i,j,s,n,max,p,g,nb;
    int tab[100]={0};
    int position[50];
    int stock[50]={0};
    int temp;
    const int maxmum =20 , minmum=-10;
    s=0;
    back:
    printf("Entrer la taille du tableau inferieur a 50\nN= ");
    scanf("%d",&n);
    if (n>=50)
    {
        goto back;
    }
    
    /*for ( i = 0; i < n; i++)
    {
        printf("Saisir l'element %d :",i);
        scanf("%d",&tab[i]);
    }*/
    srand(time(NULL));
    tab[0]=( rand() % (maxmum - minmum + 1)) + minmum;
    for ( i = 1; i < n; i++)
    {
        tab[i]=( rand() % (maxmum - minmum + 1)) + minmum;
    }
    printf("Taper 1 pour activer la manipulation\nTaper un autre nombre pour voir le tableau generer\n");
    scanf("%d",&act);

    if(act==1)
    {
    printf("\t\t TABLEAU:\n");

    for ( i = 0; i < n; i++)
    {
         printf("tab[%d]=%d ,",i,tab[i]);
    }
    printf("\n");
    for ( i = 0; i < 10; i++)
    {
        s=s+tab[i];
    }
    printf("\tLa somme des elements est =%d\n",s);
    }
    else
    {
        printf("\t\t TABLEAU:\n");

        for ( i = 0; i < n; i++)
        {
            printf("tab[%d]=%d ,",i,tab[i]);
        }
        printf("\n");
        
    }
// _____________________________________________________________exo2
    j=0;
    max=tab[0];
    for ( i = 1; i < n; i++)
    {
            if(max<tab[i])
            {
                //position[j]=i;
                max=tab[i];
                //j++;
            }
    }
    for ( i = 0; i < n; i++)
    {
        if (tab[i]==max)
        {
            position[j]=i;
            j++;
        } 
    }
    
    printf("\tLe nombre max est = %d\n",max);
    printf("\tMax se trouvent dans :\n");
    for ( i = 0; i < j; i++)
    {
        printf("tab[%d]\t",position[i]);
    }
    printf("\n");
//_______________________________________________________________exo3
   printf("\t\tVoici le tableau sans 0\n");
   nb=0;
    for ( i = 0; i < n; i++)
    {
        if (tab[i]!=0)
        {
            stock[nb]=tab[i];
            nb++; // correspond au non 0
        }   
    }
    for ( i = 0; i < nb; i++)
    {
        tab[i]=stock[i];
        printf("tab[%d] = %d ,",i,tab[i]);
    }
    printf("\n");
//_______________________________________________________________________exo4
    g=0;
    p=0;
    int TPOS[50]={0};
    int TNEG[50]={0};
    for ( j = 0; j < nb; j++)
        {  
            if (tab[j]>0)
            {
                TPOS[p]=tab[j];
                p++;
            }
            else if (tab[j]<0)
            {
                TNEG[g]=tab[j];
                g++;
            }    
        }
    printf("\n");
    printf("\tLes elements Positifs:\n");
    for ( j = 0; j <p; j++)
        {
        printf("TPOS[%d] = %d\n",j,TPOS[j]);
        }
    printf("\n");
    printf("\tLes elements Negatifs:\n");
    for ( j = 0; j <g; j++)
        {
        printf("TNEG[%d] = %d\n",j,TNEG[j]);
        }
//________________________________________________________________exo5
    n=nb;
        for ( j = 0; j < nb; j++)
        {
            for ( i = 0; i <n-1 ; i++) // l'iteration se fait a chaque boucle fa tsy vo manombokal
            {
                temp=tab[i];
                tab[i]=tab[i+1];
                tab[i+1]=temp;
            }
            n--;
        }
        printf("\n");
        printf("Apres inversion :\n");
        for ( j = 0; j < nb; j++)
        {
            printf("tab[%d] = %d,",j,tab[j]);
        }
    printf("\n");
    return (0);
}



