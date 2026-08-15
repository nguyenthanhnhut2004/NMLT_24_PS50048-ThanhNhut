#include <stdio.h>
// #include <math.h> khi nào sử dụng đến sqrt mới cần đến thư viện này
void chucNang1();
void chucNang2();
void chucNang3();
void chucNang4();
void chucNang5();
void chucNang6();
int main() {
  int chon;
  do {
    printf("++================================================================="
           "++\n");
    printf("||                 MENU CHUONG TRINH ASSIGNMENT 2                  "
           "||\n");
    printf("++================================================================="
           "++\n");
    printf("||     Chuc nang 0. Thoat chuong trinh                             "
           "||\n");
    printf("||     Chuc nang 1: Kiem tra so nguyen                             "
           "||\n");
    printf("||     Chuc nang 2: Tim uoc so chung va boi so chung cua 2 so      "
           "||\n");
    printf("||     Chuc nang 3: Tinh tien cho quan karaoke                     "
           "||\n");
    printf("||     Chuc nang 4: Tinh tien dien                                 "
           "||\n");
    printf("||     Chuc nang 5: Chuc nang doi tien                             "
           "||\n");
    printf("||     Chuc nang 6: Tinh lay suat vay ngan hang vay tra gop        "
           "||\n");
    printf("||     Chuc nang 7: Vay tien mua xe                                "
           "||\n");
    printf("||     Chuc nang 8: Sap xep thong tin sinh vien                    "
           "||\n");
    printf("||     Chuc nang 9: Xay dung game FPOLY-LOTT                       "
           "||\n");
    printf("||     Chuc nang 10: Chuong trinh tinh toan phan so                "
           "||\n");
    printf("++================================================================="
           "++\n");
    printf(">> Chon chuc nang cua ban (0-10): ");
    scanf("%d", &chon);
    switch (chon) {
    case 0:
      printf("Ban chon chuc 0: Thoat chuong trinh\n");
      printf(">>> Ban da thoat chuong trinh <<\n");
      break;
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
      printf("Ban chon chuc nang 7: Vay tien mua xe\n");
      break;
    case 8:
      printf("Ban chon chuc nang 8: Sap xep thong tin sinh vien\n");
      break;
    case 9:
      printf("Ban chon chuc nang 9: Xay dung game FPOLY-LOTT\n");
      break;
    case 10:
      printf("Ban chon chuc nang 10: Chuong trinh tinh toan phan so\n");
      break;
    default:
      printf(">> Ban phai chon chuc nang tu 0 - 10 <<\n");
      break;
    }
  } while (chon != 0);
  return 0;
}

void chucNang1() {
  float n;
  /*Khai báo n là float vì để nhập số thập phân vào
  để xét điều kiện có phải là số nguyên ko*/

  printf("Ban chon chuc nang 1: Kiem tra so nguyen\n");
  printf("Nhap vao 1 so nguyen tu x: ");
  scanf("%f", &n);
  // Xét điều kiện số nguyên
  if (n == (int)n) {
    printf(">> So %.2f la so nguyen\n", n);
    // Xét điều kiện số nguyên tố
  } else {
    printf(">> So %.2f khong phai la so nguyen\n", n);
  }
  if (n < 2) {
    printf(">> So %.2f khong phai la so nguyen to\n", n);
  } else {
    for (int i = 2; i < n; i++)
      if ((int)n % i == 0) {
        printf(">> So %.2f Khong phai la so nguyen to\n", n);
        goto ketthuc;
      }
    printf(">> So %.2f la so nguyen to\n", n);
  ketthuc:
  }

  // XÉT ĐIỀU KIỆN SỐ CHÍNH PHƯƠNG
  /*if(sqrt(n)==(int)sqrt(n))
  {
  printf(">> So %.2f la so chinh phuong\n",n);
  }
  else
  {
  printf(">> So %.2f khong la so chinh phuong\n",n);
  }*/
  if (n >= 0) {
    for (int i = 2; i < n; i++)
      if (i * i == n) {
        printf(">> So %.2f la so chinh phuong\n", n);
        goto Ketthuc2;
      }
    printf(">> So %.2f khong phai la so chinh phuong\n", n);
  Ketthuc2:
  } else {
    printf(">> So %.2f khong phai la so chinh phuong\n", n);
  }
}

void chucNang2() {
  int a, b, x, y, bcnn, ucln;
  printf("Ban chon chuc nang 2: Tim uoc so chung va boi so chung cua 2 so\n");
  printf("Nhap vao 2 so bat ki: ");
  scanf("%d%d", &x, &y);
  if (x <= 0) {
    printf(">> Ban nhap gia tri khong hop le!\n");
  } else if (y <= 0) {
    printf(">> Ban nhap gia tri khong hop le!\n");
  } else {
    a = x; // khai báo thêm biến phụ để giữ giá trị ban đầu là x và y khi nhập
           // vào để một lát tìm BCNN
    b = y;
    while (a !=
           b) // vòng lặp chạy đến khi nào a==b thì dừng còn a!=b tiép tục chạy
    {
      if (a > b) // do là UCLN và BCNN không âm nên khi a>b thì lấy a-b còn b>a
                 // thì đảo lại b-a trừ cho đến khi a và b bằng nhau và kết quả
                 // cuối là UCLN
      {
        a = a - b;
      } else {
        b = b - a;
      }
    }
    ucln = a; // Hoặc ucln =b vì là vòng lập while đã cho ra UCLN cho nên lúc đó
              // a và b bằng nhau nên gán ucln = a hoặc = b đều được
    bcnn = (x * y) / a; // gán công thức bcnn
    printf(">> UCLN cua 2 so la: %d\n", a);
    printf(">> BCNN cua 2 so la: %d\n", bcnn);
  }
}

void chucNang3() {
  int bd, kt, tongtime, tien;
  printf("Ban chon chuc nang 3: Tinh tien cho quan karaoke\n");
  while (1) {
    printf("Ban hay nhap Thoi gian bat dau va ket thuc: ");
    scanf("%d%d", &bd, &kt);
    if (bd < 12 || kt > 23 || bd >= kt) {
      printf(">> Ban nhap gio vao khong hop le!\n");
      printf(">> Yeu cau nhap lai <<\n");
    } else {
      tongtime = kt - bd;
      if (tongtime <= 3) {
        tien = tongtime * 150000;
        // 150.000 VND là giá tiền của 1 tiếng karaoke
      } else {

        tien = (3 * 150000) + ((tongtime - 3) * 150000 * 0.7);
        // số 3 là 3 giờ đầu; 0.7 là do giảm 30 nên chỉ còn 70% = 0.7
        // tongtime-3 là thời gian mà chơi lố vượt quá 3 giờ và giảm đi 30% giá
        // tiền/
      }
      if (bd >= 14 &&
          bd <= 17) // thgian BẮT ĐẦU từ 14 đến 17 giờ thì giảm 10% tổng tiền
      {
        tien = tien * 0.9;
      }
      printf(">> So tien phai tra trong vong %d gio la: %d VND\n", tongtime,
             tien);
      break;
    }
  }
}

void chucNang4() {
  int kwh, tien;
  printf("Ban chon chuc nang 4: Tinh tien dien\n");
  while (1) {
    printf("Nhap vao so kwh: ");
    scanf("%d", &kwh);
    if (kwh < 0) {
      printf(">> Ban nhap so kwh khong hop le!\n");
      printf(">> Ban hay nhap lai kwh <<\n");
    } else {
      if (kwh >= 0 && kwh <= 50) {
        tien = kwh * 1678;
      } else if (kwh >= 51 && kwh <= 100) {
        tien = (50 * 1678) + ((kwh - 50) * 1734);
      } else if (kwh >= 101 && kwh <= 200) {
        tien = (50 * 1678) + (50 * 1734) + ((kwh - 100) * 2014);
      } else if (kwh >= 201 && kwh <= 300) {
        tien = (50 * 1678) + (50 * 1734) + (100 * 2014) + ((kwh - 200) * 2536);
      } else if (kwh >= 301 && kwh <= 400) {
        tien = (50 * 1678) + (50 * 1734) + (100 * 2014) + (100 * 2536) +
               ((kwh - 300) * 2834);
      } else if (kwh >= 401) {
        tien = (50 * 1678) + (50 * 1734) + (100 * 2014) + (100 * 2536) +
               (100 * 2834) + ((kwh - 400) * 2927);
      }
      printf(">>Tong tien voi %d kwh la: %d VND\n", kwh, tien);
      break;
    }
  }
}

void chucNang5() {
  int tien;
  int menhGia[] = {500000, 200000, 100000, 50000, 20000,
                   10000,  5000,   2000,   1000};
  int soTo[9];
  int i;
  printf("Ban chon chuc nang 5: doi tien\n");
  printf("Nhap so tien can doi: ");
  scanf("%d", &tien);
  while (tien < 0) {
    printf("Vui long nhap lai so tien can doi (>=0)!\n");
    printf("Nhap so tien can doi: ");
    scanf("%d", &tien);
  }
  for (i = 0; i < 9; i++) {
    soTo[i] = tien / menhGia[i]; // Tính số tờ tiền của mỗi mệnh giá
    tien = tien % menhGia[i]; // Cập nhật số tiền còn lại sau khi đổi tờ tiền
                              // của mệnh giá hiện tại
  }
  printf("\n>> Ket qua doi <<\n");
  for (i = 0; i < 9; i++) {
    if (soTo[i] > 0) {
      printf("%3d to %6d vnd\n", soTo[i], menhGia[i]);
    }
  }
  if (tien > 0) {
    printf(">> So tien khong doi duoc la: %d vnd\n", tien);
  }
}

void chucNang6() {
  int tien, laiPhaiTra, gocPhaiTra, soTienPhaiTra;
  int kyHan = 12;
  float laiXuat = 0.05; // Lãi xuất 1 tháng
  printf("Ban chon chuc nang 6: Tinh lay suat vay ngan hang vay tra gop\n");
  printf("Nhap so tien vay: ");
  scanf("%d", &tien);
  printf("+===================================================================="
         "===============+\n");
  printf("| %-6s | %-15s | %-15s | %-18s | %-15s |\n", "Ky Han", "Lai phai tra",
         "Goc phai tra", "So tien phai tra", "So tien con lai");
  printf("+===================================================================="
         "===============+\n");
  gocPhaiTra = tien / kyHan;
  for (int i = 1; i <= kyHan; i++) {
    laiPhaiTra = tien * laiXuat;
    tien = tien - gocPhaiTra;
    soTienPhaiTra = laiPhaiTra + gocPhaiTra;
    printf("| %-6d | %-15d | %-15d | %-18d | %-15d |\n", i, laiPhaiTra,
           gocPhaiTra, soTienPhaiTra, tien);
    printf("+=================================================================="
           "=================+\n");
  }
}

void chucNang7() {
  int phanTramDuocVay = 0.8;
  int tienVay = 500000000 * phanTramDuocVay, kyHan = 12 * 24;
  float laiThang = 7.2 / 12;
  int gocPhaiTra = tienVay / kyHan;

  printf("Tong tien can vay %d \n", tienVay);
  // Tien lai. Tien goc. Tien Phai Tra. Con
  printf("%6s%18s%18s%18s%18s\n", "Thang", "Tien lai", "Goc phai tra",
         "Tien phai tra", "Con lai");
  for (int i = 1; i <= kyHan; i++) {
    // Tien lai. Tien goc. Tien phai tra. Con lai
    int tienLai = tienVay * laiThang;
    tienVay = tienVay - gocPhaiTra;
    printf("%6s%18s%18s%18s%18s\n", "Thang", "Tien lai", "Goc phai tra",
           "Tien phai tra", "Con lai");
  }
}

// struct NgayThang
// {
//     int ngay;
//     int thang;
//     int nam;
// };

// struct SinhVien
// {
//     char maSV[8];
//     char tenSV[30];
//     float diemSV;
//     struct NgayThang ngaySinh;
// } sv1, sv2;
// int main()
// {
//     int n = 3;
//=========================================================================
// Quan ly ds sinh vien 40, 4000
// char maSV1[8];sv1
// char tenSV1[30];
// float diemSV1;

// char maSV2[8];
// char tenSV2[30];
// float diemSV2;

// char dsMaSV[40][8];
// char dstenSV[40][30];
// float dsDiemSV[40];
// Sap xep ds sinh vien theo diem => thay doi vi tri cua dsMaSV, dstenSV

// struct SinhVien sv3;
//=========================================================================
//     struct SinhVien dsSinhVien[40];
//     // nhap du lieu
//     for (int i = 0; i < n; i++)
//     {
//         printf("Nhap ma SV[%d]: ", i);
//         gets(dsSinhVien[i].maSV);
//         printf("Nhap ten SV[%d]: ", i);
//         gets(dsSinhVien[i].tenSV);
//         printf("Nhap diem SV[%d]: ", i);
//         scanf("%f", &dsSinhVien[i].diemSV); // 7.5 enter
//         printf("Nhap ngay thang nam sinh: ");
//         scanf("%d%d%d", &dsSinhVien[i].ngaySinh.ngay,
//               &dsSinhVien[i].ngaySinh.thang,
//               &dsSinhVien[i].ngaySinh.nam);
//         getchar();
//     }

//     sv1 = dsSinhVien[0];
//     dsSinhVien[0] = dsSinhVien[1];
//     dsSinhVien[1] = sv1;

//     printf("Xuat danh sach sinh vien: \n");
//     printf("STT  Ma sinh vien   Ten sinh vien            Diem SV  Ngay
//     sinh\n"); for (int i = 0; i < n; i++)
//     {
//         printf(" %-4d %-14s %-24s %8.2f%2d-%2d-%4d\n",
//                i + 1,
//                dsSinhVien[i].maSV,
//                dsSinhVien[i].tenSV,
//                dsSinhVien[i].diemSV,
//                dsSinhVien[i].ngaySinh.ngay,
//                dsSinhVien[i].ngaySinh.thang,
//                dsSinhVien[i].ngaySinh.nam);
//     }

//     return 0;
// }