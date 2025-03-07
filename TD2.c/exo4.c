#include<stdio.h>
int main()
{   
    int i,n,j,p,g,affp,affg;
    int TPOS[50]={0};
    int TNEG[50]={0};
    int tab[50]={0};
    p=0;
    g=0;
    printf("entrer la taille du tableau\nN= ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
        {
        printf("veillez saisir l'element %d :",i);
        scanf("%d",&tab[i]);
        }
    for ( j = 0; j < n; j++)
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
    for ( affp = 0; affp <=p; affp++)
        {
        printf("TPOS[%d] = %d\n",affp,TPOS[affp]);
        }
    printf("\n");
    for ( affg = 0; affg <=g; affg++)
        {
        printf("TNEG[%d] = %d\n",affg,TNEG[affg]);
        }
    
    return (0);
}