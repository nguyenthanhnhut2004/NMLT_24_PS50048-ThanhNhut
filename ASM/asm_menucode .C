#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void chucNang1(void)
{
    float x;

    printf("\nBan chon chuc nang 1: Kiem tra so nguyen\n");
    printf("Nhap mot so: ");
    scanf("%f", &x);

    if (x == (int)x)
        printf("Day la so nguyen.\n");
    else
        printf("Day khong phai la so nguyen.\n");
}

void chucNang2(void)
{
    int a, b, c, d;

    printf("\nBan chon chuc nang 2: Tim uoc chung va boi chung\n");
    printf("Nhap hai so nguyen a va b: ");
    scanf("%d %d", &a, &b);

    c = a;
    d = b;

    while (c != d)
    {
        if (c > d)
            c = c - d;
        else
            d = d - c;
    }

    printf("Uoc chung lon nhat: %d\n", c);
    printf("Boi chung nho nhat: %d\n", (a * b) / c);
}

void chucNang3(void)
{
    int gio;
    float tong;

    printf("\nBan chon chuc nang 3: Tinh tien karaoke\n");
    printf("Nhap so gio hat: ");
    scanf("%d", &gio);

    if (gio <= 3)
        tong = gio * 150000;
    else
        tong = 3 * 150000 + (gio - 3) * 120000;

    printf("Tong tien karaoke: %.0f dong\n", tong);
}

void chucNang4(void)
{
    float soKwh, tong;

    printf("\nBan chon chuc nang 4: Tinh tien dien\n");
    printf("Nhap so kWh: ");
    scanf("%f", &soKwh);

    if (soKwh <= 50)
        tong = soKwh * 1678;
    else if (soKwh <= 100)
        tong = 50 * 1678 + (soKwh - 50) * 1734;
    else
        tong = 50 * 1678 + 50 * 1734 + (soKwh - 100) * 2014;

    printf("Tong tien dien: %.0f dong\n", tong);
}

void chucNang5(void)
{
    float soTien, tiGia, ketQua;

    printf("\nBan chon chuc nang 5: Doi tien\n");
    printf("Nhap so tien VND: ");
    scanf("%f", &soTien);
    printf("Nhap ty gia (1 USD = ? VND): ");
    scanf("%f", &tiGia);

    ketQua = soTien / tiGia;
    printf("So tien quy doi: %.2f USD\n", ketQua);
}

void chucNang6(void)
{
    float soTienGui, laiSuat, thang, lai;

    printf("\nBan chon chuc nang 6: Tinh lai suat ngan hang\n");
    printf("Nhap so tien gui: ");
    scanf("%f", &soTienGui);
    printf("Nhap lai suat %%/nam: ");
    scanf("%f", &laiSuat);
    printf("Nhap so thang gui: ");
    scanf("%f", &thang);

    lai = soTienGui * laiSuat * thang / (100 * 12);
    printf("Tien lai: %.2f dong\n", lai);
}

void chucNang7(void)
{
    float soTienVay, laiSuat, thang, phaiTra;

    printf("\nBan chon chuc nang 7: Vay tien mua xe\n");
    printf("Nhap so tien vay: ");
    scanf("%f", &soTienVay);
    printf("Nhap lai suat %%/nam: ");
    scanf("%f", &laiSuat);
    printf("Nhap so thang vay: ");
    scanf("%f", &thang);

    phaiTra = soTienVay * (1 + laiSuat * thang / (100 * 12)) / thang;
    printf("Tien phai tra hang thang: %.2f dong\n", phaiTra);
}

void chucNang8(void)
{
    int mssv1, mssv2, mssv3;
    float diem1, diem2, diem3;
    int tamMssv;
    float tamDiem;

    printf("\nBan chon chuc nang 8: Sap xep thong tin sinh vien\n");
    printf("Nhap MSSV va diem cua sinh vien 1: ");
    scanf("%d %f", &mssv1, &diem1);
    printf("Nhap MSSV va diem cua sinh vien 2: ");
    scanf("%d %f", &mssv2, &diem2);
    printf("Nhap MSSV va diem cua sinh vien 3: ");
    scanf("%d %f", &mssv3, &diem3);

    if (diem1 < diem2)
    {
        tamMssv = mssv1;
        tamDiem = diem1;
        mssv1 = mssv2;
        diem1 = diem2;
        mssv2 = tamMssv;
        diem2 = tamDiem;
    }

    if (diem1 < diem3)
    {
        tamMssv = mssv1;
        tamDiem = diem1;
        mssv1 = mssv3;
        diem1 = diem3;
        mssv3 = tamMssv;
        diem3 = tamDiem;
    }

    if (diem2 < diem3)
    {
        tamMssv = mssv2;
        tamDiem = diem2;
        mssv2 = mssv3;
        diem2 = diem3;
        mssv3 = tamMssv;
        diem3 = tamDiem;
    }

    printf("Danh sach sau khi sap xep theo diem giam dan:\n");
    printf("1. MSSV %d - Diem %.2f\n", mssv1, diem1);
    printf("2. MSSV %d - Diem %.2f\n", mssv2, diem2);
    printf("3. MSSV %d - Diem %.2f\n", mssv3, diem3);
}

void chucNang9(void)
{
    int soDoan, soMay;

    printf("\nBan chon chuc nang 9: Game FPOLY-LOTT\n");
    printf("Nhap mot so tu 1 den 100: ");
    scanf("%d", &soDoan);

    srand((unsigned int)time(NULL));
    soMay = rand() % 100 + 1;

    printf("So may man la: %d\n", soMay);

    if (soDoan == soMay)
        printf("Chuc mung ban da trung thuong!\n");
    else
        printf("Chuc ban may man lan sau!\n");
}

int main(void)
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
            chucNang6();
            break;
        case 7:
            chucNang7();
            break;
        case 8:
            chucNang8();
            break;
        case 9:
            chucNang9();
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
