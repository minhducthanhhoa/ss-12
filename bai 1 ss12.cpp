#include<stdio.h>

int main() {
    int a, b, c;
    int max, min, middle;

    // Nhap 3 so tu bàn phím
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);
    printf("Nhap so thu ba: ");
    scanf("%d", &c);

    // Xác dinh so lon nhat, so nho nhat và so trung gian
    if (a >= b && a >= c) {
        max = a;
        if (b >= c) {
            middle = b;
            min = c;
        } else {
            middle = c;
            min = b;
        }
    } else if (b >= a && b >= c) {
        max = b;
        if (a >= c) {
            middle = a;
            min = c;
        } else {
            middle = c;
            min = a;
        }
    } else {
        max = c;
        if (a >= b) {
            middle = a;
            min = b;
        } else {
            middle = b;
            min = a;
        }
    }

    // In ra tong và hieu cua tung cap so
    printf("Tong cua cac cap so: %d, %d, %d\n", max + middle, max + min, middle + min);
    printf("Hieu cua cac cap so: %d, %d, %d\n", max - middle, max - min, middle - min);

    return 0;
}

