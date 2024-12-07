#include <stdio.h>

// โครงสร้าง student
struct student {
    char name[20]; // ชื่อ
    int age;       // อายุ
};

// ฟังก์ชัน GetStudent รับข้อมูลจากคีย์บอร์ด
void GetStudent(struct student child[][10], int *room) {
    printf("Enter the number of rooms: ");
    scanf("%d", room);  // รับจำนวนห้องเรียน

    // รับข้อมูลของนักเรียนในแต่ละห้อง
    for (int r = 0; r < *room; r++) {
        printf("Room %d:\n", r + 1);  // แสดงชื่อห้อง
        for (int i = 0; i < 10; i++) {
            printf("Enter name for student %d: ", i + 1);
            scanf("%s", child[r][i].name);  // รับชื่อ
            printf("Enter age for student %d: ", i + 1);
            scanf("%d", &child[r][i].age);  // รับอายุ
        }
        // แสดงข้อความหลังจากกรอกข้อมูลเสร็จ
        printf("Room %d: 10 students entered.\n", r + 1);
    }
}

int main() {
    struct student children[20][10];  // ห้องเรียนสูงสุด 20 ห้อง, ห้องละ 10 คน
    int group;

    // เรียกใช้ฟังก์ชัน GetStudent
    GetStudent(children, &group);

    return 0;
}
