#include <stdio.h>

int main() {
    char mssv[20];
    char hoTen[50];
    float toan, ly, hoa, diemTrungBinh;

    // Nhap Ma so sinh vien
    printf("Nhap Ma so sinh vien: ");
    scanf("%s", mssv);

    // Nhap Ho va Ten (meo [^\n] de doc duoc ca dau cach)
    printf("Nhap Ho va Ten: ");
    scanf(" %[^\n]", hoTen); // Luu y co 1 khoang trang truoc %[^ \n] de xoa ky tu Enter truoc do

    // Nhap cac cot diem
    printf("Nhap diem Toan: ");
    scanf("%f", &toan);
    printf("Nhap diem Ly: ");
    scanf("%f", &ly);
    printf("Nhap diem Hoa: ");
    scanf("%f", &hoa);

    // Tinh diem trung binh
    diemTrungBinh = (toan * 2 + ly + hoa) / 4;

    // Xuat ket qua theo dung mau
    printf("\n====================================\n");
    printf("FPT Polytecnic Thanh pho Ho chi MInh\n");
    printf("====================================\n");
    printf("\nMa so sinh vien: %s\n", mssv);
    printf("Ho Va Ten: %s\n", hoTen);
    printf("Diem Trung Binh: %.2f\n", diemTrungBinh);

    return 0;
}