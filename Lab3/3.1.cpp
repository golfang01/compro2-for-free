#include <stdio.h>

// โครงสร้าง student
struct student {
    char name[20];
    int age;
    char sex; // เพศ ('M' สำหรับชาย, 'F' สำหรับหญิง, หรืออื่น ๆ)
    float gpa; // เกรดเฉลี่ย
};

// ฟังก์ชัน upgrade ใช้เพิ่ม gpa ตามเพศ
void upgrade(struct student *child) {
    if (child->sex == 'M') { // ถ้าเป็นผู้ชาย
        child->gpa *= 1.10; // เพิ่ม gpa ขึ้น 10%
    } else if (child->sex == 'F') { // ถ้าเป็นผู้หญิง
        child->gpa *= 1.20; // เพิ่ม gpa ขึ้น 20%
    }
    if (child->gpa > 4.00) { // gpa ต้องไม่เกิน 4.00
        child->gpa = 4.00;
    }
}

int main() {
    struct student aboy;
    
    // รับข้อมูลนักเรียน
    printf("Enter sex (M/F): ");
    scanf(" %c", &aboy.sex);
    printf("Enter GPA: ");
    scanf("%f", &aboy.gpa);

    // เรียกใช้ฟังก์ชัน upgrade
    upgrade(&aboy);

    // แสดงผลลัพธ์
    printf("Updated GPA: %.2f\n", aboy.gpa);
    return 0;
}
