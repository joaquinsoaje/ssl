#include <stdio.h>

int main() {
    // Abrir el archivo en modo escritura
    FILE *archivo = fopen("output.txt", "w");
    
    // Verificar si el archivo se abrió correctamente
    if (archivo == NULL) {
        // Si el archivo no existe, crearlo
        archivo = fopen("output.txt", "w+");
        
        // Verificar si se pudo crear el archivo
        if (archivo == NULL) {
            printf("No se pudo crear el archivo.\n");
            return 1;
        }
    }
    
    // Imprimir "Hola mundo!" en la consola
    printf("Hola mundo!\n");
    
    // Escribir "Hola mundo!" en el archivo
    fprintf(archivo, "Hola mundo!\n");
    
    // Cerrar el archivo
    fclose(archivo);
    
    return 0;
}
