#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char vec[100]={0};
    unsigned char i=0,j=0;
    unsigned char ce=0,u=0,d=0,t=0,c=0,ci=0,s=0,si=0,o=0,n=0;//variables que almacena cantidad a cada numero correspondiente
    for (i=0;i<100;i++) {
        vec[i]=rand()%10;// asigna un valor a cada posicion del vector
        printf("%d,",vec[i]);
        //condicionales que cuentan los numeros repetidos
        if(vec[i]==0){ce++;}if(vec[i]==1){u++;}if(vec[i]==2){d++;}if(vec[i]==3){t++;}if(vec[i]==4){c++;}
        if(vec[i]==5){ci++;}if(vec[i]==6){s++;}if(vec[i]==7){si++;}if(vec[i]==8){o++;}if(vec[i]==9){n++;} }
    printf("\n");

unsigned vec2[10]={ce,u,d,t,c,ci,s,si,o,n};// almacena los valores de las diferentes variables
unsigned char guarp[10]={0};//almacena el vector organizado
unsigned char k=0,m=0,l=0,nu=0;
unsigned gup[10]={0};//almcena vector con posiciones de mayor a menor por cantidad del numero 
m=vec2[0];
for(l=0;l<10;l++){
    for (k=0;k<10;k++){ if (m<=vec2[k]){m=vec2[k];nu=k; }}
    guarp[l]=m;gup[l]=nu; vec2[nu]=0;m=vec2[0];  }

printf("-------------------------------------------------\n");
printf("Del %d hay: ",gup[0]);
for (l=0;l<guarp[0];l++){printf("*");} printf("\n");
printf("Del %d hay: ",gup[1]);
for (l=0;l<guarp[1];l++){printf("*");}printf("\n");
printf("Del %d hay: ",gup[2]);
for (l=0;l<guarp[2];l++){printf("*");}printf("\n");
printf("Del %d hay: ",gup[3]);
for (l=0;l<guarp[3];l++){printf("*");}printf("\n");
printf("Del %d hay: ",gup[4]);
for (l=0;l<guarp[4];l++){printf("*");}printf("\n");
printf("Del %d hay: ",gup[5]);
for (l=0;l<guarp[5];l++){printf("*");}printf("\n");
printf("Del %d hay: ",gup[6]);
for (l=0;l<guarp[6];l++){printf("*");}printf("\n");
printf("Del %d hay: ",gup[7]);
for (l=0;l<guarp[7];l++){printf("*");}printf("\n");
printf("Del %d hay: ",gup[8]);
for (l=0;l<guarp[8];l++){printf("*");}printf("\n");
printf("Del %d hay: ",gup[9]);
for (l=0;l<guarp[9];l++){printf("*");}printf("\n");
    return 0;
}