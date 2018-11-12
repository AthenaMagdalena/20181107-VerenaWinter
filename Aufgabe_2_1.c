//Verena Winter
#include <stdio.h>

int a = 0;
double i = 1;
double res = 0;

int eingegebenerWert() {
  printf ("Geben Sie eine positive Ganze-Zahl ein: ");
  scanf ("%d", &a);
}
int Printnumber() {
  while (i <= a)
    res += 1 / i++;
    printf ("%lf", res);
return 0;
}

int main(int argc, char **argv) {

  int n = eingegebenerWert();
  Printnumber();
}
