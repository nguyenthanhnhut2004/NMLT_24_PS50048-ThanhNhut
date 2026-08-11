#include <ctype.h>
#include <stdio.h>
#include <string.h>

void menu(void);
void chucNang1(void);
void chucNang2(void);
void chucNang3(void);
void chucNang4(void);
void demNguyenAmPhuAm(void);

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
    printf("| 1. Dem Nguyen am va Phu am trong chuoi            |\n");
    printf("| 2. Dang nhap he thong (User & Password)           |\n");
    printf("| 3. Sap xep danh sach Chuoi theo thu tu Alphabet   |\n");
    printf("| 4. Chuyen doi so Thap phan sang Nhi phan (Chuoi)  |\n");
    printf("| 5. Thoat chuong trinh                             |\n");
    printf("+---------------------------------------------------+\n");
}

void demNguyenAmPhuAm(void) {
    char s[100];
    int i;
    int demNA = 0, demPA = 0;

    printf("\nNhap chuoi ky tu: ");
    if (fgets(s, sizeof(s), stdin) == NULL) {
        printf("Khong co du lieu de xu ly.\n");
        return;
    }

    for (i = 0; s[i] != '\0'; i++) {
        char c = tolower((unsigned char)s[i]);

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            demNA++;
        } else if (isalpha((unsigned char)c)) {
            demPA++;
        }
    }

    printf("So luong nguyen am: %d\n", demNA);
    printf("So luong phu am: %d\n", demPA);
}

void chucNang1(void) {
    demNguyenAmPhuAm();
}

void chucNang2(void) {
    char userSys[] = "admin";
    char passSys[] = "123456";
    char user[50];
    char pass[50];

    printf("\nNhap username: ");
    if (fgets(user, sizeof(user), stdin) == NULL) {
        printf("Khong co du lieu de xu ly.\n");
        return;
    }
    user[strcspn(user, "\n")] = '\0';

    printf("Nhap password: ");
    if (fgets(pass, sizeof(pass), stdin) == NULL) {
        printf("Khong co du lieu de xu ly.\n");
        return;
    }
    pass[strcspn(pass, "\n")] = '\0';

    if (strcmp(user, userSys) == 0 && strcmp(pass, passSys) == 0) {
        printf("Dang nhap thanh cong!\n");
    } else {
        printf("Username hoac Password khong chinh xac!\n");
    }
}

void chucNang3(void) {
    char s[5][50];
    char temp[50];
    int i, j;

    printf("\nNhap 5 chuoi/ten: \n");
    for (i = 0; i < 5; i++) {
        printf("Chuoi %d: ", i + 1);
        if (fgets(s[i], sizeof(s[i]), stdin) == NULL) {
            printf("Khong co du lieu de xu ly.\n");
            return;
        }
        s[i][strcspn(s[i], "\n")] = '\0';
    }

    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (strcmp(s[i], s[j]) > 0) {
                strcpy(temp, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], temp);
            }
        }
    }

    printf("\nDanh sach sau khi sap xep tang dan theo Alphabet:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", s[i]);
    }
}

void chucNang4(void) {
    int n;
    char nhiPhan[50];
    int i = 0, j;

    printf("\nNhap so thap phan nguyen duong: ");
    scanf("%d", &n);
    while (getchar() != '\n') {
    }

    if (n < 0) {
        printf("Vui long nhap so nguyen duong!\n");
        return;
    }

    if (n == 0) {
        printf("So nhi phan: 0\n");
        return;
    }

    while (n > 0) {
        nhiPhan[i++] = (n % 2 == 0) ? '0' : '1';
        n /= 2;
    }
    nhiPhan[i] = '\0';

    for (j = 0; j < i / 2; j++) {
        char temp = nhiPhan[j];
        nhiPhan[j] = nhiPhan[i - 1 - j];
        nhiPhan[i - 1 - j] = temp;
    }

    printf("So nhi phan: %s\n", nhiPhan);
}
