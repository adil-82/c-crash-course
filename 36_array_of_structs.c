#include <stdio.h>
#include <string.h>

struct Student {
  char name[12];
  float gpa;
  int id;
};

int main() {
  struct Student student_1 = {"Spongebob", 3.0, 1};
  struct Student student_2 = {"Patrick", 2.5, 2};
  struct Student student_3 = {"Sandy", 2.0, 3};

  struct Student students[] = {student_1, student_2, student_3};

  for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++) {
    printf("student %d: %-12s\t %.2f\n", students[i].id, students[i].name,
           students[i].gpa);
  }
}
