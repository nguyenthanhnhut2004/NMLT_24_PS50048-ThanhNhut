#include <stdio.h>
#include <math.h>

int main()
{
    int chon;

    do
    {
        printf("|======================================|\n");
        printf("|        MENU CHUONG TRINH ASM 1       |\n");
        printf("|======================================|\n");
        printf("| 1:KIEM TRA SO NGUYEN                 |\n");
        printf("| 2:TIM UOC CHUNG VA BOI SO CUA 2 SO   |\n");
        printf("| 3:CHUONG TRINH TINH TIEN QUAN KARAOKE|\n");
        printf("| 4:TINH TIEN DIEN                     |\n");
        printf("| 5:TINH LAI XUAT VAY NGAN HANG TRA GOP|\n");
        printf("| 6:SAP XEP THONG TIN SINH VIEN        |\n");
        printf("| 7:CHUONG TRINH TINH TOAN PHAN SO     |\n");
        printf("| 8:THOAT CHUONG TRINH                 |\n");
        printf("|======================================|\n");
        printf("Vui long chon chuc nang tu 1 den 8\n");
        scanf("%d", &chon);

        switch (chon)
        {
        case 1:
            printf("\nBan da chon chuc nang 1\n");
            printf("Kiem Tra so Nguyen\n");
            break;
        case 2:
            printf("\nBan da chon chuc nang 2\n");
            printf("Tim Uoc Chung va Boi So cua 2 so\n");
            break;
        case 3:
            printf("\nBan da chon chuc nang 3\n");
            printf("Chuong trinh tinh tien quan karaoke\n");
            break;
        case 4:
            printf("\nBan da chon chuc nang 4\n");
            printf("Tinh tien dien\n");
            break;
        case 5:
            printf("\nBan da chon chuc nang 5\n");
            printf("Tinh lai xuat vay ngan hang tra gop\n");
            break;
        case 6:
            printf("\nBan da chon chuc nang 6\n");
            printf("Sap xep thong tin sinh vien\n");
            break;
        case 7:
            printf("\nBan da chon chuc nang 7\n");
            printf("Chuong trinh tinh toan phan so\n");
            break;
        case 8:
            printf("\nBan da chon chuc nang 8\n");
            printf("Thoat chuong trinh\n");
            break;
        default:
            printf("\nLua chon khong hop le!\n");
            break;
        }
    } while (chon != 8);

    return 0;
}
