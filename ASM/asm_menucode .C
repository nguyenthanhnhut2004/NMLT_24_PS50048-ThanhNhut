#include <stdio.h>

int main()
{
    int chon;

    do
    {
        printf("|======================================|\n");
        printf("|        MENU CHUONG TRINH ASM 1       |\n");
        printf("|======================================|\n");
        printf("| 1: KIEM TRA SO NGUYEN               |\n");
        printf("| 2: TIM UOC CHUNG VA BOI CHUNG      |\n");
        printf("| 3: TINH TIEN KARAOKE               |\n");
        printf("| 4: TINH TIEN DIEN                  |\n");
        printf("| 5: DOI TIEN                        |\n");
        printf("| 6: TINH LAI XUAT NGAN HANG         |\n");
        printf("| 7: VAY TIEN MUA XE                 |\n");
        printf("| 8: SAP XEP THONG TIN SINH VIEN     |\n");
        printf("| 9: GAME FPOLY-LOTT                 |\n");
        printf("| 10: THOAT CHUONG TRINH             |\n");
        printf("|======================================|\n");
        printf("Vui long chon chuc nang tu 1 den 10: ");
        scanf("%d", &chon);

        switch (chon)
        {
        case 1:
            printf("\nBan chon chuc nang 1: Kiem tra so nguyen\n");
            break;
        case 2:
            printf("\nBan chon chuc nang 2: Tim uoc chung va boi chung\n");
            break;
        case 3:
            printf("\nBan chon chuc nang 3: Tinh tien karaoke\n");
            break;
        case 4:
            printf("\nBan chon chuc nang 4: Tinh tien dien\n");
            break;
        case 5:
            printf("\nBan chon chuc nang 5: Doi tien\n");
            break;
        case 6:
            printf("\nBan chon chuc nang 6: Tinh lai suat ngan hang\n");
            break;
        case 7:
            printf("\nBan chon chuc nang 7: Vay tien mua xe\n");
            break;
        case 8:
            printf("\nBan chon chuc nang 8: Sap xep thong tin sinh vien\n");
            break;
        case 9:
            printf("\nBan chon chuc nang 9: Game FPOLY-LOTT\n");
            break;
        case 10:
            printf("\nThoat chuong trinh. Cam on!\n");
            break;
        default:
            printf("\nLua chon khong hop le!\n");
            break;
        }
    } while (chon != 10);

    return 0;
}
