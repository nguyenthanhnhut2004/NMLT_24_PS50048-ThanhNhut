#include <stdio.h>
#include <stdlib.h>

void menu(void);
void Chucnang1(void);
void Chucnang2(void);
void Chucnang3(void);
void Chucnang4(void);

int main(void)
{
    int chon;

    do
    {
        menu();
        printf("\nBan chon chuc nang (1-5): ");
        scanf("%d", &chon);

        switch (chon)
        {
        case 1:
            Chucnang1();
            break;
        case 2:
            Chucnang2();
            break;
        case 3:
            Chucnang3();
            break;
        case 4:
            Chucnang4();
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

void menu(void)
{
    printf("+---------------------------------------------------+\n");
    printf("|         HỆ THỐNG QUẢN LÝ SINH VIÊN (LAB 8)        |\n");
    printf("+---------------------------------------------------+\n");
    printf("| 1. Nhập và Xuất danh sách sinh viên               |\n");
    printf("| 2. Sắp xếp sinh viên theo điểm TB tăng dần        |\n");
    printf("| 3. Tìm kiếm sinh viên theo Mã số sinh viên (MSSV)  |\n");
    printf("| 4. Xuất danh sách sinh viên đạt Học bổng (>= 8.0) |\n");
    printf("| 5. Thoát chương trình                             |\n");
    printf("+---------------------------------------------------+\n");
}

void Chucnang1(void)
{
    printf("\n[Chuc nang 1] Chua duoc phat trien.\n");
}

void Chucnang2(void)
{
    printf("\n[Chuc nang 2] Chua duoc phat trien.\n");
}

void Chucnang3(void)
{
    printf("\n[Chuc nang 3] Chua duoc phat trien.\n");
}

void Chucnang4(void)
{
    printf("\n[Chuc nang 4] Chua duoc phat trien.\n");
}
