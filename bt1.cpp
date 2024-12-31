#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Nhap vao chuoi: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0; 

    printf("Chuoi vua nhap: %s\n", str);
    printf("Do dai chuoi: %zu\n", strlen(str));

    return 0;
}