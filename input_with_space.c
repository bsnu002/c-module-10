#include<stdio.h>
#include<string.h>

int main() {
    // char a[18];
    // char a[100];
    // gets(a);

    char a[100];
    // fgets(a, 18, stdin);
    // fgets(a, 10, stdin);
    fgets(a, 19, stdin); //take "enter" as a input
    a[17] = '\0'; // replace enter position as null

    printf("%s", a);

    return 0;
}