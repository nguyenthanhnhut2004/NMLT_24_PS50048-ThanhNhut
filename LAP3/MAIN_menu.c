#include <stdio.h>
#include <math.h>

int main(void)
{
    int chon;
    do
    {
        printf("=================================\n");
        printf("|   MENU CHUONG TRINH LAB 3     |\n");
        printf("=================================\n");
        printf("| exit. Thoat chuong trinh.     |\n");
        printf("| 1. Tinh hoc luc sinh vien     |\n");
        printf("| 2. Giai phuong trinh bac 2    |\n");
        printf("| 3. Tinh tien dien             |\n");
        printf("=================================\n");
        printf("Ban hay chon chuc nang (0 - 3): ");
        scanf("%d", &chon);

        switch (chon)
        {
        case 0:
            printf("Chuc nang 0: 0. Thoat chuong trinh.\n");
             printf("Da Thoat chuong trinh thanh cong");
            break;

        case 1:
        {
            float diem;
            printf("Chuc nang 1: 1. Tinh hoc luc sinh vien.\n");
            printf("Nhap diem trung binh cua sinh vien: ");
            scanf("%f", &diem);

            if (diem > 9)
            {
                printf("Hoc luc xuat sac\n");
            }
            else if (diem > 8)
            {
                printf("Hoc luc gioi\n");
            }
            else if (diem > 6.5)
            {
                printf("Hoc luc kha\n");
            }
            else if (diem > 5)
            {
                printf("Hoc luc trung binh\n");
            }
            else
            {
                printf("Hoc luc yeu\n");
            }
            break;
        }

        case 2:
        {
            float a, b, c;
            float x1, x2, delta;
            printf("Chuc nang 2: 2. Giai phuong trinh bac 2.\n");
            printf("nhap he so a: ");
            scanf("%f", &a);
            printf("nhap he so b: ");
            scanf("%f", &b);
            printf("nhap he so c: ");
            scanf("%f", &c);

            if (a == 0)
            {
                printf("a = 0, loi: neu a = 0 thi phuong trinh bac 2 se tro thanh phuong trinh bac 1\n");
            }
            else
            {
                delta = b * b - 4 * a * c;
                printf("delta = %.2f\n", delta);

                if (delta < 0)
                {
                    printf("phuong trinh vo nghiem\n");
                }
                else if (delta == 0)
                {
                    x1 = -b / (2 * a);
                    printf("phuong trinh co nghiem kep: x1 = x2 = %.2f\n", x1);
                }
                else
                {
                    x1 = (-b + sqrt(delta)) / (2 * a);
                    x2 = (-b - sqrt(delta)) / (2 * a);
                    printf("phuong trinh co 2 nghiem phan biet: x1 = %.2f, x2 = %.2f\n", x1, x2);
                }
            }
            break;
        }

        case 3:
        {
            float KWH, TongTien;
            printf("Chuc nang 3: 3. Tinh tien dien.\n");
            printf("nhap so KWH: ");
            scanf("%f", &KWH);

            if (KWH > 0 && KWH <= 50)
            {
                TongTien = KWH * 1678;
                printf("Tong tien dien la: %.2f dong\n", TongTien);
            }
            else if (KWH > 50 && KWH <= 100)
            {
                TongTien = KWH * 1734;
                printf("Tong tien dien la: %.2f dong\n", TongTien);
            }
            else if (KWH > 100 && KWH <= 200)
            {
                TongTien = KWH * 2014;
                printf("Tong tien dien la: %.2f dong\n", TongTien);
            }
            else if (KWH > 200 && KWH <= 300)
            {
                TongTien = KWH * 2536;
                printf("Tong tien dien la: %.2f dong\n", TongTien);
            }
            else if (KWH > 300 && KWH <= 400)
            {
                TongTien = KWH * 2834;
                printf("Tong tien dien la: %.2f dong\n", TongTien);
            }
            else
            {
                TongTien = KWH * 2927;
                printf("Tong tien dien la: %.2f dong\n", TongTien);
            }
            break;
        }

        default:
            printf("vui long chon chuc nang 0 - 3\n");
            break;
        }
    } while (chon != 0);
    return 0;
}