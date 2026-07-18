#include <stdio.h>
int main() {
    int a, b;
    float x;
    printf("Nhap he so a: ");
    scanf("%d", &a);
    printf("Nhap he so b: ");
    scanf("%d", &b);
    if (a == 0) {
        printf("Phuong trinh vo nghiem.\n");
    } else {
        x = -(float)b / a;
        printf("nghiem cua phuong trinh %dx +%d = 0 la: x = %.2f\n", a, b, x);
    }
    return 0;
}