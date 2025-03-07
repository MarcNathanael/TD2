#include <stdio.h>
int main()
{   
    int nb,k,n,a,i,temp,j,ch,ch1;
    int tab[100]={0};
                az: // etiquette
    printf("veillez saisir le nombre de valeurs :");
    scanf("%d",&nb);
    // GO TRIAGE
    for ( k = 0,n=1; k <=(nb-1),n<=nb; k++,n++)
    {
       printf("Entrer le nombre %d: ",n);
       scanf("%d",&tab[k]);
    }
    back: // etiquette
    printf("Taper 2 pour croissant\nTaper 3 pour decroissant\n ");
    scanf("%d",&ch1);
    if(ch1 == 2)
    {
        for ( a = 0; a < (nb); a++)
        {
            for ( i = (a+1); i <(nb); i++)
            {
                if (tab[a]>tab[i])
                {
                    temp=tab[i];
                    tab[i]=tab[a];
                    tab[a]=temp;
                }
                else
                {
                    continue; // si les nombres sont pareil
                }
            }
        }
    }
    else if(ch1 == 3)
    {
        for ( a = 0; a < (nb); a++)
        {
            for ( i = (a+1); i <(nb); i++)
            {
                if (tab[a]<tab[i])
                {
                    temp=tab[i];
                    tab[i]=tab[a];
                    tab[a]=temp;
                }
                else
                {
                    continue; // si les nombres sont pareil
                }
            }
        }
    }
    else
    {
        printf("ca ne fait pas partie des choix");
        goto back;
    }
    for ( j = 0; j <=(nb-1); j++)
    {
        if(j<nb-1)
        {
            printf("%d,",tab[j]);
        }
        else
        {
            printf("%d\n",tab[j]);
        }
    }

    
    printf("taper 1 pour continuer");
    scanf("%d",&ch);
    if (ch==1)
    {
        goto az;
    }


//______________________________________________

    
}

  /*for ( j = 0; j <(i-1); j++) //i-1 satria mbola nanao an le NULL izy
    {
       printf("%s",temp[j]);
    }*/
    /*strlen(*temp); // strlen ne compte que les premieres lettres du premiers token?!
    printf("%ld",strlen(*temp)*/
   // l=0;
   /* while (temp[j]!= NULL)
    {
        printf("%s",temp[j]);
        j++;
    }
    printf("%d",j); *///mety
