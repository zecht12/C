#include<iostream>
#include<stack>
#include<termios.h>
#include<iomanip>
using namespace std;

int main() {
    int pil;
    char dt[10];
    initializer_list();
    do{
        printf("Pilihan dari operasi Stack =\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print\n");
        printf("4. Clear\n");
        printf("5. Exit\n");
        printf("Masukan pilihan menu+");
        scanf{"%d",&pil};
    } 
    switch(pil){ case 1:if(isFull()!=1){
            printf("Masukan Data =");
            scanf("%s",&dt);
            push(dt)
        }
        else printf("Data Sudah Penuh!\n");
        break;
        case 2:if(isEmpty()!=1){
            Pop();
        }else printf("Data Masih Kosong!\n");
        break;
    }}
}