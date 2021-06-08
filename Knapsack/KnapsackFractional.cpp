#include <cstdlib>
#include <iostream>


using namespace std;

int w[10],p[10],p_no[10],n,m;
float d[10],x[10];


template <class T>
void reza(T *a,int i,int j)
{ T temp;
 temp=a[j];
 a[j]=a[i];
 a[i]=temp;
 return;
}


void display()
{
 cout<<"\nNo\t\tW\t\tP\n";
 
 for(int i=0;i<n;i++)
  cout<<p_no[i]<<"\t\t"<<w[i]<<"\t\t"<<p[i]<<"\n";


}


void knapsack()
{
 int u,i;
 u=m;
 float x[10];
 for(i=0;i<n;i++)
  x[i]=0;
 for(i=0;i<n;i++)
 {
  if(w[i]>u)
   break;
  else
  {
   x[i]=1;
   u=u-w[i];
  }
 }
 if(i<=n)
  x[i]=(float)u/w[i];
 for(i=0;i<n;i++)
 {
  for(int j=i+1;j<n;j++)
  {
   if(p_no[i]>p_no[j])
   {
    reza(p_no,i,j);
    reza(w,i,j);
    reza(p,i,j);
    reza(d,i,j);
    reza(x,i,j);
   }
  }
 }
 float opt_solution=0;
 for(i=0;i<n;i++)
 {
  //cout<<x[i]<<" ";
  opt_solution=opt_solution+(p[i]*x[i]);
 }
 
 cout<<"=========TABEL===========\n";
 cout<<"\nNo\t\tW\t\tP\t\tP/W\t\tFrac\n";
 
 for(int i=0;i<n;i++)
  cout<<p_no[i]<<"\t\t"<< w[i]<<"\t\t"<<p[i]<<"\t\t"<<d[i]<<"\t\t"<<x[i]<<"\n";
 
 cout<<"\n\njumlah barang baawaan maksimal\t"<<opt_solution;
}


int main(int argc, char *argv[])
{
    int i;
 cout<<"\nKapasitas :  ";
 cin>>m;
 cout<<"Banyak item: ";
 cin>>n;
 
 for(i=0;i<n;i++)
 {
  p_no[i]=i+1;
  cout<<"\nBarang "<<i+1<<"\nProfit:\t";
  cin>>p[i];
  cout<<"Berat:\t";
  cin>>w[i];
  d[i]=(float)p[i]/w[i];
 }
 display();
 for(i=0;i<n;i++)
 {
  for(int j=i+1;j<n;j++)
  {
   if(d[i]<d[j])
   {
    reza(p_no,i,j);
    reza(w,i,j);
    reza(p,i,j);
    reza(d,i,j);
   }
  }
 }
 display();
 knapsack();
 cout<<"\n\n";
    system("PAUSE");
    return EXIT_SUCCESS;
}

