#include <stdio.h>

int main(void) {
    int nprod;
    float przunitario, sconto, totale, totscontato;
    printf(" inserisci il numero di prodotti che hai acquistato: ");
    scanf("%d",&nprod);
    printf("inserisci il prezzo unitario dei prodotti: ");
    scanf("%f",&przunitario);
    totale=nprod*przunitario;
    printf("la tua spesa e' di: $%.2f", totale);

    if (totale > 50) {
        sconto = (totale-50) *0.2 + 40 *0.1;
    }
    else if (totale > 10 ) {
        sconto = (totale-10)*0.1;
    }
    totscontato = totale - sconto;
    printf(" lo sconto e' di: $%.2f \n", sconto);
    printf(" il prezzo totale e' di: $%.2f \n", totscontato);
}

