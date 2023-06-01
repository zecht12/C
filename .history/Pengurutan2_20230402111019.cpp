#include<iostream>
#include<termios.h>
#include<iomanip>
using namespace std;
void Cetak(int data[], int n)
{
  int i;
  for(i=0; i<n; i++)
    cout<<setw(3)<<data[i];
  cout<<"\n";
}
int Partisi(int data[], int p, int r)
{
  int x, i, j, temp;
  x = data[p];
  i=p;
  j=r;
  while(l)
  {
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
}
void Quick_Sort(int data[], int p, int r)
{
  int q;
  if(p<r)
  {
    q=Partisi(data, p, r+1);
    Quick_Sort(data, p, 1);
    Quick_Sort(data, q+1, r);
  }
}
void main()
{
  int Nilai[20];
  int i, N;
  cout<<"Masukkan Banyak Bilangan : ";
  cin>>N;
  for(i=0; i<N; i++)
  {
    cout<<"Elemen ke-"<<i<<" : ";
    cin>>Nilai[i];
  }
  cout<<"\nData Sebelum di urut : ";
  Cetak(Nilai, N);
  cout<<endl;
  Quick_Sort(Nilai, 0, N-1);
  cout<<"\nData Setelah di urut : ";
  Cetak(Nilai,N);
  getch();
}