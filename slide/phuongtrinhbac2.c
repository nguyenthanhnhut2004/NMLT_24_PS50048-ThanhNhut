#include <stdio.h>
#include <math.h>

int main() {
    int a ,b, c;
    float x1, x2, delta;
    printf("nhap he so a:");
    scanf("%d", &a);
    printf("nhap he so b:");
    scanf("%d", &b);
    printf("nhap he so c:");
    scanf("%d", &c);
    delta =b*b - 4*a*c;
    printf("delta = %.2f\n", delta);
    if (delta <0) {
        printf("phuong trinh vo nghiem\n");
    } else if (delta ==0) {
        x1 = -b/(2*a);
        printf("phuong trinh co nghiem kep: x1 = x2 = %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        printf("phuong trinh co 2 nghiem phan biet: x1 = %.2f, x2 = %.2f\n", x1, x2);
    }
    return 0;
}