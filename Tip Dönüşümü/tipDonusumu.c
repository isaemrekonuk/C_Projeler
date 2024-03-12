#include <stdio.h> 

int main()
{
    //Tip Dönüþümü
    
    int sayi1 = 17, sayi2 = 5; //Deðiþkenlerimizi tanýmladýk ve deðer atamasý yaptýk.
    
    //Deðiþkenlerimizi tanýmlýyoruz.
    int tamsayiBolme;
    float floatBolme;
    double doubleBolme;
    
    tamsayiBolme = sayi1 / sayi2; //Ýlgili iþlemi yapýp sonucu deðiþkenimize atadýk.
    printf("Tam Sayi Bolme Islemi Sonucu..: %d \n", tamsayiBolme); //Ekrana yazdýrma iþlemi yapýyoruz.
    
    //%.20 ile virgülden sonra 20 basamak yazdýrmak için kullanýyoruz.
    floatBolme = (float) sayi1 / sayi2; //Ýlgili iþlemi yapýp sonucu deðiþkenimize atadýk.
    printf("Float Bolme Islemi Sonucu..: %.20f \n", floatBolme); //Ekrana yazdýrma iþlemi yapýyoruz.
    
    doubleBolme = (double) sayi1 / sayi2; //Ýlgili iþlemi yapýp sonucu deðiþkenimize atadýk.
    printf("Double Bolme Islemi Sonucu..: %.20lf \n", doubleBolme); //Ekrana yazdýrma iþlemi yapýyoruz.
    
    getchar(); //Konsolun ekranda kalmasýný saðlýyor.
    return 0;
    
}
