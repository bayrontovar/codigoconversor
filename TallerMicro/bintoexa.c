#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int potencia_base_dos(int  elevacion){
    int decimal = 1;
    for(int repeticiones = 0; repeticiones < elevacion; repeticiones++){
            decimal *= 2;
    }
    return decimal;
}

int binary_to_dec(char *invert_binary, char tam_inv , int decimal){
    for(int elevacion = 0; elevacion < tam_inv; elevacion++){
        if(invert_binary[elevacion] == '1') decimal += (potencia_base_dos(elevacion));
    }
    return decimal;
}

void invert_hexa_func(char *invert_hexadecimal, char *hexadecimal, char hexa_tam){
    char j = 0 ;
    for(char i = hexa_tam-1; i >= 0; i-- ){
        hexadecimal[j] = invert_hexadecimal[i];
        j++;
    }
}

void invert_long_binary_func(char *binary, char *invert_binary, char tam){
    char j = 0 ;
    for(char i = tam-2; i >= 0; i-- ){
        invert_binary[j] = binary[i];
        j++;
    }
}


void short_binary_func(char inicio_del_recorrido, char final_del_recorrido, char *short_binary, char *binary){
    char llenado_de_short = 0;
    for(char i = inicio_del_recorrido; i <= final_del_recorrido; i++){
            short_binary[llenado_de_short] = binary[i]; 
            llenado_de_short++;
    } 
}

void bin_to_hex(char *binary , char tam, char *hexadecimal){  //1111
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'}, short_binary[100] = {0}, inicio_del_recorrido = 0, final_del_recorrido = 3;
    char short_tam = 0, invert_short_bin[100] = {0}, short_decimal = 0, save_on_string = 0;
    do{
        short_binary_func(inicio_del_recorrido, final_del_recorrido, short_binary, binary);
        short_tam = strlen(short_binary);
        //printf("short: %s: %d\r\n", short_binary, short_tam);
        short_decimal  = binary_to_dec(short_binary, strlen(short_binary), short_decimal);
        //printf("--> 4 en decimales: %d \n", short_decimal);
        hexadecimal[save_on_string] = hex[short_decimal];
        save_on_string++;

        short_decimal = 0;
        inicio_del_recorrido  += 4;
        final_del_recorrido    += 4; 
    }while(final_del_recorrido < tam+2);
}

int main(){
    int decimal = 0;
    char binary[] = "0101010100101111010100101001010110100011110001", tam  = sizeof(binary), invert_binary [100] = {0}, invert_hexadecimal[100] = {0}, hexadecimal[100] = {0};
     
    invert_long_binary_func(binary, invert_binary, tam);
    bin_to_hex(invert_binary, tam, invert_hexadecimal);
    invert_hexa_func(invert_hexadecimal, hexadecimal, strlen(invert_hexadecimal));
    printf("El binario %s en hexadecimal: %s\r\n",binary, hexadecimal);


    return EXIT_SUCCESS;
}