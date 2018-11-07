# 20181102

## Namensgebung

Alle Dateien sind in der Form aufgabe_x_y.c abzugeben.

Wobei x die Aufgabennummer darstellt und y den entsprechenden Unterpunkt.
 
__Beispiel:__

    aufgabe_1_2.c

## Inhalt der Dateien

Als erste Zeile in Ihren C Dateien steht als Kommentar Ihr Name.
Kommentare sind mit doppeltem Slash (//) einzuleiten.

__Beispiel:__

```C
// Robert Ulmer
#include <stdio.h>
.
.
.
```

Achten Sie auf korrekte Einrückungen!

### 1.1 Natürliche Zahlen 

Erstellen Sie ein Programm, welches eine positive Ganz-Zahl n einliest und dann alle natürlichen Zahlen bis zu und einschließlich dieser ausgibt.

__Beispiel für n = 4:__

    Bitte geben Sie eine positive Ganz-Zahl ein: 4
    1
    2
    3
    4

### 1.2 Verwendung von Funktionen

Erstellen Sie ein Programm, welches sich wie 1.1 verhält, aber die Funktionalität in zwei Funktionen ausgegliedert ist und die main Funktion wie folgt aussieht:

```C
int main(int argc, char** argv) {
  int n=0;
  n = readBarrier();
  printSequence(n);
  return 0;
}
```
### 2.1 Harmonische Reihe

Erstellen Sie ein Programm, welches eine positive Ganz-Zahl einliest und dann die Harmonische Reihe berechnet. Die Harmonische Reihe ist wie folgt definiert:
  
<img src="https://latex.codecogs.com/svg.latex?\Large&space;H_n=\sum\limits_{i=1}^n\frac{1}{n}" />

__Beispiel für n = 4__

<img src="https://latex.codecogs.com/svg.latex?\Large&space;H_4=\sum\limits_{i=1}^4\frac{1}{n}=1+\frac{1}{2}+\frac{1}{3}+\frac{1}{4}=2,08333333333" />

Verwenden Sie in sinnvoller Weise Funktionen!
