#include <iostream>

using namespace std;
int main()
{
  system ("clear");
  cout<<" Tugas Individu Program c" <<endl;
  cout<<"================================================" <<endl;
  cout<<" Nama	= Gilang Prima E" <<endl;
  cout<<" NIM	= 220103092\n" <<endl;
  cout<<"================================================\n\n" <<endl;
  int tinggi_segitiga,i,j,k;
  cout << "Input tinggi segitiga: ";
  cin >> tinggi_segitiga;
  cout << endl;
  for(i=1; i<=tinggi_segitiga; i++) {
  for(j=1; j<=tinggi_segitiga-i; j++) {
    cout << " ";
  }
  for(k=1; k<=i; k++) {
    cout << " *";
  }
  cout << endl;
  }
return 0;
}