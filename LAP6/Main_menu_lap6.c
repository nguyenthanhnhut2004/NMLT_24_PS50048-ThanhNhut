#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <float.h>

void menu();
void chucNang1();
void chucNang2();
void chucNang3();
void chucNang4();
float Tinhtrungbinhcong(int a[], int n);
int soLonNhat(int a, int b, int c);
bool kiemTraNamNhuan(int nam);
void swap(int *a, int *b);
const char* checkTriangle(float a, float b, float c);

int main(){
    int chon;
    do
    {
        menu();
        printf(">> Xin mời chọn chức năng (1-6): ");
        scanf("%d", &chon);
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
                printf("Chuc nang 5 chua duoc hoan thanh.\n");
                break;
            case 6:
                printf("Tam biet!\n");
                break;
            default:
                printf("Ban phai chon chuc nang tu 1 - 6\n");
                break;
        }
    } while (chon != 6);
    
    return 0;
}

void menu(){
    printf("+---------------------------------------------------+\n");
    printf("|             MENU CHUONG TRINH LAB 6               |\n");
    printf("+---------------------------------------------------+\n");
    printf("| 1. Tinh trung binh tong so chia het cho 3 va 5    |\n");
    printf("| 2. Tim gia tri Lon nhat va Nho nhat trong mang     |\n");
    printf("| 3. Sap xep mang theo thu tu giam dan              |\n");
    printf("| 4. Ma tran binh phuong ( mang 2 chieu)            |\n");
    printf("| 5. Loc va xuat vi tri cac so le trong Ma Tran     |\n");
    printf("| 6. Thoat Chuong Trinh                             |\n");
    printf("+---------------------------------------------------+\n");
}

void chucNang1(){
    int n;
    int a[10];

    printf("Nhap so phan tu cua mang (n <= 10): ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    float tbc = Tinhtrungbinhcong(a, n);
    if (tbc == -FLT_MAX) {
        printf("Khong co so nao chia het cho ca 3 va 5\n");
    } else {
        printf("Trung binh cong cac so chia het cho ca 3 va 5: %.2f\n", tbc);
    }
}

float Tinhtrungbinhcong(int a[], int n){
    int tong = 0;
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 3 == 0 && a[i] % 5 == 0) {
            tong += a[i];
            dem++;
        }
    }
    if (dem == 0) {
        return -FLT_MAX;
    }
    return (float)tong / dem;
}

void chucNang2(){
    // TODO: implement function 2
}

void chucNang3(){
    // TODO: implement function 3
}

void chucNang4 (){
    // TODO: implement function 4
}
