#include <stdio.h> 

int main()
{
    //Tip D�n���m�
    
    int sayi1 = 17, sayi2 = 5; //De�i�kenlerimizi tan�mlad�k ve de�er atamas� yapt�k.
    
    //De�i�kenlerimizi tan�ml�yoruz.
    int tamsayiBolme;
    float floatBolme;
    double doubleBolme;
    
    tamsayiBolme = sayi1 / sayi2; //�lgili i�lemi yap�p sonucu de�i�kenimize atad�k.
    printf("Tam Sayi Bolme Islemi Sonucu..: %d \n", tamsayiBolme); //Ekrana yazd�rma i�lemi yap�yoruz.
    
    //%.20 ile virg�lden sonra 20 basamak yazd�rmak i�in kullan�yoruz.
    floatBolme = (float) sayi1 / sayi2; //�lgili i�lemi yap�p sonucu de�i�kenimize atad�k.
    printf("Float Bolme Islemi Sonucu..: %.20f \n", floatBolme); //Ekrana yazd�rma i�lemi yap�yoruz.
    
    doubleBolme = (double) sayi1 / sayi2; //�lgili i�lemi yap�p sonucu de�i�kenimize atad�k.
    printf("Double Bolme Islemi Sonucu..: %.20lf \n", doubleBolme); //Ekrana yazd�rma i�lemi yap�yoruz.
    
    getchar(); //Konsolun ekranda kalmas�n� sa�l�yor.
    return 0;
    
}
