#include <stdio.h>

void main()
{

    char buff[300];
    char buffRead[500];
    FILE *pointer;
    char namaFile[20];
    // memasukan nama file
    printf("%s", "Masukan nama file : ");
    scanf("%s", &namaFile);
    getchar();
    // melakukan check apakah file ada atau tidak ada
    if (pointer = (fopen(namaFile, "r") == NULL))
    {
        // jika nama tidak ada melakukan penulisan data
        printf("File tidak ada\n");
        printf("\n");
        pointer = fopen(namaFile, "w");
        for (int i = 0; i < 5; i++)
        {
            printf("Masukan data baris ke - %d : ", i + 1);
            fgets(buff, sizeof(buff), stdin);
            fputs(buff, pointer);
        }
        printf("selesai menulis file");
    }
    else
    {
        // jika ada maka akan membaca file
        pointer = fopen(namaFile, "r");

        printf("ada file \n");
        printf("\n");
        while (fgets(buff, sizeof(buff), pointer))
        {
            printf("%s", buff);
        }
    }
    fclose(pointer);
}