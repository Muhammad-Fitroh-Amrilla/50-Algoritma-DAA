#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>

using namespace std;

void animation()
{
	int i=0,j;
	char kata[]="  ħħħħ  ħħ  ħħħ  ħħħħħħħħħħħħħħ  ħħħħħħħħħħħħħħ  ħħħħħħħħħħħħħħ  ħħħ  ħħ  ħħħħ";
	
		while(i<79)
		{
			for(j=0;j<4000000;j++){}
			
			printf("%c",kata[i]);
			i++;
		}
		puts("");
}


void cocktail_sort_shaker_sort(char *member, int no_times)
{
	register int i;
	int ready;
	char a;

	do
	{
		ready = 0;
		for(i = no_times - 1; i > 0; --i)
		{
			if(member[i - 1] > member[ i ])
			{
				a = member[i - 1];
				member[i - 1] = member[ i ];
				member[ i ] = a;
				ready = 1;
			}
		}
		for(i = 1; i < no_times; ++i)
		{
			if(member[i - 1] > member[ i ])
			{
				a = member[i - 1];
				member[i - 1] = member[ i ];
				member[ i ] = a;
				ready = 1;
			}
		}
	} while(ready);
}

int main(void)
{
		printf(" ħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħ\n");
		printf(" ħħ  ħħħħħħħħ                                                      ħħħħħħħħ  ħħ\n");
		printf(" ħħħħħħħħħħħħ                  UAS Algoritma 2016                  ħħħħħħħħħħħħ\n");
		printf(" ħħ  ħħħħħħħħ                                                      ħħħħħħħħ  ħħ\n");
		printf(" ħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħ\n");
		animation();
		printf("     |                                                                    |\n");
		printf("     |                             						                  |\n");
		printf("     |                          						                  |\n");
		printf("     |                   								                  |\n");
		printf("     |                                                                    |\n");
		printf("  ħħ-|-ħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħħ-|-ħħ\n");
		
		              
cout<<"\n=====| Algoritma Cocktail Sort |=====\n";
	char my_string[255];
	printf("Input huruf/kata: ");
	gets(my_string);
	cocktail_sort_shaker_sort(my_string, strlen(my_string));
	cout<<"Pengurutan huruf dari A-Z\n";
	cout<<"Hasil\n";
	cout<<my_string;

}
