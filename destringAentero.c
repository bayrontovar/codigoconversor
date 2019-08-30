#include <stdio.h>
#include <stdlib.h>

unsigned int i=0, j=0, resul=1;
unsigned int tam=0, tam1=0, tam2=0;
unsigned int suma=0, suma1=0, suma2=0, sumaf=0, sumat=0;

unsigned int pot(unsigned int total[], unsigned int tam){
	for(j=0;j<tam;j++){
	    for(i=0;i<j;i++){
		    resul=resul*10;	
		}
	    suma=suma+(resul*total[j]);
	    sumaf=suma;
	    resul=1;	
	}
suma=0;		
return (sumaf);
}

main(){
unsigned char dato1[] = "1";
unsigned char dato2[] = "7";
unsigned char natu[]= "0123456789";	
unsigned int num1[]={0}, num2[]={0};
	
while(dato1[tam1] != '\0') tam1++; //tamaño de la dato1
while(dato2[tam2] != '\0') tam2++; //tamaño de la dato2
	
for(i=0;i<tam1;i++){// de string a entero dato1
	for(j=0;j<10;j++){
	    if(dato1[i]==natu[j]) 
		num1[tam1-1-i]=j;        
    }
}
for(i=0;i<tam2;i++){// de string a entero dato2
	for(j=0;j<10;j++){
	    if(dato2[i]==natu[j]) num2[tam2-1-i]=j;       
    }
}


unsigned char resta= suma1-pot(num1,num2);
suma1=pot(num1, tam1);
suma2=pot(num2, tam2);
unsigned char divi=suma1/suma2;
sumat=suma1+suma2+suma1+suma2;
printf("%d + %d = %d", suma1, suma2, sumat);
return 0;
}
