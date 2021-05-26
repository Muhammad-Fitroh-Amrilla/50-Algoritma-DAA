#include <iostream>
#include <time.h>

using namespace std;

//bubble sort
void bubbleSort(int arr[], int n){
  int i, j, tmp;
  for (i = 0; i < n; i++){
    for (j = 0; j < n - i - 1; j++){
      if (arr[j] > arr[j + 1]){
        tmp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tmp;
      }
    }
  }
}
//main
int main(){
  int n, i, j;
    int array [] = {423,181,582,257,708,330,776,944,400,648,602,274,740,721,213,447,928,554,138,868,87,375,955,99,923,746,759,195,672,556,927,697,539,563,934,986,244,429,540,38,960,305};
    n = sizeof(array)/sizeof(array[0]);
    cout << "Sebelum diurutkan:\n";
    for (i = 0; i < n; i++){
        cout << array[i] << " ";
    }

    clock_t sTime = clock();
    bubbleSort(array, n);
    cout << "\n";
    cout << "Hasil pengurutan sebagai berikut:\n";
    for (i = 0; i < n; i++){
        cout << array[i] << " ";
    }
    cout << "\n";
    printf("\nTime Taken %.2fs\n", (double)(clock()-sTime)/CLOCKS_PER_SEC);
}