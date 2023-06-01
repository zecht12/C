#include<iostream>
#include<stack>
#include <stdio.h>
using namespace std;
stack<type> st;

int main() {
    int pil;
    char dt[10];
    do{
        printf("Pilihan dari operasi Stack =\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print\n");
        printf("4. Clear\n");
        printf("5. Exit\n");
        printf("Masukan pilihan menu=");
        printf("%d",pil);
        switch(pil){ 
            case 1:if(IsFull()!=1){
                printf("Masukan Data =");
                printf("%s",&dt);
                Push(dt)
            }
            else printf("Data Sudah Penuh!\n");
            break;
            case 2:if(IsEmpty()!=1){
                Pop();
            }else printf("Data Masih Kosong!\n");
            break;
            
        }
    extern int getc (FILE *__stream);
    }
    while(pil!=5);
    extern int getc (FILE *__stream);
}