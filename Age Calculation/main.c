#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declaration des variables & constantes
    const int actual = 2022;
    int age;
    int year;
    printf("Veuillez entrer votre année de naissance: ");
    scanf("%d", &year);
    age = actual - year;
    printf("%d", age);
    return 0;
}
