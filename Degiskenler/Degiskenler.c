#include <stdio.h> //K�t�phane

//Tek sat�rl�k yorum sat�r�.

/*
  �oklu yorum sat�r�
*/

int main()
{
    //De�i�kenler
    /*
      * De�i�kenler bilgisayar programlama da ge�ici bilgilerin tutuldu�u ve i�eri�inin yaz�l�mc� taraf�ndan atand��� bilgilerdir.
      * veriTipi degiskenIsmi = degiskenDegeri; olarak de�i�kenlerimizi tan�ml�yoruz.
      * Bir de�i�ken, de�eri atanmadan ekrana yazd�r�lamaz. Bunu yapt���m�zda hata al�r�z.
      * Sabitler, de�eri de�i�tirilemeyen de�i�kenler i�in kullan�l�r. const anahtar kelimesi ile tan�mlanmaktad�r.
      * Sabit olarak tan�mlanacak de�i�kenlerin ilk de�er atamas� zorunlulu�u vard�r. �lk de�erleri atanmadan kullan�lamazlar.
    */
    
    /*
        C'de Bulunan Baz� Veri Tipleri
        --------------------------------
      *          char --> karakter, 1 byte (%c olarak al�n�r.)
      *         short --> k�sa tam say�, 2 byte (%d olarak al�n�r.)
      *           int --> tam say�, 4 byte (%d olarak al�n�r.)
      *          long --> uzun tam say�, 4 byte (%ld olarak al�n�r.)
      *      unsigned --> i�aretsiz tam say�, 2 byte (%u olarak al�n�r.)
      * long unsigned --> i�aretsiz uzun tam say�, 4 byte (%lu olarak al�n�r.)
      *         float --> ondal�kl� say�, 4 byte (%f olarak al�n�r.)
      *        double --> ondal�kl� say�, 8 byte (%lf olarak al�n�r.)
      *       boolean --> true ya da false, 1 byte 
    */
    
    int a; //�nt veri t�r�nde a isimli bir de�i�ken tan�mlad�k.
    int b = 10;  //�nt veri t�r�nde b isimli bir de�i�ken tan�mlad�k ve de�er atamas� yapt�k.
        
    a = 5; //Daha �nce tan�mlam�� oldu�umuz de�i�kene de�er atamas� yapt�k.
        
    //Tan�mlad���m�z de�i�kenleri ekrana yazd�r�yoruz.
    printf("a degeri..: %d \n", a);
    printf("b degeri..: %d \n", b);
    
    b += 2; //b de�erine 2 ekledik.
    
    int c = a + b; //c de�i�kenine a ve b de�erlerini toplay�p atad�k.
    
    //Ekrana yazd�rma i�lemlerini yap�yoruz.
    printf("*************************\n");
    printf("a degeri..: %d \n", a);
    printf("b degeri..: %d \n", b);
    printf("c degeri..: %d \n", c);        
    printf("*************************\n");
    
    float  d, e, f, k; //float t�r�nde bir de�i�ken tan�mlad�k.
        
    d = b / a; //de�i�kene atama i�lemini yapt�k.
        
    //De�i�kenlerimize de�er atamlar�n� yap�yoruz.
    e = 17;
    f = 6;
        
    k = e / f;
        
    //Ekrana yazd�rma i�lemlerini yap�yoruz.
    printf("d degeri..: %f \n", d); 
    printf("e degeri..: %f \n", e);
    printf("f degeri..: %f \n", f);
    printf("k degeri..: %f \n", k);
    printf("********************\n");
        
    const double m = 3.14; //sabit bir de�i�ken tan�mlad�k. Art�k bu de�i�kenin de�eri hi�bir �ekilde de�i�tirilemez.
        
    printf("Sabit degisken degeri..: %lf \n", m);
    
    getchar(); //Konsolun a��k kalmas�n� sa�l�yor.
    return 0;
}
