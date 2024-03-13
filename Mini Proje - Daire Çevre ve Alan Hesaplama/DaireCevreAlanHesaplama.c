#include <stdio.h>
#include <math.h> //Kütüphanemizi ekliyoruz.

int main()
{
	//Değişkenlerimizi tanımlıyoruz.
	float yaricap, cevre, alan;
	
	//Kullanıcıdan değer girmesini istiyoruz.
	printf("Lutfen Dairenin Yaricap Uzunlugunu Giriniz..: ");
	scanf("%f", &yaricap); //Girilen değeri ilgili değişkenimize atıyoruz.
	
	cevre = 2 * M_PI * yaricap; //Alınan değer ile ilgili işlemi yapıp sonucu değişkenimize atıyoruz.
	
	alan = M_PI * (yaricap * yaricap); //Alınan değer ile ilgili işlemi yapıp sonucu değişkenimize atıyoruz.
	
	//Ekrana yazdırma işlemi yapıyoruz.
	printf("Dairenin Cevresi..: %.2f \n", cevre);
	printf("Dairenin Alani..: %.2f \n", alan);
	
	getchar();
	return 0;
}