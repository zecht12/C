#include <iostream>
using namespace std;
#include <termios.h>
#include <iomanip>

int data[7] = {1, 8, 2, 5, 4, 9, 7};
int data
int cari;

int selection_sort()
{
      int temp, min, i, j;

      for(i=0; i<7;i++)
      {
            min = i;
            for(j = i+1; j<7; j++)
            {
                  if(data[j]<data[min])
                  {
                        min=j;
                  }
            }
            temp = data[i];
            data[i]  = data[min];
            data[min] = temp;
      }
}

void binarysearch()
{
      //searching
      int awal, akhir, tengah, b_flag = 0;
      awal = 0;
      akhir = 7;
      while (b_flag == 0 && awal<=akhir)
      {
            tengah = (awal + akhir)/2;
            if(data[tengah] == cari)
            {
                  b_flag = 1;
                  break;
            }
            else if(data[tengah]<cari)
                  awal = tengah + 1;
            else
                  akhir = tengah -1;
      }

        if(b_flag == 1)
            cout<<"\nData ditemukan pada index ke-"<<tengah<<endl;
      else
            cout<<"\nData tidak ditemukan\n";
}

int main()
{
      cout<<"\t   'BINARY SEARCH'"<<endl;
      cout<<"\t====================="<<endl;
      cout<<"\nData           : ";
      //tampilkan data awal
      for(int x = 0; x<7; x++)
            cout<<setw(3)<<data[x];
      cout<<endl;

      cout<<"\nMasukkan data yang ingin Anda cari : ";
      cin>>cari;
      cout<<"\nData diurutkan : ";
      //urutkan data dengan selection sort
      selection_sort();
      //tampilkan data setelah diurutkan
      for(int x = 0; x<7;x++)
            cout<<setw(3)<<data[x];
    
      cout<<endl;
       
        binarysearch();

      _getche();
      return EXIT_SUCCESS;

 }