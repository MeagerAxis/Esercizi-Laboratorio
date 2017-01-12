#include <stdio.h>
int main (void)
{
    float a, b;
    char operatore;
    float operazione;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%c", &operatore);
    scanf("%c", &operatore);
    switch (operatore) {
        case '+': 
        operazione = (a+b);
        printf("%.1f\n", operazione);
        break;
        case '-': 
        operazione = (a-b);
        printf("%.1f\n", operazione);
        break;
        case '/': 
        operazione = (a/b);
        printf("%.1f\n", operazione);
        break;
        case '%': 
        operazione = (int)a%(int)b;
        printf("%.1f\n", operazione);
        break;
    }
}
