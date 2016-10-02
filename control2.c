#include <stdio.h>
#include <math.h>
int prom(int *p,int l);

struct Punto{
    int x;
    int y;
};
main(){
struct Punto p1 = {5,9};
struct Punto p2 = {3,4};
int **q[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
int **y[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
int **t[3][3];
int **r[3][3];
int rowq=3;
int h = 0;
int *p[8]={1,2,3,4,5,6,7,8};
//Inicio distnacia entre 2 puntos
double dist, sqrt(double);
dist=sqrt(pow((double)p1.x-(double)p2.x,2.0)+pow((double)p1.y-(double)p2.y,2.0));
//fin ditancia entre dos puntos

//inicio multiplicacion de matriz
//inicio se saca la transpuesta
while(h<rowq){
    int j = 0;
    while(j<rowq){
        *(*(t+j)+h)=*(*(y+h)+j);
        ++j;
    }
    ++h;
}
//fin tranaspuesta

//Inicio Se multiplica la Matriz por la transpueta
h=0;
while(h<rowq){
    int j = 0;
    while(j<rowq){
        int t2 = *(*(t+h)+j);
        int q2 = *(*(q+h)+j);
        *(*(r+h)+j)= t2*q2;
        ++j;
    }
    ++h;
}
//Fin de la multiplicacion

//Se imprimen los resultados
h=0;
printf("%s\n","La multiplicacion es: ");
while(h<rowq){
    int j = 0;
    while(j<rowq){
        printf("%d%c",*(*(r+h)+j),'-');
        ++j;
    }
    printf("\n");
    ++h;
}
printf("%s%d\n","El proemdio del vector es: ",prom(p,8));
printf("%s%f\n","Distancia entre dos puntos: ",dist);
//printf("%d\n",*(*(r+1)+2));
//printf("%d",*(*(t+1)+2));

}
int prom(int *p,int l){
    int r = 0;
    int i;
    for(i=0;i<l;++i){
        r = r + *p;
        *p++;
    }
    return r/l;
}
