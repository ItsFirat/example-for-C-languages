#include <stdio.h>
#include <stdlib.h>
int main()
{
for(int notPrime=2;notPrime<=100;notPrime++)
  {//asal olmayan sayılar(notPrime)
       int flag=0;
       for(int factor=2;factor<notPrime;factor++)
        {//asal olmayan sayilari bulmak icin o sayinin onceki sayilara bolunmemesi gerekir
         if(notPrime%factor==0)
           {//eger bolunuyorsa asal degil ve bayarak degeri 1 olsun
            flag =1;break;
           }
        }
        if(flag==1)// kontrol dongusunden cikan sayilari yazdirsin
         {
          printf("%d:",notPrime);
          {//asal olmayan sayilari  yaninda  baska bir sayilar yazma imkani olmasi icin printf icerisinde yeni blok aciyoruz => {}
           int isPrime,k,factor;
           for(factor=2; factor<=notPrime;factor++)
             {//asal bolenleri  bulmak icin once poz. bolenlari bulup sonra asal  oldugunu kontrol edip asal ise Notprime'sayısının yanında yazdırsın.
              if(notPrime%factor==0)//asal olmayan sayiya bolunebilen sayileri al
                  {
                   isPrime=1;//sart kullanmak icin yeni bayrak (isPrime)
                   for(k=2;k<=factor/2;k++)
                     {//bolen sayı asal olup olmadını komunrolu yap
                       if(factor%k==0)
                         isPrime=0;
                     }
                      if(isPrime==1)
                         printf("%d ",factor);
                  }
              }
           }
        printf("\n");
         }
  }

    return 0;
}
