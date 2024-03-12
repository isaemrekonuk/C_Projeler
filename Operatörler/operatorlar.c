#include <stdio.h>
#include <stdbool.h>

int main()
{
    //Operatörler
    //Programlamada gerek matematiksel, gerekse karþýlaþtýrma gibi iþlemlerde operatörler kullanýlýr.
        
    //Atama Operatörleri 
    //Atama operatörleri, bir deðiþkeni baþka bir deðiþkene atamak veya bir deðiþkene bir deðer atamak için kullanýlýr.
    //Bu atama iþlemi yapýlýrken ayný zamanda aritmetik operatörlerde kullanýlabilir.
    /*
    *   =   , En temel atama operatörüdür. Atamalar her zaman saðdan sola doðrudur.
    *  +=   , Soldaki deðere kendi deðeri ile beraber saðdaki deðeri de ekleyerek tekrar soldaki deðere atar.
    *  -=   , Soldaki deðerden saðdaki deðeri çýkararak tekrar soldaki deðere atar.
    *  *=   , Soldaki deðeri saðdaki deðer ile çarparak tekrar soldaki deðere atar.
    *  /=   , Soldaki deðeri saðdaki deðere bölerek sonucu tekrar soldaki deðere atar.
    */
        
    int a = 5; //a deðiþkenine 5 deðerini atadýk.
            
    //Ekrana yazdýrma yapýyoruz.
    printf("a degeri..: %d \n", a);
    printf("*****************\n");
        
    a += 2; //a deðiþkenindeki deðer ile  2'yi toplayýp tekrar a deðiþkenine atadýk. Böylelikle a'ný yeni deðeri 7 oldu.
            
    printf("a degeri..: %d \n", a);
    printf("*****************\n");
            
    a *= 3; //a deðiþkenindeki deðer ile 3'ü çarpýp tekrar a deðiþkenine atadýk. Böylelikle a'nýn yeni deðeri 21 oldu.
        
    printf("a degeri..: %d \n", a);
    printf("*****************\n");
            
    int x, y;  //Deðiþken tanýmladýk.
        
    x = y = a; //Çoklu atama yaparak a deðerini x ve y deðiþkenlerine atadýk.
            
    printf("a degeri..: %d \n", a);
    printf("x degeri..: %d \n", x);
    printf("y degeri..: %d \n", y);
    printf("*****************\n");
            
            
    //Ýliþkisel Operatörler
    //Ýliþkisel operatörler, veriler arasýnda karþýlaþtýrma yapmaya yarar.
    /*
    *  <   (küçüktür)
    *  >   (büyüktür)
    *  <=  (küçük eþittir)
    *  >=  (büyük eþittir)
    *  ==  (eþittir)
    *  !=  (eþit deðildir)
    */
        
    //Deðiþkenlerimizi tanýmlýyoruz.
    int k = 10;
    int m = 8;
        
    //Ekrana yazdýrma yapýyoruz.
    printf("k (10) degeri m (8) degerinden buyuktur..: %d \n", (k > m)); //ekrana true yazar.
    printf("*****************\n");
        
        
    //Aritmetik Operatörler
    //Aritemtik operatörler matematiksel iþlemler yapmak için kullanýlýr.
    /*
    *   +  , Toplama iþlemi yapar.
    *   -  , Çýkarma iþlemi yapar.
    *   *  , Çarpma iþlemi yapar.
    *   /  , Bölme iþlemi yapar.
    *   %  , Mod alma iþlemi yapar.
    *  ++  , Deðeri 1 arttýrýr.
    *  --  , Deðeri 1 azaltýr.
    */
    //Matematik iþlemlerinde olduðu gibi yazýlým dillerinde de iþlem önceliði vardýr. Çarpma ve bölme iþlemi, toplama ve çýkarmaya göre daha önceliklidir.
        
    //Ekrana yazdýrma yapýyoruz.
    printf("k ve m degerlerinin toplami..: %d %d\n", (k + m));
    printf("k ve m degerlerinin farki..: %d %d\n", (k - m));
    k++; //k deðerini 1 arttýrýyoruz.
    m--; //m deðerini 1 azaltýrýyoruz.
    printf("k degerinin yeni degeri..: %d \n", k);
    printf("m degerinin yeni degeri..: %d \n", m);
    printf("*****************\n");
        
        
    //Mantýksal Operatörler
    //Bilgisayar dillerinin hemen hepsinde program akýþýnda kontol edebilmek için ve yönlendirmek için mantýksal operatörler kullanýlýr.
    /*
    *   &   , Mantýksal VE (AND) iþlemi yapar.
    *   |   , Mantýksal VEYA (OR) iþlemi yapar.
    *   &&  , Koþullu VE iþlemi yapar. Karþýlaþtýrýlan iki deðerden her ikiside true olduðu sürece true deðeri döndürülür.
    *   ||  , Koþullu VEYA iþlemi yapar. Karþýlaþtýrýlan iki deðerden en az biri true ise true deðeri döndürülür.
    *   !   , Mantýksal DEÐÝL (NOT) iþlemi yapar. Verilen boolean tipindeki verinin tersini verir.
    *   ^   , Mantýksal XOR iþlemi yapar.
    */
        
    //Deðiþkenlerimiz tanýmlýyoruz. 
    bool q = true;
    bool p = false;
        
    //Ekrana yazdýrma yapýyoruz.
    printf("q && p  : %d \n", (q && p));
    printf("q || p  : %d \n", (q || p));
    printf("q ^ p  : %d \n", (q ^ p));
    printf("!q (degil) : %d \n", (!q));
    printf("*****************\n");
        
        
        
    //Bitsel Operatörler
    //Programlamada çok fazla kullanýlmayan bitsel operatörler bitleri kaydýrmak için tersini almak gibi iþlemler için kullanýlýr.
    /*
    *   ~   , Bütün bitlerin tersini alýr.
    *   &   , Bitsel olarak VE iþlemi yapar.
    *   |   , Bitsel olarak VEYA iþlemi yapar.
    *   ^   , Bitsel olarak XOR iþlemi yapar.
    *   >>  , Bitsel olarak sayýsý istenilen deðer kadar saða kaydýrýr.
    *   <<  , Bitsel olarak sayýsý istenilen deðer kadar sola kaydýrýr.
    */

    getchar(); //Konsolun ekranda kalmasýný saðlýyor.
    return 0;
}
