#include <stdio.h>

// tipe data 
// int  : 1, 2, 3, 4, 5, 6, 7, 8, 9, 10        ||   %d
// long : int tetapi memiliki memory yang lebih banyak || %l     
// double : 3.14, 2.5, 3.19                    ||   %lf    
// float  : sama seperti double tetapi lebih kecil memory nya     ||  %f 
// String ===== Char (untuk satu huruf) dan Char[20] (untuk lebih dari satu huruf)    || %c     || %s
// boolean : true dan false (1 atau 0)  ||
    
void main(){
// SCAN 
// Memasukan nama
char nama[15];
scanf("%[^\n]",  &nama); getchar();
// scanf("%s", &nama); getchar();

// scanf("%s",  &nama); getchar();


// Memasukan gender
char gender;
scanf("%c",  &gender); getchar();

// Nilai
double nilai;
scanf("%lf",  &nilai); getchar();

printf("Nama : %s\n",  nama);

printf("Gender : %c\n",  gender);
printf("Nilai : %.3lf\n",  nilai);
}