#include <stdio.h>


struct Mahasiswa
{
    char nama[100];
    char nim[100];
    char alamat[100];
    char tanggalLahir[100];
    char jenisKelamin;
    char jurusan[100];
    double nilai;
};


void display(struct Mahasiswa mhs)
{
    printf("Nama : %s\n", mhs.nama);
    printf("Alamat : %s\n", mhs.alamat);
    printf("Nilai: %.2lf\n", mhs.nilai);
}


int main()
{
    struct Mahasiswa kampus1[3], kampus2[3];
    
    printf("Input Nama : ");
    scanf("%[^\n]", kampus1[0].nama);
    getchar();
    
    printf("Input Nilai : ");
    
    scanf("%lf", &kampus1[0].nilai);
    getchar();



    display(kampus1[0]);

    return 0;
}


//Tugas Mingguan Struct
    
//Reqirement : Mahasiswa memiliki 2 struct yaitu identitas mahasiswa dan nilai mahasiswa
// identitas mahasiswa terdiri dari 3 komponen (nama,  alamat, jurusan)
// nilai mahasiswa terdiri dari 4 komponen (nilai semester 1,  nilai semester 2,  nilai semester 3,  nilai semester 4)
// buatlah sistem input dan output untuk entry data nilai mahasiswa dari semester 1 sampai semester 4 di 3 kampus cabang universitas X   

    
    