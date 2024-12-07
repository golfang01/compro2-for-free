#include <stdio.h>

// โครงสร้าง student
struct student {
    char name[20]; // ชื่อ
    int age;       // อายุ
    char sex;      // เพศ ('M' สำหรับชาย, 'F' สำหรับหญิง)
    float gpa;     // ค่า GPA
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

    // รับข้อมูลจากคีย์บอร์ด
    printf("Enter name: ");
    scanf("%s", aboy.name);
    printf("Enter age: ");
    scanf("%d", &aboy.age);
    printf("Enter sex (M/F): ");
    scanf(" %c", &aboy.sex); // ใช้ช่องว่างก่อน %c เพื่อหลีกเลี่ยงปัญหาจาก newline
    printf("Enter GPA: ");
    scanf("%f", &aboy.gpa);

    printf("\nBefore upgrade:\n");
    printf("Name: %s, Age: %d, Sex: %c, GPA: %.2f\n", aboy.name, aboy.age, aboy.sex, aboy.gpa);

    // เรียกใช้ฟังก์ชัน upgrade
    upgrade(&aboy);

    printf("\nAfter upgrade:\n");
    printf("Name: %s, Age: %d, Sex: %c, GPA: %.2f\n", aboy.name, aboy.age, aboy.sex, aboy.gpa);

    return 0;
}
