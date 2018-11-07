// Verena Winter
#include <stdio.h>

int Zahl=0;

   double readBarrier(){
       double a_value= 0.0;
    printf("Bitte geben Sie eine positive_Ganz_Zahl ein: ");
    scanf("%lf", &a_value);
    return a_value;
   }
   double printSequence(){
    for(int i=1; i<= Zahl; i++) {
        printf("%lf\n", printSequence);
    }
    return printSequence;
   }
   
int main(int argc, char** argv) {
  int n=0;
  n = readBarrier();
  printSequence(n);
  return 0;
}
