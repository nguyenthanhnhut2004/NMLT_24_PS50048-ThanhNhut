#include <stdio.h>

void menu(void);
void chucNang1(void);
void chucNang2(void);
void chucNang3(void);
void chucNang4(void);

int main() {
    int chon;

    do {
        menu();
        printf("\nBan chon chuc nang (1-5): ");
        scanf("%d", &chon);
        while (getchar() != '\n') {
        }

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
                printf("\nTam biet!\n");
                break;
            default:
                printf("\nVui long chon tu 1 den 5.\n");
                break;
        }
    } while (chon != 5);

    return 0;
}

void menu(void) {
    printf("+---------------------------------------------------+\n");
    printf("|             MENU CHUONG TRINH LAB 7               |\n");
    printf("+---------------------------------------------------+\n");
    printf("| 1. Dem Nguyen am va Phu am trong chuoi           |\n");
    printf("| 2. Dang nhap he thong (User & Password)          |\n");
    printf("| 3. Sap xep danh sach Chuoi theo thu tu Alphabet  |\n");
    printf("| 4. Chuyen doi so Thap phan sang Nhi phan (Chuoi) |\n");
    printf("| 5. Thoat chuong trinh                             |\n");
    printf("+---------------------------------------------------+\n");
}

void chucNang1(void) {
    
}

void chucNang2(void) {
    
}

void chucNang3(void) {
    
}
void chucNang4(void) {
    
}
void chucNang5(void) {

}