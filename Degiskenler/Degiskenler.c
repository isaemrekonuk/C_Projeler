#include <stdio.h> //Kütüphane

//Tek satýrlýk yorum satýrý.

/*
  Çoklu yorum satýrý
*/

int main()
{
    //Deðiþkenler
    /*
      * Deðiþkenler bilgisayar programlama da geçici bilgilerin tutulduðu ve içeriðinin yazýlýmcý tarafýndan atandýðý bilgilerdir.
      * veriTipi degiskenIsmi = degiskenDegeri; olarak deðiþkenlerimizi tanýmlýyoruz.
      * Bir deðiþken, deðeri atanmadan ekrana yazdýrýlamaz. Bunu yaptýðýmýzda hata alýrýz.
      * Sabitler, deðeri deðiþtirilemeyen deðiþkenler için kullanýlýr. const anahtar kelimesi ile tanýmlanmaktadýr.
      * Sabit olarak tanýmlanacak deðiþkenlerin ilk deðer atamasý zorunluluðu vardýr. Ýlk deðerleri atanmadan kullanýlamazlar.
    */
    
    /*
        C'de Bulunan Bazý Veri Tipleri
        --------------------------------
      *          char --> karakter, 1 byte (%c olarak alýnýr.)
      *         short --> kýsa tam sayý, 2 byte (%d olarak alýnýr.)
      *           int --> tam sayý, 4 byte (%d olarak alýnýr.)
      *          long --> uzun tam sayý, 4 byte (%ld olarak alýnýr.)
      *      unsigned --> iþaretsiz tam sayý, 2 byte (%u olarak alýnýr.)
      * long unsigned --> iþaretsiz uzun tam sayý, 4 byte (%lu olarak alýnýr.)
      *         float --> ondalýklý sayý, 4 byte (%f olarak alýnýr.)
      *        double --> ondalýklý sayý, 8 byte (%lf olarak alýnýr.)
      *       boolean --> true ya da false, 1 byte 
    */
    
    int a; //Ýnt veri türünde a isimli bir deðiþken tanýmladýk.
    int b = 10;  //Ýnt veri türünde b isimli bir deðiþken tanýmladýk ve deðer atamasý yaptýk.
        
    a = 5; //Daha önce tanýmlamýþ olduðumuz deðiþkene deðer atamasý yaptýk.
        
    //Tanýmladýðýmýz deðiþkenleri ekrana yazdýrýyoruz.
    printf("a degeri..: %d \n", a);
    printf("b degeri..: %d \n", b);
    
    b += 2; //b deðerine 2 ekledik.
    
    int c = a + b; //c deðiþkenine a ve b deðerlerini toplayýp atadýk.
    
    //Ekrana yazdýrma iþlemlerini yapýyoruz.
    printf("*************************\n");
    printf("a degeri..: %d \n", a);
    printf("b degeri..: %d \n", b);
    printf("c degeri..: %d \n", c);        
    printf("*************************\n");
    
    float  d, e, f, k; //float türünde bir deðiþken tanýmladýk.
        
    d = b / a; //deðiþkene atama iþlemini yaptýk.
        
    //Deðiþkenlerimize deðer atamlarýný yapýyoruz.
    e = 17;
    f = 6;
        
    k = e / f;
        
    //Ekrana yazdýrma iþlemlerini yapýyoruz.
    printf("d degeri..: %f \n", d); 
    printf("e degeri..: %f \n", e);
    printf("f degeri..: %f \n", f);
    printf("k degeri..: %f \n", k);
    printf("********************\n");
        
    const double m = 3.14; //sabit bir deðiþken tanýmladýk. Artýk bu deðiþkenin deðeri hiçbir þekilde deðiþtirilemez.
        
    printf("Sabit degisken degeri..: %lf \n", m);
    
    getchar(); //Konsolun açýk kalmasýný saðlýyor.
    return 0;
}
