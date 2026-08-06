#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <float.h>

void menu();
void chucNang1();
void chucNang2();
void chucNang3();
void chucNang4();
void chucNang5();
int main(void) {
    int chon;
    do {
        menu();
        printf(">> Xin moi chon chuc nang (1-6): ");
        scanf("%d", &chon);

        switch (chon) {
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
                chucNang5();
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

void menu() {
    printf("+-----------------------------------------------------------+\n");
    printf("|             MENU CHUONG TRINH LAP 6                       |\n");
    printf("+-----------------------------------------------------------+\n");
    printf("| 1. Tinh trung binh cong cua cac so chia het cho 3 va 5    |\n");
    printf("| 2. Tim gia tri Lon nhat va Nho nhat trong Mang            |\n");
    printf("| 3. Sap xep Mang theo thu tu Giam dan                      |\n");
    printf("| 4. Ma tran binh phuong (Mang 2 chieu)                     |\n");
    printf("| 5. Loc va xuat vi tri cac So le trong Ma tran             |\n");
    printf("| 6. Thoat chuong trinh                                     |\n");
    printf("+-----------------------------------------------------------+\n");
}

void chucNang1() {
}

void chucNang2() {
}

void chucNang3() {
}

void chucNang4() {
}

void chucNang5() {
}


