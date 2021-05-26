#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;
main()
{
	int n, data[100];
	cout<<"\n\t\t=====TUGAS DESAIN DAN ANALISIS ALGORITMA=====";
	cout<<"\n\t\t\t=====INSERTION SORT=====\n";
	cout<<"\nSilahkan masukan jumlah data yang diinginkan [maksimal 100]\t: "; cin>>n;
	for ( int i=0; i<n; i++)
	{
	cout<<"Masukan data ke "<<i+1<<" : "; cin>>data[i];
	}
	cout<<"Data yang anda masukan adalah ";
	for ( int i=0; i<n; i++)
	{
		cout<<data[i]<<" ";
	}
	cout<<"\nData akan diurutkan secara Insertion Sort menjadi : ";
	//Insertion Sort
	
	clock_t sTime = clock();
	for ( int i=1; i<n; i++)
	{
		int temp = data[i];
		int j = i-1;
		while (j>=0 && data[j] > temp)
		{
			data[j+1] = data[j];
			j--;
		}
		data[j+1] = temp;
	}
	//Insertion Sort
	for (int i=0; i<n; i++)
	{
		cout<<data[i]<<" ";
	}
	getch();
	
// some code here
// to compute its execution duration in runtime
	printf("\nTime Taken %.2fs\n", (double)(clock()-sTime)/CLOCKS_PER_SEC);
	
}
