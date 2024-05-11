#include <stdio.h>
int main() {
    int N = 0;
    scanf("%d", &N);
    // setam 7 si 11 in variabile pt a evita numere magice
    const int var_trick = 7;
    const int var_treat = 11;
    // verificam pt cazul particular n = 0, unde iterarea prin bucla
    // nu mai este necesara
    if (N == 0)
        return 0;
    // iteram de la 1 pana la numarul citit N prin fiecare numar natural
    // si facem verificari de divizibilitate fata de 7 si 11
    for (int i = 1; i <= N; i++) {
        // divizibilitate cu 7
        if (i % var_trick == 0) {
            // divizibilitate cu 77
            if (i % var_treat == 0) {
                printf("TrickOrTreat ");
            } else {
                printf("Trick ");
            }
        } else {
            // divizibilitate cu 11
            if (i % var_treat == 0) {
                printf("Treat ");
            } else {
                // nici o divizibilitate
                printf("%d ", i);
            }
        }
    }
    // adaugam un \n la final pentru a nu avea promptul din bash
    // pe acelasi rand cu outputul programului
    printf("\n");
}
