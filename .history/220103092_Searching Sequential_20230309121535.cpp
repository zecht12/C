#include<stdio.h>
#include<termios.h>
#include<iostream>
int data[12] = {8,10,6,-2,11,7,1,100,9,8,17,83};
int i;
int cari;
int flag=0;
int main(){
    printf("masukkan data yang ingin dicari=");
    scanf("%i", &cari);
    for(i=0;i<12;i++){
        if(data[i] == cari) flag=1;
    }
    if(flag==1) printf("Selamat data yang anda cari ada!");
    else printf("Selamat !");

    extern int getc (FILE *__stream);
}