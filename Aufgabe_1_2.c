//Verena Winter
#include <stdio.h>

int n = 0;

int readBarrier() {
  printf ("Bitte geben Sie eine positive Ganze-Zahl ein: ");
  scanf ("%d", &n);
}
int printSequence() {
    for (int i = 1; i <= n; i++)
    printf (" %d\n", i);
    return n;
}
int main(int argc, char **argv) {
  int n = readBarrier ();
  printSequence ();
}

