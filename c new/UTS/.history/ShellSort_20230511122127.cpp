#include<iostream>
#include<termios.h>
#include<iomanip>
using namespace std;
int main()
{
    printf("UTS Pemrograman C\n");
    printf("================================================\n");
    printf("Nama: Gilang prima Ertansyah\n");
    printf("NIM: 220103092\n");
    printf("================================================\n");
    printf("\n\n");

    int Nilai[20];
    int i, N, l, k;
    int temp, jarak, s;
    cout<<"Masukkan Banyak Bilangan : ";
    cin>>N;
    for(i=0; i<N; i++)
    {
    cout<<"Elemen ke-"<<i<<" : ";
    cin>>Nilai[i];
    }

  //Proses Cetak Sebelum diurutkan
    cout<<"\nData sebelum diurut : ";
    for(i=0; i<N; i++)
    cout<<setw(4)<<Nilai[i];
    
  //Proses Pengurutan
    jarak = N / 2;
    while(jarak >=1)
    {
    do
    {
      s=0;
      for(i=0; i<=(N-jarak)-1; i++)
      {
      k=i+jarak;
      if(Nilai[i] > Nilai[k])
        {
          temp = Nilai[i];
          Nilai[i] = Nilai[k];
          Nilai[k] = temp;
          s=1;
          for(l=0; l<N; l++)
          cout<<setw(4)<<Nilai[i];
          cout<<"\n\t";
          extern int getc (FILE *__stream);
        }
      }
    }
    while(s!=0);
    jarak /= 2;
    }
    cout<<"\nData Setelah di urut : ";
    for(i=0; i<N; i++)
    cout<<setw(4)<<Nilai[i];

        // Binary Search
    int low = 0, high = n - 1, key = 29;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (Nilai[mid] == key) {
            index = mid;
            break;
        }
        else if (arr[mid] > key) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    if (low > high) {
        printf("Angka %d tidak ditemukan dalam array\n", key);
    }
    else {
        printf("Angka %d ditemukan pada index ke-%d dalam array yang telah diurutkan\n", key, index);
    }
    return 0;
    extern int getc (FILE *__stream);
}