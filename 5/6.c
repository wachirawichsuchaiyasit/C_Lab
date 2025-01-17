#include <stdio.h>

int main() {
    int i, a[5], b[5], c[10];  // กำหนด array ทั้ง 3 ตัว

    // รับค่าจากผู้ใช้สำหรับ array a[]
    printf("Enter array a:\n");
    for (i = 0; i < 5; i++) {
        printf("Please enter an integer: ");
        scanf("%d", &a[i]);
    }

    // รับค่าจากผู้ใช้สำหรับ array b[]
    printf("Enter array b:\n");
    for (i = 0; i < 5; i++) {
        printf("Please enter an integer: ");
        scanf("%d", &b[i]);
    }

    // รวมค่าเข้า array c[]
    for (i = 0; i < 5; i++) {
        c[i] = a[i];          // ใส่ค่าจาก a[] ไปที่ c[] ตำแหน่ง 0-4
        c[i + 5] = b[i];      // ใส่ค่าจาก b[] ไปที่ c[] ตำแหน่ง 5-9
    }

    // แสดงผลลัพธ์
    printf("Array c: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}
