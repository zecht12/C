#include<stdio.h>
#include<termios.h>
#include<iostream>
using namespace std;
int main(){
    int Nilai[20];
    int Posisi[20];
    int i, N, Bilangan, Banyak=0;
    bool ketemu;

    cout<<"Masukkan Banyaknya Bilangan = ";
    cin>>N;
    cout<<endl;

    for(i=0; i<N; i++){
    cout<<"Masukkan elemen ke-"<<i<<" = ";
    cin>>Nilai[i];
    }

    cout<<"\n Deretan Bilangan = ";
    for(i=0; i<N; i++)
    cout<<Nilai[i]<<" ";

  cout<<"\n\nMasukkan Bilangan yang akan Dicari = ";
  cin>>Bilangan;
  
  for(i=0; i<N; i++)
  {
    if(Nilai[i]==Bilangan)
    {
      ketemu = true;
      Posisi[Banyak]=i;
      Banyak++;
    }
  }
  if(ketemu)
  {
    cout<<"Bilangan "<<Bilangan<<" ditemukan sebanyak "<<Banyak;
    cout<<"\npada posisi ke = ";
    for(i=0; i<Banyak; i++)
    cout<<Posisi[i]<<" ";
  }
    else
    cout<<"Bilangan "<<Bilangan<<" tidak ditemukan";
extern int getc (FILE *__stream);
}