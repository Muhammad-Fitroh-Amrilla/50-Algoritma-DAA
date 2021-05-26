//Bubble Sort
#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <time.h>
#define N 20

using namespace std;
int bubble(int n);
int i,j,A[N];


// fungsi bubble
int bubble(int n)
{
        int temp;
        for (i=1;i<=n-1;i++){
                for (j=i;j<n;j++){
                        if (A[i-1]>A[j]){
                        temp = A[i-1];
                        A[i-1] = A[j];
                        A[j] = temp;
                        }
                }
        }
}

main(){
int jml;
		              
cout<<"\n=====| Algoritma Bubble Sort |=====\n\n";
		
        printf("Masukkan jumlah bilangan: ");
        scanf("%d",&jml);
        printf("\n");
        // input data
        for (i=0;i<jml;i++){
                printf("Bilangan ke %d : ",i+1);
                scanf("%d",&A[i]);
        }
        printf("\n");
        // menampilkan data
        printf("Data yang belum terurut : \n");
        for (i=0;i<jml;i++){
               printf("%d\n",A[i]);
        }
        clock_t sTime = clock();
        // mengurutkan data
        bubble(jml);
        // menampilkan data
        printf("Data yang sudah terurut : \n");
        for (i=0;i<jml;i++){
               printf("%d\n",A[i]);
        }
        printf("\nTime Taken %.2fs\n", (double)(clock()-sTime)/CLOCKS_PER_SEC);
}
