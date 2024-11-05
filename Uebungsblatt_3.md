---
title: "Uebungsblatt_3"
author: "Trung Kien Pham"
date: "5 11 2023"
---

<br>
</br>
<p style="text-align:center; line-height: 0.5;"><b>Einführung ins Programmieren</b></p>
<p style="text-align:center;line-height:0.5;"><b>WS24/25</b></p>
<p style="text-align:center;line-height:0.5;"><b>Übungsblatt 3</b></p>

___
#### 3.1: `for`-loop: Legendre-Polynome
Die Legendre-Polynome $P_n(x)$ spielen eine bedeutende Rolle bei der Darstellung des Drehimpulses in der Quantenmechanik (und nicht nur dort). Ihre Werte gehorchen der Rekursionsformel
$$(n+1)P_{n+1} (x) = (2n+1) x P_n (x) - n P_{n-1} (x)$$

mit den Anfangsbedingungen $P_0(x) = 0$ und $P_1(x) = x$.
Schreiben Sie ein Programm, dass die Werte aller $P_n$ bis $n \leq N$ am Punkt $x$ ausgibt. Verwenden Sie dafür einen `for`-Loop.
###### Mein Code:
```c
#include <iostream>
using namespace std;

double legendre(int n, double x) {
    if (n == 0) {
        return 1;
    } else if (n == 1) {
        return x;
    } else {
        double l = (2.0 * n - 1.0) / n * x * legendre(n - 1, x) 
        - (n - 1.0) / n * legendre(n - 2, x); 
        // Caution: use 2.0 instead of 2 to avoid integer division
        return l; 
    }
}

int main() {
    cout << "Legendre Polynomial" << endl;
    int N;
    cout << "Enter N: ";
    cin >> N;
    cout << "Enter x: ";
    double x_in;
    cin >> x_in;
    for (int i = 0; i <= N; i++) {
        cout << "P" << i << "(" << x_in << ") = " << legendre(i, x_in) << endl;
    } 
    return 0;
}
```
###### Output test:
```
Legendre Polynomial
Enter N: 5
Enter x: 3
P0(3) = 1
P1(3) = 3
P2(3) = 13
P3(3) = 63
P4(3) = 321
P5(3) = 1683
```


#### 3.2: `do...while`-Loop
Berechnen Sie die Werte der Legendre-Polynome wie oben, aber mittels eines `do...while`-Loops statt `for`-Loop.
###### Mein Code: 
```c
    do {
        cout << "P" << N << "(" << x_in << ") = " << legendre(N, x_in) << endl;
        N++;
    } while (N <= 10);
```

#### 3.3: `for`-Loop: Faktorielle bis zu einem Höchstwert
Schreiben Sie den folgenden Code aus der Vorlesung in einen `for`-Loop um, indem Sie für die Bedingung im `for`-Loop einen Test auf das Resultat `nFac` verwenden. Achten Sie darauf, dass Sie dass wieder, wie unten, 4! = 24 ausgegeben wird.
```
int main() {
    int k = 1 , nFac = 1;
    do {
        nFac *= k ;
        k ++;
    } while (nFac < 24);
    std::cout << nFac << "\n";
}
```
###### Mein Code:
```c
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
    // Alternative: for loop
    // for (int i = n - 1; i > 0; i--) {
    //     n *= i;
    // }
    // return n;
}

int main() {
    cout << "Factorial N!" << endl;
    int N;
    cout << "Enter N: ";
    cin >> N;
    cout << N << "! = " << factorial(N) << endl;
    return 0;
}
```
###### Output Test:
```
Factorial N!
Enter N: 5
5! = 120
```