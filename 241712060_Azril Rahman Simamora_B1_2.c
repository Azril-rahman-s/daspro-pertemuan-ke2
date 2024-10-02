#include<stdio.h>
void main(){
    //tipe data intefer(bilangan bulat)
    int num = 6;
    printf("Nilai bilangan bulat   : %d\n",num);

    //tipe data float (bilangan desimal)
    float numl = 3.14;
    printf("Nilai bilangan desimal : %.2f\n",numl);


    // tipe data char (satu karakter)
    char character = 's';
    printf("Karakter               : %c\n",character);

    //tipe data string(arrat character)
    char strings[] = "Hello World!";
    printf("string                 : %s\n",strings);

    //tipe Boolean(1 == true ,0 == false)
    _Bool benar = 1;
    _Bool salah = 0;
    printf("True :%d ,false : %d\n",benar,salah);

    //tipe data const tidak dapat berubah
    const char nama [] = "aris";
    nama == "Momoi";
    printf("Output const %\n",nama);

    int jarijari;
    printf("Jari jari       : ");
    scanf("%d",&jarijari);
    const float phi = 3.14;
    printf("phi             : %.2f\n",phi);
    float luas = jarijari *jarijari * phi;
    printf("hasil luas      : %.2f\n",luas);

}
