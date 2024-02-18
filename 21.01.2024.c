#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define kitap 0.04
#define temel 0.056
#define luks 0.196
#define KITAP 0
#define TEMEL 1
#define LUKS 2

int main()
{
	
	char cumle[100];
	int sayac=0;
	int i=0;
	
	printf("Lutfen cumlenizi giriniz: ");
	gets(cumle);
	
	while(cumle[i])
	{
		if (cumle[i]==32)
		{
			sayac++;
		}
		i++;
	}
	
	printf("Cumledeki kelime sayisi: %d",sayac+1);
	
	return 0;
}	

