

#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);

    printf("Digite o segundo valor: ");
    scanf("%d", &num2);

    printf("Digite o terceiro valor: ");
    scanf("%d", &num3);

    if (num1 <= num2 && num1 <= num3) {
        printf("O menor valor é: %d\n", num1);
    } else if (num2 <= num1 && num2 <= num3) {
        printf("O menor valor é: %d\n", num2);
    } else {
        printf("O menor valor é: %d\n", num3);
    }

    return 0;
}
