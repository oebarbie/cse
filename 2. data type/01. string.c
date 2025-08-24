#include <stdio.h>

int main() {

    char name[100];
    int age;

    printf("enter name and age: ");
    scanf("%s %d", &name, &age);

    if (age < 0 || age > 100) {
        printf("wrong input\n");
    } 
    else {
        printf("name: %s, age: %d\n", name, age);
    }

    return 0;
}