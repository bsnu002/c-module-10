#include<stdio.h>

int main() {
    // char a[5] = {'r', 'a', 'h', 'a', 't'};
    // char a[5] = "rahat";

    // for (int i=0; i<5; i++){
    //     printf("%c\n", a[i]);
    // }

    // char a[5] = "Rahat";
    // char a[6] = "Rahat\0";

    // char a[6] = "Rahat";

    // char a[] = "Rahat\0";
    // int sz = sizeof(a) / sizeof(char);
    // printf("%d\n", sz);

    // char a[] = "Rahat";
    // int sz = sizeof(a) / sizeof(char);
    // printf("%d\n", sz);

    // char a[6] = "Rahat\0";
    // int sz = sizeof(a) / sizeof(char);
    // printf("%d\n", sz);

    // char a[5] = {'R', 'a', 'h', 'a', 't'}; // wrong
    char a[6] = {'R', 'a', 'h', 'a', 't'}; // no gurantee

    printf("%s", a);

    return 0;
}