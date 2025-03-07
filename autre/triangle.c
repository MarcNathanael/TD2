#include<stdio.h>
int main()
{int i,j,e,n;
    printf("entrer la hauteur");
    scanf("%d",&n);

    for (  i = 1; i <=n; i++)
    {   
            // vita le for 1 vo mande le for2
           for ( e = (n-i); e>=0; e--)
        {
           printf("    ");
           
        }
            for ( j = 1; j<=(i*2)-1; j++)
        {
           printf(" 🇲🇬 ");
        }
         printf("\n");
    }
    

}
