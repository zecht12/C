#include<stdio.h>
#include<termios.h>
#include<iostream>
using namespace std;
int data[8] = {8,10,6,-2,11,7,1,100};
int i;
int cari;
int flag=0;
int main(){
    printf("masukkan data yang ingin dicari=");
    scanf("%i", &cari);
    for(i=0;i<8;i++){
        if(data[] == cari) flag=1;
    }
    if(flag==1) printf("Data Ada!");
    else printf("Data Tidak Ada!");

    extern int getc (FILE *__stream);
}