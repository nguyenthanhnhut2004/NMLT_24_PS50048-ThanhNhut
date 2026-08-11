#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <float.h>
float tinhTrungBinhCong(int a[], int n);
void timMaxMin(int a[], int n);
void sapXepGiamDan(int a[], int n);
void swap(int *a, int *b);

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
    if(n <= 0 || n > 10){
        printf("So luong phan tu phai tu 1 den 10.\n");
        return;
    }
    for(int i=0;i<n;i++){
        printf("Nhap A[%d]= ",i);
        scanf("%d",&a[i]);
    }
    timMaxMin(a,n);
}

void chucNang3(){
    int n;
    int a[10];
    printf("Nhap n: ");
    scanf("%d",&n);
    if(n <= 0 || n > 10){
        printf("So luong phan tu phai tu 1 den 10.\n");
        return;
    }
    for(int i=0;i<n;i++){
        printf("Nhap A[%d]= ",i);
        scanf("%d",&a[i]);
    }
    sapXepGiamDan(a,n);
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void chucNang4() {
    int m, n;
    int a[10][10];
    printf("Nhap so hang m: ");
    scanf("%d", &m);
    printf("Nhap so cot n: ");
    scanf("%d", &n);
    if(m <= 0 || m > 10 || n <= 0 || n > 10){
        printf("So hang va so cot phai tu 1 den 10.\n");
        return;
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("Nhap A[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nMa tran ban dau:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\nMa tran binh phuong:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d\t", a[i][j] * a[i][j]);
        }
        printf("\n");
    }
}

void chucNang5() {
    int m, n;
    int a[10][10];
    bool found = false;
    printf("Nhap so hang m: ");
    scanf("%d", &m);
    printf("Nhap so cot n: ");
    scanf("%d", &n);
    if(m <= 0 || m > 10 || n <= 0 || n > 10){
        printf("So hang va so cot phai tu 1 den 10.\n");
        return;
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("Nhap A[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nCac so le va vi tri cua chung trong ma tran:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] % 2 != 0){
                printf("A[%d][%d] = %d\n", i, j, a[i][j]);
                found = true;
            }
        }
    }
    if(!found){
        printf("Khong co so le trong ma tran.\n");
    }
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
void sapXepGiamDan(int a[], int n){
    //8 6 4 3.   n=4
    for(int i=0;i<n-1;i++){         //i=3 < 4-1
        for(int j=i+1;j<n;j++){     //j=3 <4
            if(a[i] > a[j]){        //a[2] = 3. a[3] = 4
                swap(&a[i],&a[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
}