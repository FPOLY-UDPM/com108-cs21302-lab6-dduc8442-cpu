/******************************************************************************
 * Họ và tên: [ĐẶNG ĐÌNH ĐỨC]
 * MSSV:      [PS48675]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 2: TÌM GIÁ TRỊ LỚN NHẤT VÀ NHỎ NHẤT TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình giá trị nhỏ nhất và lớn nhất của mảng

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

    int max = mang[0];
    int min = mang[0];

    for (i = 1; i < n; i++) {
        if (mang[i] > max) {
            max = mang[i];
        }
        if (mang[i] < min) {
            min = mang[i];
        }
    }

    printf("Gia tri lon nhat: %d\n", max);
    printf("Gia tri nho nhat: %d\n", min);

    return 0;
}
