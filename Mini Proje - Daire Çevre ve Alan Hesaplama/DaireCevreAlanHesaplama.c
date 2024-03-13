#include <stdio.h>

int main()
{
	//Değişkenlerimizi tanımlıyoruz.
	float yaricap, cevre, alan, pi = 3.14;
	
	//Kullanıcıdan değer girmesini istiyoruz.
	printf("Lutfen Dairenin Yaricap Uzunlugunu Giriniz..: ");
	scanf("%f", &yaricap); //Girilen değeri ilgili değişkenimize atıyoruz.
	
	cevre = 2 * pi * yaricap; //Alınan değer ile ilgili işlemi yapıp sonucu değişkenimize atıyoruz.
	
	alan = pi * (yaricap * yaricap); //Alınan değer ile ilgili işlemi yapıp sonucu değişkenimize atıyoruz.
	
	//Ekrana yazdırma işlemi yapıyoruz.
	printf("Dairenin Cevresi..: %.2f \n", cevre);
	printf("Dairenin Alani..: %.2f \n", alan);
	
	getchar();
	return 0;
}