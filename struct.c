#include <stdio.h>
struct Mahasiswa
{
    char nama[100];
    double nilai;
};

// void display(struct Mahasiswa mhs)
// {
//     printf("Nama : %s\n", mhs.nama);
//     printf("Nilai: %.2lf\n", mhs.nilai);
// }

int main()
{
    struct Mahasiswa kampus1[100], kampus2[100];
    printf("Input Nama : ");
    scanf("%[^\n]", kampus1[0].nama);
    getchar();
    printf("Input Nilai : ");
    scanf("%lf", &kampus1[0].nilai);
    getchar();
    
    
    
        printf("Nama : %s\n", kampus1[0].nama);
    printf("Nilai: %.2lf\n", kampus1[0].nilai);
    
    // display(kampus1[0]);

    return 0;
}