#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <float.h>
float tinhTrungBinhCong(int a[], int n);
void timMaxMin(int a[], int n);

void menu();
void chucNang1();
void chucNang2();
void chucNang3();
void chucNang4();
void chucNang5();
int main(void) {
    int chon;
    do {
        menu();
        printf(">> Xin moi chon chuc nang (1-6): ");
        scanf("%d", &chon);

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

void menu() {
    printf("+-----------------------------------------------------------+\n");
    printf("|             MENU CHUONG TRINH LAP 6                       |\n");
    printf("+-----------------------------------------------------------+\n");
    printf("| 1. Tinh trung binh cong cua cac so chia het cho 3 va 5    |\n");
    printf("| 2. Tim gia tri Lon nhat va Nho nhat trong Mang            |\n");
    printf("| 3. Sap xep Mang theo thu tu Giam dan                      |\n");
    printf("| 4. Ma tran binh phuong (Mang 2 chieu)                     |\n");
    printf("| 5. Loc va xuat vi tri cac So le trong Ma tran             |\n");
    printf("| 6. Thoat chuong trinh                                     |\n");
    printf("+-----------------------------------------------------------+\n");
}

void chucNang1(){
    int n;
    int a[10];
    printf("Nhap n: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Nhap A[%d]= ",i);
        scanf("%d",&a[i]);
    }
    float tbc = tinhTrungBinhCong(a,n);
    if(tbc == -FLT_MAX){
        printf("Khong co so chia het cho 3 va 5\n");
    }else{
        printf("Trung binh cong cua mang: %.2f\n",tbc);
    }
}

void chucNang2(){
    int n;
    int a[10];
    printf("Nhap n: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Nhap A[%d]= ",i);
        scanf("%d",&a[i]);
    }
    timMaxMin(a,n);
}


void chucNang3() {
}

void chucNang4() {
}

void chucNang5() {
}

float tinhTrungBinhCong(int a[], int n){
    int sum = 0;
    int count = 0;
    for(int i=0;i<n;i++){
        if(a[i]%3==0 && a[i]%5==0){
            sum += a[i];
            count++;
        }
    }
    if(count == 0){
        return -FLT_MAX;
    }else{
        return (float)sum/count;
    }
}

void timMaxMin(int a[], int n){
    //4 6 3 8
    int min,max;
    min=a[0]; //4
    max=a[0]; //4
    for(int i=1;i<n;i++){
        if(min>a[i]){   //1   4 > 6  
                        //2.  4 > 3   min = 3
            min=a[i];
        }
        if(max<a[i]){   //1   4 < 6. max = 6
                        //2   6 < 3
            max=a[i]; 
        }
    }
    printf("Min = %d\t Max = %d\n",min,max);
}