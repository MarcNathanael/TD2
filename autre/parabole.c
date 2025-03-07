#include<stdio.h>

void parabole(float x1,float y1,float x2,float y2,float x3,float y3);
int main()
{
    float x1,y1,x2,y2,x3,y3;
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

    printf("Entrer les coordonnes du point C:\n");
    printf("xC = ");
    scanf("%f",&x3);
    printf("yC = ");
    scanf("%f",&y3);
    printf("\n");
    parabole( x1, y1, x2, y2, x3, y3);

}

void parabole(float x1,float y1,float x2,float y2,float x3,float y3)
{
    float a;
    a= (y1*(x2-x3)) + (y2*(x3-x1)) + (y3*(x1-x2)) ;
    if (a==0)
    {
        printf("les trois points ne forment pas une parabole\n");
    }
    else
    {
        printf("les trois points forment une parabole\n");
    }
}

