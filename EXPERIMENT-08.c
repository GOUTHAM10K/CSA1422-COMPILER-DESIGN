#include <stdio.h>
#include <string.h>

#define MAX 50

struct symbol {
    char name[20];
    char type[20];
    int address;
};
struct symbol table[MAX];
int count = 0;
// Insert symbol
void insert() {
    printf("Enter Identifier Name: ");
    scanf("%s", table[count].name);
    printf("Enter Data Type: ");
    scanf("%s", table[count].type);
    table[count].address = 1000 + count;   // simple address allocation
    count++;
    printf("Symbol Inserted Successfully!\n");
}
// Display symbol table
void display() {
    int i;
    printf("\nSymbol Table:\n");
    printf("Name\tType\tAddress\n");
    for(i = 0; i < count; i++) {
        printf("%s\t%s\t%d\n",
               table[i].name,
               table[i].type,
               table[i].address);
    }
}
// Search symbol
void search() {
    char id[20];
    int i, found = 0;
    printf("Enter Identifier to Search: ");
    scanf("%s", id);

    for(i = 0; i < count; i++) {
        if(strcmp(id, table[i].name) == 0) {
            printf("Found! Type: %s, Address: %d\n",
                   table[i].type,
                   table[i].address);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Identifier Not Found!\n");
}
int main() {
    int choice;
    while(1) {
        printf("\n--- SYMBOL TABLE MENU ---\n");
        printf("1. Insert\n");
        printf("2. Display\n");
        printf("3. Search\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: insert(); break;
            case 2: display(); break;
            case 3: search(); break;
            case 4: return 0;
            default: printf("Invalid Choice!\n");
        }
    }
    return 0;
}
