#include <stdio.h>

int main()
{
    //Scanf ile input alma
    //Kullan�c�dan bir de�er almak istedi�imiz zaman scanf fonksiyonunu kullanaca��z.
    
    int sayi; //De�i�kenimizi tan�mlad�k.
    
    printf("Lutfen bir sayi giriniz..: "); //Ekrana yazd�rma i�lemi yap�yoruz.
    scanf("%d", &sayi); //Kullan�c�dan al�nan de�eri sayi de�i�kenimize at�yoruz.
     
    printf("Girilen sayi..: %d \n", sayi); //Ekrana yazd�rma i�lemi yap�yoruz.
    
    system("pause"); //Kullan�c�dan de�er ald�ktan sonra ekran�n kapanmamas� i�in kullan�yoruz.
    return 0;
    
   
}
