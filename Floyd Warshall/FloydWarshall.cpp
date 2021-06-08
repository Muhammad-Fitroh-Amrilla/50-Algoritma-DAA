#include <bits/stdc++.h>
using namespace std;

// Jumlah Vertic dalam graf
#define V 12

// Mendefinisikan INF sebagai nilai infinity(tak hingga)
#define INF 99999


void printSolution(float dist[][V]);

// Algoritma Floyd Warshall
void floydWarshall(float graph[][V])
{
	
	float dist[V][V]; 
    int i, j, k;

	//Inisialisasi graf ke dalam bentuk matriks
	for (i = 0; i < V; i++)
		for (j = 0; j < V; j++)
			dist[i][j] = graph[i][j];

	//memulai iterasi k
	for (k = 0; k < V; k++) {
		//vertics awal
		for (i = 0; i < V; i++) {
			//vertics tujuan 
			for (j = 0; j < V; j++) {
				//Menentukan jalur terpendek dan ditampung ke dalam dist[i][j]
				if (dist[i][j] > (dist[i][k] + dist[k][j])
					&& (dist[k][j] != INF
						&& dist[i][k] != INF))					
					dist[i][j] = dist[i][k] + dist[k][j];
			}
		}
	}
	printSolution(dist);
}

//Fungsi untuk mencetak solusi dari algoritma floyd warshall
void printSolution(float dist[][V])
{
	cout << "Hasil Matriks dari Algoritma Floyd Warshall \n";
	for (int i = 0; i < V; i++) {
		for (int j = 0; j < V; j++) {
			if (dist[i][j] == INF)
				cout << "INF"
					<< "	 ";
			else
				cout << dist[i][j] << "     ";
		}
		cout << endl;
	}
}

int main()
{

//Input graf 	
float graph[V][V] = 
				{
                    { 0, 23.0, INF, INF, INF, INF, INF, INF, 31.3, INF, INF, INF},
                    { 23.0, 0, 9.0, INF, INF, INF, INF, INF, INF, INF, INF, INF},
                    { INF, 9.0, 0, 7.81, INF, INF, INF, INF, INF, INF, INF, INF},
                    { INF, INF, 7.81, 0, 16.57, INF, INF, INF, INF, INF, INF, INF},
                    { INF, INF, INF, 16.57, 0, 6.59, INF, INF, INF, INF, INF, 20.11},
                    { INF, INF, INF, INF, 6.79, 0, 6.59, INF, INF, INF, INF, INF},
                    { INF, INF, INF, INF, INF, 6.59, 0, 6.10, INF, INF, INF, INF},
                    { INF, INF, INF, INF, INF, INF, 6.10, 0, 6.57, 15.72, INF, INF},
                    { 31.3, INF, INF, INF, INF, INF, INF, 6.57, 0, INF, INF, INF},
                    { INF, INF, INF, INF, INF, INF, INF, 15.72, INF, 0, 23.49, INF},
                    { INF,INF, INF, INF, INF, INF, INF, INF, INF, 23.49, 0, 5.38},
                    { INF, INF, INF, INF, 20.11, INF, INF, INF, INF, INF, 5.38, 0}
                };
	
	floydWarshall(graph);
	system("pause");
	return 0;
}


