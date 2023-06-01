#include<stdio.h>
#include<termios.h>
#include<iostream>
int data[7] = {0,13,54,54,43,22,3};
int i;
int cari;
int flag=0;
int main(){
    printf("===================");
    printf("\n");
    printf("Selamat datang di Search Squential");
    printf("\n");
    printf("===================");
    printf("\n");


    printf("masukkan data yang ingin dicari=");
    scanf("%i", &cari);
    for(i=0;i<7;i++){
        if(data[i] == cari) flag=1;
    }
    if(flag==1) printf("Data ");
    else printf("oh data anda tidak ada:(");

    extern int getc (FILE *__stream);
}