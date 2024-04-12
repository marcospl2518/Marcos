#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // solicita a temperatura em graus Celsius
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    // converte Celsius para Fahrenheit
    fahrenheit = celsius * 9/5 + 32;

    // exibe o resultado
    printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}
