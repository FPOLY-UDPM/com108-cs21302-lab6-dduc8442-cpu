/******************************************************************************
 * Họ và tên: [Đặng Đình ĐỨc]
 * MSSV:      [PS48675]
 * Lớp:       [CS21302]]
 *****************************************************************************/

//  BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả của trung bình tổng các số chia hết cho 3 trong mảng 


#include <stdio.h>


float averageDivisibleBy3(int arr[], int size) {
    int sum = 0;
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 3 == 0) {
            sum += arr[i];
            count++;
        }
    }

    if (count == 0) {
        return 0; 
    }

    return (float)sum / count;
}

int main() {
    int n;
    int arr[100];

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    // Nhập mảng
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }

    float avg = averageDivisibleBy3(arr, n);

    if (avg == 0) {
        printf("Khong co so nao chia het cho 3 trong mang\n");
    } else {
        printf("Trung binh cong cac so chia het cho 3 la: %.2f\n", avg);
    }

    return 0;
}


