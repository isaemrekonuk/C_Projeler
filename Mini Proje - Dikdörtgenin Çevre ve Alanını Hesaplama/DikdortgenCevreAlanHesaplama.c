#include <stdio.h>

int main()
{
	//Değişkenlerimizi tanımlıyoruz.
	int uzunKenar, kisaKenar, alan, cevre;
	
	//Kullanıcıdan değer girmesini istiyoruz.
	printf("Lutfen Dikdortgenin Uzun Kenar Uzunlugunu Giriniz..: ");
	scanf("%d", &uzunKenar); //Alınan değeri ilgili değişkene atıyoruz.
	printf("Lutfen Dikdortgenin Kisa Kenar Uzunlugunu Giriniz..: ");
	scanf("%d", &kisaKenar); //Alınan değeri ilgili değişkene atıyoruz.
	
	cevre = ((uzunKenar * 2) + (kisaKenar * 2)); //Alınan değerler ile ilgili işlemi yapıp sonucu değişkenimize atıyoruz.
	
	alan = (uzunKenar * kisaKenar); //Alınan değerler ile ilgili işlemi yapıp sonucu değişkenimize atıyoruz.
	
	//Ekrana yazdırma işlemi yapıyoruz.
	printf("Dikdortgenin Cevresi..: %d \n", cevre);
	printf("Dikdortgenin Alani..: %d \n", alan);
	
	getchar();
	return 0;
}