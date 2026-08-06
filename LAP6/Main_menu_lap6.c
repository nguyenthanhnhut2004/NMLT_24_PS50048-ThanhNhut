#include <stdio.h>
#include <stdbool.h>
#include <float.h>

// Khai bao cac ham chuc nang
void menu();
void chucNang1();
void chucNang2();
void chucNang3();
void chucNang4();
void chucNang5();

// Khai bao cac ham ho tro
float Tinhtrungbinhcong(int a[], int n);
void TimMaxMin(int a[], int n);
void sapXepGiamDan(int a[], int n);

int main()
{
    int chon;
    do
    {
        menu();
        printf(">> Xin moi chon chuc nang (1-6): ");
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

void menu()
{
    printf("\n+---------------------------------------------------+\n");
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

// Chuc nang 1: Tinh trung binh tong so chia het cho 3 va 5
void chucNang1()
{
    int n;
    int a[100];

    printf("\n--- CHUC NANG 1: TINH TBC SO CHIA HET CHO 3 VA 5 ---\n");
    printf("Nhap so phan tu cua mang (n > 0): ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    float tbc = Tinhtrungbinhcong(a, n);
    if (tbc == -FLT_MAX)
    {
        printf("Khong co so nao chia het cho ca 3 va 5 trong mang.\n");
    }
    else
    {
        printf("Trung binh cong cac so chia het cho ca 3 va 5: %.2f\n", tbc);
    }
}

float Tinhtrungbinhcong(int a[], int n)
{
    int tong = 0;
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 3 == 0 && a[i] % 5 == 0)
        {
            tong += a[i];
            dem++;
        }
    }
    if (dem == 0)
    {
        return -FLT_MAX;
    }
    return (float)tong / dem;
}

// Chuc nang 2: Tim gia tri Lon nhat va Nho nhat trong mang
void chucNang2()
{
    int n;
    int a[100];

    printf("\n--- CHUC NANG 2: TIM MAX VA MIN TRONG MANG ---\n");
    printf("Nhap so phan tu cua mang (n > 0): ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    TimMaxMin(a, n);
}

void TimMaxMin(int a[], int n)
{
    if (n <= 0) return;
    int min = a[0];
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("Gia tri nho nhat (Min) = %d\n", min);
    printf("Gia tri lon nhat (Max) = %d\n", max);
}

// Chuc nang 3: Sap xep mang theo thu tu giam dan
void chucNang3()
{
    int n;
    int a[100];

    printf("\n--- CHUC NANG 3: SAP XEP MANG GIAM DAN ---\n");
    printf("Nhap so phan tu cua mang (n > 0): ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    sapXepGiamDan(a, n);

    printf("Mang sau khi sap xep giam dan: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void sapXepGiamDan(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

// Chuc nang 4: Ma tran binh phuong (mang 2 chieu)
void chucNang4()
{
    int r, c;
    int a[50][50];

    printf("\n--- CHUC NANG 4: MA TRAN BINH PHUONG ---\n");
    printf("Nhap so hang: ");
    scanf("%d", &r);
    printf("Nhap so cot: ");
    scanf("%d", &c);

    printf("Nhap cac phan tu cua ma tran:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nMa tran ban dau:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%5d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nMa tran binh phuong:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%5d ", a[i][j] * a[i][j]);
        }
        printf("\n");
    }
}

// Chuc nang 5: Loc va xuat vi tri cac so le trong Ma Tran
void chucNang5()
{
    int r, c;
    int a[50][50];

    printf("\n--- CHUC NANG 5: LOC VA XUAT VI TRI SO LE TRONG MA TRAN ---\n");
    printf("Nhap so hang: ");
    scanf("%d", &r);
    printf("Nhap so cot: ");
    scanf("%d", &c);

    printf("Nhap cac phan tu cua ma tran:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nCac so le trong ma tran va vi tri (hang, cot):\n");
    int dem = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] % 2 != 0)
            {
                printf("Gia tri %d tai vi tri a[%d][%d]\n", a[i][j], i, j);
                dem++;
            }
        }
    }
    if (dem == 0)
    {
        printf("Khong co so le nao trong ma tran.\n");
    }
}
