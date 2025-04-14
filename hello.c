#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
int main(void){
    FILE *salida;
    
   if (( salida = fopen ("output.txt","w"))){
    char nombre[20] = "Hola Alek Tremoulet!";
    fwrite(nombre,sizeof(char),20,salida);
    }
    else 
        return EXIT_FAILURE;
    fclose(salida);
return EXIT_SUCCESS;
}