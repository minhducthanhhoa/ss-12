#include <stdio.h>

int main() {
    int a, b, c;
    printf("Nhap vao 3 so a, b, c: ");
    scanf("%d%d%d", &a, &b, &c);
    
    // In ra tich va thuong cua a va b
    printf("Tich cua a va b: %d\n", a * b);
    printf("Thuong cua a va b: %d\n", a / b);
    
    // In ra tich va thuong cua a va c
    printf("Tich cua a va c: %d\n", a * c);
    printf("Thuong cua a va c: %d\n", a / c);
    
    // In ra tich va thuong cua b va c
    printf("Tich cua b va c: %d\n", b * c);
    printf("Thuong cua b va c: %d\n", b / c);
    
    return 0;
}

