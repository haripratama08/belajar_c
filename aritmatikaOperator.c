#include <stdio.h>
#include <math.h> // kalau pangkat harus menggunakan library ini

int main()
{
    // +, -, *, /, %, ^,  decrement,  increment
    double a = 10;
    double b = 12;

    double hasil;
    hasil = a++;
    // hasil =  a ,  a = a + 1
    
    // hasil = ++a;
    // a = a + 1 , hasil = a 
    printf("Hasil a++ = %.2lf \n",  a);
    
    // hasil = pow(a, b);
    // printf("Hasil 10 pangkat 12 = %.2lf \n",  hasil);

    // hasil = a + b;
    // printf("Hasil a + b = %.3f \n", hasil);

    // hasil = a - b;
    // printf("Hasil a - b = %.2lf ", hasil);

    // hasil = a * b;
    // printf("Hasil a * b = %.2lf \n", hasil);

    // hasil = a / b;
    // printf("Hasil a / b = %.2lf \n", hasil);

    // int c = 5;
    // int d = 2;
    // int hasilmod;
    // hasilmod = c % d;
    // printf("Hasil a mod b = %d \n", hasilmod);
    
    return 0;
}