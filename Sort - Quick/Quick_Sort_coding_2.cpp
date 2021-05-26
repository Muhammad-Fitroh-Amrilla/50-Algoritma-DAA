//Quick Sort


#include <stdio.h>
#include <time.h>


void quickSort( int[], int, int);
int partition( int[], int, int);
 
int total;
int main()
{
 int total;
 int a[100000];
 int i;
 printf("masukkan jumlah data total = ");scanf("%d",&total);
 
 for(i=0;i<total;i++){
 printf("masukkan data index ke %d = ",i+1);scanf("%d",&a[i]);
 }
 
 printf("\n\nsebelum Di- sorting:  ");
 for(i = 0; i < total; ++i)
 printf(" %d ", a[i]);

 clock_t sTime = clock(); 
 quickSort( a, 0, total-1);
 
 printf("\n\nsesudah Di- sorting: ");
 for(i = 0; i < total; ++i){
 printf(" %d ", a[i]);}
 printf("\n");
 printf("\nTime Taken %.2fs\n", (double)(clock()-sTime)/CLOCKS_PER_SEC);
}
 
void quickSort( int a[], int l, int r)
{
 int j;
 
 if( l < r )
 {
 // divide and conquer
 j = partition( a, l, r);
 quickSort( a, l, j-1);
 quickSort( a, j+1, r);
 }
 
}
 
int partition( int a[], int l, int r) {
 int pivot, i, j, t;
 pivot = a[l];
 i = l; j = r+1;
 
 while( 1)
 {
 do ++i; while( a[i] <= pivot && i <= r );
 do --j; while( a[j] > pivot );
 if( i >= j ) break;
 t = a[i]; a[i] = a[j]; a[j] = t;
 }
 t = a[l]; a[l] = a[j]; a[j] = t;
 return j;
}

