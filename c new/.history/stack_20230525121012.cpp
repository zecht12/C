#include <iostream>
#include <string.h>
#include <stdio.h>
#include <termio.h>
#define MAX_STACK 10
using namespace std;

char stack[MAX_STACK][10]; //initialisasi array
int top = -1; //index elemen teratas

void Push(char data[]){     //
	if (top < MAX_STACK - 1) {
		top++;
		strcpy(stack[top], data);
		printf("Data berhasil ditambahkan\n");
	}
	else {
		printf("Stack sudah penuh\n");
	}
}

void Pop(){
	if (top >= 0) {
		printf("Data yang dihapus: %s\n", stack[top]);
		top--;
	}
	else {
		printf("Stack masih kosong\n");
	}
}

void TampilStack(){
	printf("Isi Stack:\n");
	for (int i = top; i >= 0; i--) {
		printf("%s\n", stack[i]);
	}
}

void Clear(){
	top = -1;
	printf("Stack telah dikosongkan\n");
}

bool IsEmpty(){
	if (top == -1) {
		return true;
	}
	else {
		return false;
	}
}

bool IsFull(){
	if (top == MAX_STACK - 1) {
		return true;
	}
	else {
		return false;
	}
}

int main(){
	int pil;
	char dt[10];
    printf("Tugas Pemrograman C\n");
    printf("================================================\n");
    printf("Nama: Gilang prima Ertansyah\n");
    printf("NIM: 220103092\n");
    printf("================================================\n");
    printf("\n\n");

	do{
		printf("Pilihan dari Operasi Stack = \n");
		printf("1. Push\n");
		printf("2. Pop\n");
		printf("3. Print\n");
		printf("4. Clear\n");
		printf("5. Exit\n");
		printf("Masukan pilihan menu = ");
		scanf("%d", &pil);

		switch (pil) {
			case 1:
				if (!IsFull()) {
					printf("Masukan Data = ");
					scanf("%s", dt);
					Push(dt);
				}
				else {
					printf("Data sudah penuh\n");
				}
				break;
			case 2:
				if (!IsEmpty()) {
					Pop();
				}
				else {
					printf("Data masih kosong\n");
				}
				break;
			case 3:
				if (!IsEmpty()) {
					TampilStack();
				}
				else {
					printf("Data masih kosong\n");
				}
				break;
			case 4:
				Clear();
				break;
		}
		extern int getc (FILE *__stream);
	}
	while (pil != 5);
	extern int getc (FILE *__stream);
}