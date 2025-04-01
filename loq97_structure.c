// implementing structure

struct Person {
    char name[50];
    int age;
    float height;
};
#include <stdio.h>
#include <conio.h>
int main() {

    struct Person person1 = {"Alice", 30, 5.5};

    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.1f\n", person1.height);
getch();
    return 0;
}

