#include<stdio.h>

int main()
{
    float xv,yv,xu,yu,px,py,s;
    printf("Entrer les composants du vecteur V:\n");
        
    printf("xv = ");
    scanf("%f",&xv);                   //%.kf n'est a utiliser qu'avec les affichages
    printf("yv = ");            
    scanf("%f",&yv);    

    printf("Entrer les composant du vecteur U:\n");
    printf("xu = ");
    scanf("%f",&xu);
    printf("yu = ");
    scanf("%f",&yu);

    px= xv*xu;
    py= yv*yu;
    s=px+py;

    printf("le produit scalaire des vecteurs(U.V) vaut %.2f\n",s);
    return (0);
}