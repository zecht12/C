#include<stdio.h>
#include<termios.h>
#include<iostream>
using namespace std;
int bil[5];
int main(){
for(int i=0;i<5;i++){
    bil[i]=i*10;
    printf("Elemen ke-%i= %i \n",i,bil[i]);
}

extern int getc (FILE *__stream);
}