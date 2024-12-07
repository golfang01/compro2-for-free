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
    struct student person;

    // รับข้อมูลนักเรียน
    printf("Enter name: ");
    scanf("%s", person.name);  // รับชื่อ
    printf("Enter age: ");
    scanf("%d", &person.age);  // รับอายุ
    printf("Enter sex (M/F): ");
    scanf(" %c", &person.sex); // รับเพศ (ใส่ช่องว่างก่อน %c เพื่อข้ามช่องว่างก่อน)
    printf("Enter GPA: ");
    scanf("%f", &person.gpa);  // รับ GPA

    printf("\nBefore upgrade:\n");
    printf("Name: %s, Age: %d, Sex: %c, GPA: %.2f\n",
           person.name, person.age, person.sex, person.gpa);

    // เรียกใช้ฟังก์ชัน upgrade
    upgrade(&person);

    printf("\nAfter upgrade:\n");
    printf("Name: %s, Age: %d, Sex: %c, GPA: %.2f\n",
           person.name, person.age, person.sex, person.gpa);

    return 0;
}
