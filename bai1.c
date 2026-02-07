/******************************************************************************
 * Họ và tên: [Đặng Đình ĐỨc]
 * MSSV:      [PS48675]
 * Lớp:       [CS21302]]
 *****************************************************************************/

//  BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả của trung bình tổng các số chia hết cho 3 trong mảng 


#include <stdio.h>

int main() {
    int n;
    int i;

    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    int mang[n];

    for (i = 0; i < n; i++) {
        printf("Nhap mang[%d]: ", i);
        scanf("%d", &mang[i]);
    }

    float tong = 0;
    int count = 0;
    float tb;

    for (i = 0; i < n; i++) {
        if (mang[i] % 3 == 0) {
            tong += mang[i];
            count++;
        }
    }

    if (count > 0) {
        tb = tong / count;
        printf("%.2f", tb);
    } else {
        printf("0");
    }

    return 0;
}