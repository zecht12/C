    #include <stdio.h>
    #include <iostream>
    #include <termio.h>
    using namespace std;
    int main(int argc, const char *argv[]) {
        system ("clear");
        cout<<" Tugas Individu Program c" <<endl;
        cout<<"================================================" <<endl;
        cout<<" Nama	= Gilang Prima E" <<endl;
        cout<<" NIM	= 220103092\n" <<endl;
        cout<<"================================================\n\n" <<endl;
    int i, j;

    for(i=0;i<5;puts(""),++i) {
    int n=0;
    for(j=5;j>i;n+=2*(j--)) {
    if(j>i+1) {
    printf("%d*",2*j);
    }
    else {
    printf("%d ",2*j);
    }
    }
    printf("=%d",n);
    }
    cout<<"\t___________+" <<endl;
    cout<<"\ttotal= 110"<<endl;
    extern int getc (FILE *__stream);
    }