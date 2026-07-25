#include <stdio.h>
int main() {
    int chon;

    do {
        printf("+---------------------------------------------------+\n");
        printf("|             MENU CHUONG TRINH LAB 4               |\n");
        printf("+---------------------------------------------------+\n");
        printf("| 1. Tinh trung binh tong cac so chia het cho 2     |\n");
        printf("| 2. Kiem tra So nguyen to                          |\n");
        printf("| 3. Kiem tra So chinh phuong                       |\n");
        printf("| 4. Thoat chuong trinh                             |\n");
        printf("+---------------------------------------------------+\n");
        printf(">> Xin moi chon chuc nang 1-4: ");
        scanf("%d", &chon);

        switch (chon) {
            case 1: {
                printf("ban da chon chuc nang 1: Tinh trung binh tong cac so chia 2\n ");
                int min, max, i;
               float tong ;
                int dem;
                float trungBinh;
                tong = 0;
                dem = 0; 
                i = 0; 
                printf("Nhap min: ");
                scanf("%d", &min);
                printf("Nhap max: ");
                scanf("%d", &max);

                if (min > max) {
                    printf("Loi: min khong duoc lon hon max. Vui long nhap lai!\n");
                    break;
                }

                for (i = min; i <= max; i++) {
                    if (i % 2 == 0) {
                        tong += i;
                        dem++;
                    }
                }

                if (dem == 0) {
                    printf("Khong co so nao chia het cho 2 trong khoang [%d, %d].\n", min, max);
                } else {
                    trungBinh = (float)tong / dem;
                    printf("Tong cac so chia het cho 2: %2f\n", tong);
                    printf("So luong cac so: %d\n", dem);
                    printf("Trung binh cong: %.2f\n", trungBinh);
                }
                break;
            }
            case 2: {
                int x, i;
                int nguyento;

                printf("\nBan da chon chuc nang 2: Kiem tra So nguyen to\n");
                printf("Nhap vao mot so nguyen x: ");
                scanf("%d", &x);

                if (x < 2) {
                    printf("%d khong phai la so nguyen to.\n", x);
                    break;
                }

                for (i = 2; i <= x - 1; i++) {
                    if (x % i == 0) {
                        nguyento = 0;
                        break;
                    }
                }

                if (nguyento == 1) {
                    printf("%d la so nguyen to.\n", x);
                } else {
                    printf("%d khong phai la so nguyen to.\n", x);
                }
                break;
            }
            case 3: {
                printf("\nBan da chon chuc nang 3: Kiem tra So chinh phuong\n");
                int x, i;
                int laChinhPhuong = 0;
                printf("Nhap vao mot so nguyen x: ");
                scanf("%d", &x);

                for (i = 1; i <= x; i++) {
                    if (i * i == x) {
                        laChinhPhuong = 1;
                        break;
                    }
                }

                if (laChinhPhuong == 1) {
                    printf("%d la so chinh phuong.\n", x);
                } else {
                    printf("%d khong phai la so chinh phuong.\n", x);
                }
                break;
            }
            case 4:
                printf("\nThoat chuong trinh.\n");
                printf("Bai Lap cua sinh vien PS50048\n");
                break;
            default:
                printf("vui long chon lai tu 1-4\n");
                break;
        }
    } while (chon != 4);

    return 0;
}