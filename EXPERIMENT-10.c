#include <stdio.h>
#include <string.h>
char input[100];
int i = 0;
void E();
void Eprime();
void T();
void Tprime();
void F();
void E() {
    T();
    Eprime();
}
void Eprime() {
    if (input[i] == '+') {
        i++;
        T();
        Eprime();
    }
}
void T() {
    F();
    Tprime();
}
void Tprime() {
    if (input[i] == '*') {
        i++;
        F();
        Tprime();
    }
}
void F() {
    if (input[i] == 'i') {   // id
        i++;
    }
    else if (input[i] == '(') {
        i++;
        E();
        if (input[i] == ')')
            i++;
        else {
            printf("Error\n");
        }
    }
    else {
        printf("Error\n");
    }
}
int main() {
    printf("Enter expression: ");
    scanf("%s", input);
    E();
    if (input[i] == '\0')
        printf("String is Accepted\n");
    else
        printf("String is Rejected\n");
    return 0;
}
