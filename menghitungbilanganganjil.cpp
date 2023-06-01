#include<termios.h>
#include<stdio.h>
#include<iostream>
using namespace std;
main (){
int a,b=0;
system ("clear");
        cout<<" Tugas Individu Program c" <<endl;
        cout<<"================================================" <<endl;
        cout<<" Nama	= Gilang Prima E" <<endl;
        cout<<" NIM	= 220103092\n" <<endl;
        cout<<"================================================\n\n" <<endl;
for (a=1; a<=19; a+=2){
if (a<19)
cout<<a<<"+";
else
cout<<a;
b=b+a;
}
cout<<"="<<b <<endl;
extern int getc (FILE *__stream);
}