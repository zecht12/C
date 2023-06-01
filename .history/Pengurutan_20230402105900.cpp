#include<iostream>
#include<termios.h>

using namespace std;

int main()
{
 int x=5,i,tampung,j,k;
 int data[]={4,12,3,30,1};

    cout<<"Data Sebelum Di Urutkan :";
    for(i=0;i<x;i++){
        cout<<""<<data[i];
        }
    cout<<endl;
    for(i=0;i<x;i++){
        for(j=0;j<i;j++){
            if(data[i]<data[j]){
            tampung=data[i];
            data[i]=data[j];
            data[j]=tampung;
    }
        }
       cout<<"\n Tahap Ke-"<<i+1<<" : ";
       for(k=0;k<x;k++){
         cout<<"  "<<data[k];
       }
    }
    cout<<"\n\n Data Setelah Di Urutkan : ";
    for(i=0;i<x;i++){
     cout<<"  "<<data[i];
    }

}