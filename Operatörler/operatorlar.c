#include <stdio.h>
#include <stdbool.h>

int main()
{
    //Operat�rler
    //Programlamada gerek matematiksel, gerekse kar��la�t�rma gibi i�lemlerde operat�rler kullan�l�r.
        
    //Atama Operat�rleri 
    //Atama operat�rleri, bir de�i�keni ba�ka bir de�i�kene atamak veya bir de�i�kene bir de�er atamak i�in kullan�l�r.
    //Bu atama i�lemi yap�l�rken ayn� zamanda aritmetik operat�rlerde kullan�labilir.
    /*
    *   =   , En temel atama operat�r�d�r. Atamalar her zaman sa�dan sola do�rudur.
    *  +=   , Soldaki de�ere kendi de�eri ile beraber sa�daki de�eri de ekleyerek tekrar soldaki de�ere atar.
    *  -=   , Soldaki de�erden sa�daki de�eri ��kararak tekrar soldaki de�ere atar.
    *  *=   , Soldaki de�eri sa�daki de�er ile �arparak tekrar soldaki de�ere atar.
    *  /=   , Soldaki de�eri sa�daki de�ere b�lerek sonucu tekrar soldaki de�ere atar.
    */
        
    int a = 5; //a de�i�kenine 5 de�erini atad�k.
            
    //Ekrana yazd�rma yap�yoruz.
    printf("a degeri..: %d \n", a);
    printf("*****************\n");
        
    a += 2; //a de�i�kenindeki de�er ile  2'yi toplay�p tekrar a de�i�kenine atad�k. B�ylelikle a'n� yeni de�eri 7 oldu.
            
    printf("a degeri..: %d \n", a);
    printf("*****************\n");
            
    a *= 3; //a de�i�kenindeki de�er ile 3'� �arp�p tekrar a de�i�kenine atad�k. B�ylelikle a'n�n yeni de�eri 21 oldu.
        
    printf("a degeri..: %d \n", a);
    printf("*****************\n");
            
    int x, y;  //De�i�ken tan�mlad�k.
        
    x = y = a; //�oklu atama yaparak a de�erini x ve y de�i�kenlerine atad�k.
            
    printf("a degeri..: %d \n", a);
    printf("x degeri..: %d \n", x);
    printf("y degeri..: %d \n", y);
    printf("*****************\n");
            
            
    //�li�kisel Operat�rler
    //�li�kisel operat�rler, veriler aras�nda kar��la�t�rma yapmaya yarar.
    /*
    *  <   (k���kt�r)
    *  >   (b�y�kt�r)
    *  <=  (k���k e�ittir)
    *  >=  (b�y�k e�ittir)
    *  ==  (e�ittir)
    *  !=  (e�it de�ildir)
    */
        
    //De�i�kenlerimizi tan�ml�yoruz.
    int k = 10;
    int m = 8;
        
    //Ekrana yazd�rma yap�yoruz.
    printf("k (10) degeri m (8) degerinden buyuktur..: %d \n", (k > m)); //ekrana true yazar.
    printf("*****************\n");
        
        
    //Aritmetik Operat�rler
    //Aritemtik operat�rler matematiksel i�lemler yapmak i�in kullan�l�r.
    /*
    *   +  , Toplama i�lemi yapar.
    *   -  , ��karma i�lemi yapar.
    *   *  , �arpma i�lemi yapar.
    *   /  , B�lme i�lemi yapar.
    *   %  , Mod alma i�lemi yapar.
    *  ++  , De�eri 1 artt�r�r.
    *  --  , De�eri 1 azalt�r.
    */
    //Matematik i�lemlerinde oldu�u gibi yaz�l�m dillerinde de i�lem �nceli�i vard�r. �arpma ve b�lme i�lemi, toplama ve ��karmaya g�re daha �nceliklidir.
        
    //Ekrana yazd�rma yap�yoruz.
    printf("k ve m degerlerinin toplami..: %d %d\n", (k + m));
    printf("k ve m degerlerinin farki..: %d %d\n", (k - m));
    k++; //k de�erini 1 artt�r�yoruz.
    m--; //m de�erini 1 azalt�r�yoruz.
    printf("k degerinin yeni degeri..: %d \n", k);
    printf("m degerinin yeni degeri..: %d \n", m);
    printf("*****************\n");
        
        
    //Mant�ksal Operat�rler
    //Bilgisayar dillerinin hemen hepsinde program ak���nda kontol edebilmek i�in ve y�nlendirmek i�in mant�ksal operat�rler kullan�l�r.
    /*
    *   &   , Mant�ksal VE (AND) i�lemi yapar.
    *   |   , Mant�ksal VEYA (OR) i�lemi yapar.
    *   &&  , Ko�ullu VE i�lemi yapar. Kar��la�t�r�lan iki de�erden her ikiside true oldu�u s�rece true de�eri d�nd�r�l�r.
    *   ||  , Ko�ullu VEYA i�lemi yapar. Kar��la�t�r�lan iki de�erden en az biri true ise true de�eri d�nd�r�l�r.
    *   !   , Mant�ksal DE��L (NOT) i�lemi yapar. Verilen boolean tipindeki verinin tersini verir.
    *   ^   , Mant�ksal XOR i�lemi yapar.
    */
        
    //De�i�kenlerimiz tan�ml�yoruz. 
    bool q = true;
    bool p = false;
        
    //Ekrana yazd�rma yap�yoruz.
    printf("q && p  : %d \n", (q && p));
    printf("q || p  : %d \n", (q || p));
    printf("q ^ p  : %d \n", (q ^ p));
    printf("!q (degil) : %d \n", (!q));
    printf("*****************\n");
        
        
        
    //Bitsel Operat�rler
    //Programlamada �ok fazla kullan�lmayan bitsel operat�rler bitleri kayd�rmak i�in tersini almak gibi i�lemler i�in kullan�l�r.
    /*
    *   ~   , B�t�n bitlerin tersini al�r.
    *   &   , Bitsel olarak VE i�lemi yapar.
    *   |   , Bitsel olarak VEYA i�lemi yapar.
    *   ^   , Bitsel olarak XOR i�lemi yapar.
    *   >>  , Bitsel olarak say�s� istenilen de�er kadar sa�a kayd�r�r.
    *   <<  , Bitsel olarak say�s� istenilen de�er kadar sola kayd�r�r.
    */

    getchar(); //Konsolun ekranda kalmas�n� sa�l�yor.
    return 0;
}
