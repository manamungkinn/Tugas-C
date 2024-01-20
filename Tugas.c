#include <stdio.h>
#include <stdlib.h>         //berihin layar utk vscode
#include <conio.h>          //untuk turbo c++
#include <string.h>         //untuk penggunaan fgets

    // kalkulator sederhana
int main(){
    char operator;
    double nomor1;
    double nomor2;
    double result;
    char cekAngka1[50];
    char cekAngka2[50];



printf("\nMasukkan Operatornya (+ - * /) : ");
    scanf("%c", &operator); 

while (operator != '+' && operator != '-' && operator != '*' && operator != '/'){
    system("cls");          
    //clrscr();                                     //untuk kompiler turbo c++
    printf("Operator tidak valid. Coba lagi.");
    printf("\nMasukkan Operatornya (+ - * /) : ");
    scanf("%c", &operator);
}


int c;
while((c=getchar()) != '\n') {}  //buatt menghapus buffer sebelumnya (https://www.youtube.com/watch?v=N7-MueK2CX8)



    while(1)                           //(bilangan buat selain 0)==buat looping tanpa batas hingga kondisinya sudah benar
    {
    printf("\nMasukkan angka pertama : ");
    fgets(cekAngka1, 50, stdin);       //kita buat penginputannya terbaca sebagai string
    

//pemindahan otomatis jika diluar dari string akan dipindahkan otomatis ke "tipe dara 'nomor1'"
    if(sscanf(cekAngka1, "%lf", &nomor1)==1)   {      //sscanf merupakan string scanf(string yang dimasukkan oleh penginput)           
                                //==1 merupakan hasil dari penoperasian tersebut jika benar akan mengembalikan nilai 1 jika tidak akan 0(dan lompat ke else)
            break;
        } else{
            printf("\nmasukkan hanya angka yang valid");
        }       
}

    while(1)
    {
    printf("\nMasukkan angka kedua : ");
    fgets(cekAngka2, 50, stdin);
        if(sscanf(cekAngka2, "%lf", &nomor2)==1)   {
            break;
        }else{
            printf("\nmasukkan hanya angka yang valid");
        }
        
               
}

    //rumusnya
     if(operator == '+')
        {result = nomor1 + nomor2;
        printf("Hasilnya = %.1lf", result);

    }
        else if(operator == '-')
        {result = nomor1 - nomor2;
        printf("Hasilnya = %.1lf", result);

    }
        else if(operator == '*')
        {result = nomor1 * nomor2;
        printf("Hasilnya = %.1lf", result);

    }
        else if(operator == '/'){
        while(nomor2 == 0 ){
            printf("Pembagian tidak benar\n");
            printf("Masukkan angka kedua : ");
            fgets(cekAngka2, 50, stdin);
                if(sscanf(cekAngka2, "%lf", &nomor2)==1 && nomor2 != 0 )   {    //biar looping ketika inputan memasukkan huruf & angka 0(karna apapun dibagi nol tidak sah)
            break;
        }
    }
        result = nomor1 / nomor2;
        printf("Hasilnya = %.1lf", result);

}
    return 0;
}