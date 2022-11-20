#include <stdio.h>

void add(int nilaiA, int nilaiB, int *nilaiTotal)
{
    *nilaiTotal = nilaiA + nilaiB;
}



int tambah(int nilaiA, int nilaiB){
    printf("masuk sini");
    return nilaiA  + nilaiB;
}

int main()
{
    int nilaiA;
    int nilaiB;
    int total = 0;
    
    printf("Masukan nilai yang pertama : ");
    scanf("%d", &nilaiA);
    getchar();
    printf("Masukan nilai yang kedua : ");
    scanf("%d", &nilaiB);
    getchar();
    // int hasil = tambah(nilaiA, nilaiB);
    // printf("%d", hasil);
    add(nilaiA, nilaiB, &total);

    printf("Hasil dari pertambahan %d dan %d adalah %d", nilaiA,nilaiB ,total);

    return 0;
}