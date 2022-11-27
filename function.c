#include <stdio.h>

// void add(int nilaiA, int nilaiB, int *nilaiTotal)
// {
//     *nilaiTotal = nilaiA + nilaiB;
// }

int tambah(int nilaiA, int nilaiB){
    return nilaiA  + nilaiB;
}

int kurang(int nilaiA, int nilaiB){
    return nilaiA  - nilaiB;
}

int kali(int nilaiA, int nilaiB){
    return nilaiA  * nilaiB;
}

int bagi(int nilaiA, int nilaiB){
    return nilaiA  / nilaiB;
}

int main()
{
    int nilaiA;
    int nilaiB;
    char operator;
    int total = 0;
    int hasilTotal;

    printf("Masukan nilai yang pertama : ");
    scanf("%d", &nilaiA);
    getchar();
    printf("Operator: ");
    scanf("%c", &operator);
    printf("Masukan nilai yang kedua : ");
    scanf("%d", &nilaiB);
    getchar();
    

    if(operator == "+"){
        int hasilTotal = tambah(nilaiA, nilaiB);
        printf("Hasil dari pertambahan %d dan %d adalah %d", nilaiA,nilaiB , hasilTotal);
    }else if(operator ==  "kurang"){
        int hasilTotal = kurang(nilaiA, nilaiB);
        printf("Hasil dari pertambahan %d dan %d adalah %d", nilaiA,nilaiB , hasilTotal);
    }else if(operator ==  "kali"){
        int hasilTotal = kali(nilaiA, nilaiB);
        printf("Hasil dari pertambahan %d dan %d adalah %d", nilaiA,nilaiB , hasilTotal);
    }else if(operator ==  "bagi"){
        int hasilTotal = bagi(nilaiA, nilaiB);
        printf("Hasil dari pertambahan %d dan %d adalah %d", nilaiA,nilaiB , hasilTotal);
    }else{
        printf("masuk else %s", operator);
    }
    
    // int hasil = tambah(nilaiA, nilaiB);
    // printf("%d", hasil);

    

    return 0;
}