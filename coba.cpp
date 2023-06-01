#include<stdio.h>
#include<termios.h>
#include<iostream>

int main()
{
double tot_beli,potongan,jum_byr;
std::cout<<"Total Pembelian Rp.";
std::cin>>tot_beli;
if(tot_beli>=50000)
potongan=0.2*tot_beli;
else
potongan=0.05*tot_beli;
std::cout<<"Besarnya Potongan Rp."<<potongan<<std::endl;
jum_byr=tot_beli-potongan;
std::cout<<"Jumlah yang harus dibayar Rp.";
std::cout<<jum_byr;
extern int getc (FILE *__stream);
}