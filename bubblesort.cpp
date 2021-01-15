#include <stdio.h>
#include <stdlib.h> // rand() fonk calistirabilmek icin bu kutuphaneyi eklememiz gerekiyor
#include <time.h>   // her seferinde farkli sayilar kullanilmasi icin srand() fonk kullaniriz. O yüzden bu kutuphane eklenmelidir
int main(){
	
	int sayi,x;
	int dizi[20] ; // 20 elemanli dizi tanimlamasi
	srand(time(0));
	
	// ben bu ornekte 0-100 arasinda sayilar üretilmesini istedim
	for(int i = 0;i<20;i++){		
		sayi = rand()%101;    // 0-100 arasi rastgele sayilar üretir
		dizi[i] = sayi;       // dizinin her indexine üretilen sayilar atanir ve dizi olusturulur
		
	}
	
	
	// Bubble sort algoritmamiz
	for(int k = 0 ; k<20 ; k++){	
		for(int j = 1;j<21-k ;j++){ 
			if(dizi[j-1]>dizi[j]){    // herhangi sirali 2 indexin 1. si 2. sinden büyükse if bloguna girilir 
				x = dizi[j];          // 2. siradaki kucuk oldugu icin bir degiskene kaydedilir
				dizi[j] = dizi[j-1];  // 1. buyuk old icin 2. ile yer degistirilir
				dizi[j-1]= x;         // 2. sayi 1. sayinin eski konumuna alinir
					
				
			}
			
		
		}
	}
	for(int m = 0 ; m<20 ;m++){
		printf("%d\t" , dizi[m]);     // dizimizin elemanlarini sirasiyla bastiririz
		if(m==9){
			printf("\n");
		}
		
	}
	return 0;
}
