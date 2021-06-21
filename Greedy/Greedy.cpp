#include <conio.h>
#include <stdio.h>
#define size 99

void sort(int[],int);
main() {
int x[size],i,n,uang,hasil[size];
printf("\nbanyaknya jenis koin: ");
scanf("%d",&n);
printf("\nmasukkan jenis koin (Rp): \n");

for(i=0;i<=n-1;i++) {
scanf("%d",&x[i]); }
sort(x,n);


printf("\njenis koin yang tersedia (Rp): \n");

for(i=0;i<=n-1;i++) {
printf("%d \t",x[i]); }
printf("\n\nmasukkan nilai yang ingin dipecah: Rp ");
scanf("%d",&uang);
printf("\n\nhasil algoritma greedynya adalah: \n");

for(i=0;i<=n-1;i++) {
hasil[i]=uang/x[i];
uang=uang%x[i]; }

for(i=0;i<=n-1;i++) {
printf("\akoin Rp %d",x[i]);
printf("-an sebanyak: %d keping",hasil[i]);
printf("\n"); }
printf("\n");
getch();
return 0; }

void sort(int a[],int siz) {
    int pass,hold,j;
    for(pass=1;pass<=siz-1;pass++) {
        for(j=pass;j<siz;j++) {
            if(a[pass-1]<a[j]) {
                hold=a[pass-1];
                a[pass-1]=a[j];
                a[j]=hold;
            }
        }
    }
}

