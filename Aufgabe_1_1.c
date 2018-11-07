// Verena Winter
#include <stdio.h>

int Zahl=0;

int main(int argc, char ** argv) {
    
    printf("Bitte geben Sie eine positive_Ganz_Zahl ein: ");
    scanf("%d", &Zahl);
    for(int i=1; i<= Zahl; i++) {
        printf("%d\n", i);
}
    return 0;
}
