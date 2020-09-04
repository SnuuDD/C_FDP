#include <stdio.h>

int main()
{
   char nombre[15]="POKEDEX.txt", linea[81];
   FILE *fichero;

   fichero = fopen( nombre, "r" );
   printf( "Fichero: %s -> ", nombre );
   if( fichero )
      printf( "existe (ABIERTO)\n" );
   else
   {
      printf( "Error (NO ABIERTO)\n" );
      return 1;
   }

   printf( "La primera linea del fichero: %s\n\n", nombre );
   printf( "%s\n", fgets(linea, 81, fichero) );

   if( !fclose(fichero) )
      printf( "\nFichero cerrado\n" );
   else
   {
      printf( "\nError: fichero NO CERRADO\n" );
      return 1;
   }

   return 0;
}
