#include <stdio.h>
int main() {
    float toan, ly, hoa, tong;
    printf("Nhap diem mon Toan: ");
    scanf("%f", &toan);
    printf("Nhap diem mon Ly: ");
    scanf("%f", &ly);
    printf("Nhap diem mon Hoa: ");
    scanf("%f", &hoa);
    tong = (toan * 3 + ly * 2 + hoa) / 6;
    printf("diem trung binh la : %.2f\n", tong);
    return 0;
}