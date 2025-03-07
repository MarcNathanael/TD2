#include<stdio.h>
void equation_droite(float x1,float y1,float x2,float y2);

int main()
{
    float x1,y1,x2,y2;
    printf("Entrer les coordonnes du point A:\n");
        
    printf("xA = ");
    scanf("%f",&x1);                   // Ny %.kf dia ampiasaina am affichage ihany satria iny modification fotsiny
    printf("yA = ");            
    scanf("%f",&y1);    

    printf("Entrer les coordonnes du point B:\n");
    printf("xB = ");
    scanf("%f",&x2);
    printf("yB = ");
    scanf("%f",&y2);

    equation_droite(x1,y1,x2,y2);
    return (0);
}

void equation_droite(float x1,float y1,float x2,float y2)
{
    float a,b;
    a = ( (y1-y2)/(x1-x2) );
    b = y1 - (a*x1);
    printf("L'equation de la droite appartenant au point A et B est (D)= %.2fx + %.2f\n",a,b);
}