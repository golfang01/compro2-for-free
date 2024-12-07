#include <stdio.h>
#include <string.h>

// ฟังก์ชัน GetSet: รับจำนวนสมาชิกและค่าของสมาชิกในเซต
void GetSet(int data[], int *num) {
    printf("Enter the number of elements: ");
    scanf("%d", num); // รับจำนวนสมาชิกในเซต

    printf("Enter the elements of the set: ");
    for (int i = 0; i < *num; i++) {
        scanf("%d", &data[i]); // รับค่าของสมาชิกแต่ละตัว
    }
}

int main() {
    int data[100]; // กำหนด array ขนาดคงที่ (สูงสุด 100 ตัว)
    int num;       // ตัวแปรสำหรับเก็บจำนวนสมาชิกในเซต

    // เรียกใช้ฟังก์ชัน GetSet เพื่อรับข้อมูลจากผู้ใช้
    GetSet(data, &num);

    // แสดงค่าของสมาชิกในเซต
    printf("The set elements are: ");
    for (int i = 0; i < num; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    return 0;
}

