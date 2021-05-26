#include <conio.h>
#include <stdio.h>
#define size 99

void sort(int[],int);
main() {
int x[size],i,n,uang,hasil[size];
printf("\nbanyaknya jenis koin: ");
scanf("%d",&n);
printf("\nmasukkan jenis koin (Rp): \n");

for(i=1;i<=n;i++) {
scanf("%d",&x[i]); }
sort(x,n);
printf("\njenis koin yang tersedia (Rp): \n");

for(i=n;i>=1;i--) {
printf("%d \t",x[i]); }
printf("\n\nmasukkan nilai yang ingin dipecah: Rp ");
scanf("%d",&uang);
printf("\n\nhasil algoritma greedynya adalah: \n");

for(i=1;i<=n;i++) {
hasil[i]=uang/x[i];
uang=uang%x[i]; }

for(i=1;i<=n;i++) {
printf("\akoin Rp %d",x[i]);
printf("-an sebanyak: %d keping",hasil[i]);
printf("\n"); }
printf("\n");
getch();
return 0; }

void sort(int a[],int siz) {
int pass,hold,j;
for(pass=1;pass<=siz-1;pass++) {
for(j=0;j<=siz-2;j++) {
if(a[j+1]) {
hold=a[j+1];
a[j+1]=a[j+2];
a[j+2]=hold;
}
}
}
}
