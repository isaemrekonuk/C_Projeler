#include <stdio.h>

int main()
{
    //Scanf ile input alma
    //Kullanýcýdan bir deðer almak istediðimiz zaman scanf fonksiyonunu kullanacaðýz.
    
    int sayi; //Deðiþkenimizi tanýmladýk.
    
    printf("Lutfen bir sayi giriniz..: "); //Ekrana yazdýrma iþlemi yapýyoruz.
    scanf("%d", &sayi); //Kullanýcýdan alýnan deðeri sayi deðiþkenimize atýyoruz.
     
    printf("Girilen sayi..: %d \n", sayi); //Ekrana yazdýrma iþlemi yapýyoruz.
    
    system("pause"); //Kullanýcýdan deðer aldýktan sonra ekranýn kapanmamasý için kullanýyoruz.
    return 0;
    
   
}
