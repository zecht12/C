#include<iostream>
#include<termios.h>
#include<iomanip>
using namespace std;

// Mengubah fungsi Cetak menjadi int karena tidak mengembalikan nilai apa pun
void Cetak(int data[], int n)
{
  int i;
  for(i=0; i<n; i++)
    cout<<setw(3)<<data[i];
  cout<<"\n";
}

// Menambahkan nilai kembalian pada fungsi Partisi agar tidak terjadi warning saat dikompilasi
int Partisi(int data[], int p, int r)
{
  int x, i, j, temp;
  x = data[p];
  i=p;
  j=r;
  while(i<=j){ // Mengubah kondisi while dari 'while(i)' menjadi 'while(i<=j)'
    while(data[j]>x)
        j--;
    while(data[i]<x)
        i++;
    if(i<j)
    {
      temp = data[i];
      data[i] = data[j];
      data[j] = temp;
    }
    else
      return j;
  }
  return j; // Mengembalikan nilai j setelah while loop
}

void Quick_Sort(int data[], int p, int r)
{
  int q;
  if (p < r)
  {
    q = Partisi(data, p, r);
    Quick_Sort(data, p, q - 1);
    Quick_Sort(data, q + 1, r);
  }
}

int main()
{
  int Nilai[20];
  int i, N;
  cout<<"Masukkan Banyak Bilangan : ";
  cin>>N;
  for(i=0; i<N; i++)
  {
    cout<<"Elemen ke-"<<i+1<<" : "; // Menambahkan 1 pada variabel i agar elemen dimulai dari 1
    cin>>Nilai[i];
  }
  cout<<"\nData Sebelum di urut : ";
  Cetak(Nilai, N);
  cout<<endl;
  Quick_Sort(Nilai, 0, N-1);
  cout<<"\nData Setelah di urut : ";
  Cetak(Nilai,N);
  return 0; // Menambahkan return 0 agar program selesai dengan baik
}
