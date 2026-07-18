#include <stdio.h>
int main()
{
    int chon;
    do
    {
        printf("+-------------------------------+\n");
        printf("|   MENU CHUONG TRINH LAB 3     |\n");
        printf("+-------------------------------+\n");
        printf("| 0. Thoat chuong trinh.        |\n");
        printf("| 1. Tinh hoc luc sinh vien     |\n");
        printf("| 2. Giai phuong trinh bac 2    |\n");
        printf("| 3. Tinh tien dien             |\n");
        printf("+-------------------------------+\n");
        printf("Ban hay chon chuc nang (0 - 3): ");
        scanf("%d", &chon);
        switch (chon)
        {
        case 0:
            printf("Chuc nang 0: 0. Thoat chuong trinh.\n");

            break;
        case 1:
            printf("Chuc nang 1: 1. Tinh hoc luc sinh vien.\n");
            float diem;
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
        case 2:
            printf("Chuc nang 2: 2. Giai phuong trinh bac 2.\n");
            #include <math.h>
             int a ,b, c;
    float x1, x2, delta;
    printf("nhap he so a:");
    scanf("%d", &a);
    printf("nhap he so b:");
    scanf("%d", &b);
    printf("nhap he so c:");
    scanf("%d", &c);
    delta =b*b - 4*a*c;
    printf("delta = %.2f\n", delta);
    if (delta <0) {
        printf("phuong trinh vo nghiem\n");
    } else if (delta ==0) {
        x1 = -b/(2*a);
        printf("phuong trinh co nghiem kep: x1 = x2 = %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        printf("phuong trinh co 2 nghiem phan biet: x1 = %.2f, x2 = %.2f\n", x1, x2);
    }
            break;
        case 3:
            printf("Chuc nang 3: 3. Tinh tien dien.\n");
            break;
        default:
            printf("vui long chon chuc nang 0 - 3\n");
            break;
        }
    }

    while (chon != 0); // 0!= 0
    return 0;
}