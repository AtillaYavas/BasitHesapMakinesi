#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// Hesap Makinesi Yapma
	// iki tane sayý belirle 
	
	int sayi1 , sayi2 ;
	int sonuc ;
	char islem;
	
	printf("Birinci Sayiyiyi giriniz : " ) ;
	scanf("%d", &sayi1) ; 
	
	printf("Ikinci Sayiyi giriniz : " ) ;
	scanf("%d", &sayi2) ;
	
	
	printf("Secilen sayiler %d , %d \n " , sayi1 , sayi2) ;
	
	printf("Yapmak istediginiz islemi seciniz (+,-,/,x) : ") ;
	scanf(" %c" , &islem) ;
	
	// eðer x seçilirse çarpma ...
	
  switch (islem) {
    case '+':
        printf("%d", sayi1 + sayi2);
        break;
    case '-':
        printf("%d", sayi1 - sayi2);
        break;
    case 'x':
        printf("%d", sayi1 * sayi2);
        break;
    case '/':
        if (sayi2 != 0)
            printf("%d", sayi1 / sayi2);
        else
            printf("Sýfýra bölme hatasý!\n");
        break;
    default:
        printf("Geçersiz iþlem\n");
}        
	return 0;
}
