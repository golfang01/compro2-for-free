#include <stdio.h>

// โครงสร้าง student
struct student {
    char name[20]; // ชื่อ
    int age;       // อายุ
};

// ฟังก์ชัน GetStudent รับจำนวนห้องเรียนจากคีย์บอร์ดและคืนค่าตัวชี้ไปยังอาร์เรย์ของนักเรียน
struct student (*GetStudent(int *room))[10] {
    static struct student children[20][10];  // ใช้ static เพื่อไม่ให้ข้อมูลหายไปหลังจากฟังก์ชันสิ้นสุด

    printf("Enter the number of rooms: ");
    scanf("%d", room);  // รับจำนวนห้องเรียน

    // รับข้อมูลของนักเรียนในแต่ละห้อง
    for (int r = 0; r < *room; r++) {
        printf("Room %d:\n", r + 1);  // แสดงชื่อห้อง
        for (int i = 0; i < 10; i++) {
            printf("Enter name for student %d: ", i + 1);
            scanf("%s", children[r][i].name);  // รับชื่อ
            printf("Enter age for student %d: ", i + 1);
            scanf("%d", &children[r][i].age);  // รับอายุ
        }
        // แสดงข้อความหลังจากกรอกข้อมูลเสร็จ
        printf("Room %d: 10 students entered.\n", r + 1);
    }

    return children;  // คืนค่าอาร์เรย์ของนักเรียน
}

int main() {
    struct student (*children)[10];  // ตัวชี้ไปยังอาร์เรย์ของนักเรียน
    int group;

    // เรียกใช้ฟังก์ชัน GetStudent
    children = GetStudent(&group);

    return 0;
}
