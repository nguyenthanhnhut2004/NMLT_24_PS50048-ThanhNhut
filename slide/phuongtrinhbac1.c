#include <stdio.h>

int main() {
    int a, b;
    float x;

    printf("Nhap he so a:\n ");
    if (scanf("%d", &a) ) 
        
    printf("Nhap he so b:\n ");
    if (scanf("%d", &b) );

    if (a == 0) {
        printf("Phuong trinh vo nghiem.\n");
    } else {
        x = -(float)b / a;
        printf("Nghiem cua phuong trinh: x = %.2f\n", x);
    }

    return 0;
}
 