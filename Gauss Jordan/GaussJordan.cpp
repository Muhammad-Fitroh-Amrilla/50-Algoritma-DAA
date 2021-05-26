#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>
using namespace std;
main()
{
    int n,i,j,k,temp;
    float a[10][10],c,d[10]={0};
    cout<<"==================================\n";
    cout<<"=       Metode Gauss-Jordan      =";
    cout<<"\n==================================\n";
    cout<<"\n==================================\n";
    cout<<"Masukkan banyak persamaan = ";
    cin>>n;
    cout<<"==================================\n";
    cout<<"Nilai semua koefisien  \n";
    for(i=0;i<n;i++)
    {
        cout<<"\nPersamaan ("<<i+1<< ") :\n";
        for(j=0;j<=n;j++)
            cin>>a[i][j];
    }
    for(i=n-1;i>0;i--)        // parsial pivot
    {
        if(a[i-1][0]<a[i][0])
            for(j=0;j<=n;j++)
            {
                c=a[i][j];
                a[i][j]=a[i-1][j];
                a[i-1][j]=c;
            }
    }
    //*************** Menampilkan Matriks *************//
    
    cout<<"\nMatriks: \n\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n;j++)
            printf("%6.1f",a[i][j]);
        printf("\n");
    }
    //********* Mengubah segitiga teratas matriks *************//
    //********* Proses eliminasi kedepan **************//
    for(k=0;k<n-1;k++)
        for(i=k;i<n-1;i++)
        {
            c= (a[i+1][k]/a[k][k]) ;
            
            for(j=0;j<=n;j++)
                a[i+1][j]-=c*a[k][j];
        }

     // ************MENAMPILKAN SEGITIGA TERATAS MATRIKS***************//
     cout<<"\n==================================\n";
     cout<<"\nMatriks yang telah diubah: ";
    printf("\n\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n;j++)
            printf("%6.1f",a[i][j]);
            
        printf("\n");
    }
    //***************** Metode subtitusi kebelakang ****************//

    for(i=n-1;i>=0;i--)
    {
        c=0;
        for(j=i;j<=n-1;j++)
            c=c+a[i][j]*d[j];
            
        d[i]=(a[i][n]-c)/a[i][i];
    }
    //******** Hasil *********//
    cout<<"\n==================================\n";
    cout<<"Solusinya: \n";
    for(i=0;i<n;i++)
    cout<<"x = "<<d[i]<<endl;
    getch ();
}
