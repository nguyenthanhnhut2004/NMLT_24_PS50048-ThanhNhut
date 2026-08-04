#include <stdio.h>
#include <stdbool.h>
#include <math.h>
void menu();
void chucNang1();
void chucNang2();
void chucNang3();
void chucNang4();
int soLonNhat(int a, int b, int c);
bool kiemTraNamNhuan(int nam);
void swap(int *a, int *b);
const char* checkTriangle(float a, float b, float c);
int main(){
    int chon;
    do
    {
        menu();
        printf(">> Xin mời chọn chức năng (1-5): ");
        scanf("%d",&chon);
        switch (chon)
        {
        case 1:
            chucNang1();
            break;
        case 2:
            chucNang2();
            break;
        case 3:
            chucNang3();
            break;
        case 4:
            chucNang4();
            break;
        case 5:
            printf("Tam biet!");
            break;
        default:
            printf("Ban phai chon chuc nang tu 1 - 5\n");
            break;
        }
    } while (chon != 5);
    
    return 0;
}

void menu(){
    printf("+---------------------------------------------------+\n");
    printf("|             MENU CHƯƠNG TRÌNH LAB 6               |\n");
    printf("+---------------------------------------------------+\n");
    printf("| 1. Tinh trung binh tong so chia het cho 3 va 5    |\n");
    printf("| 2. Tim gia tri Lon nhat và Nho nhat trong mang    |\n");
    printf("| 3. Sap xep mang theo thu tu tang dan              |\n");
    printf("| 4. Ma tran binh phuong ( mang 2 chieu)            |\n");
    printf("| 5. Loc va xuat vi tri cac so le trong Ma Tran     |\n");
    printf("| 6. Thoat Chuong Trinh                             |\n");
    printf("+---------------------------------------------------+\n");
}

void chucNang1(){
   
}


void chucNang2(){
   
}


void chucNang3(){
   


}

void chucNang4 (){

}
