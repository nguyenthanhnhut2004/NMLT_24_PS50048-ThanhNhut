#include <stdio.h>

int main() {
    float a, b, x;

    printf("Nhap he so a: ");
    scanf("%f", &a);

    printf("Nhap he so b: ");
    scanf("%f", &b);

    if (a == 0) {
        if (b == 0) {
            printf("Phuong trinh co vo so nghiem.\n");
        } else {
            printf("Phuong trinh vo nghiem.\n");
        }
    } else {
        x = -b / a;
        printf("Nghiem cua phuong trinh: x = %.2f\n", x);
    }

    return 0;
}

 