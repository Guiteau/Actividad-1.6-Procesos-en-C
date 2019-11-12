#include<stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[] ) {

   if(argc < 2){
     printf("[x] Error in the parameters\n");
     return(0);
   }

   int side = atoi(argv[1]); //atoi()d >> función conversora de ASCII a entero
   int area = side * side;
   printf("[>] Área del cuadrado : %d\n", area);
   return (0);


}
