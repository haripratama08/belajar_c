#include <stdio.h>

void main()
{
    char txt[300];
    FILE *pointer;

    pointer = fopen("cobaNulis.txt", "w");
    for (int i = 0; i < 5; i++)
    {
        printf("Masukan data baris ke - %d : ", i+1);
        fgets(txt, sizeof(txt), stdin);
        fputs(txt, pointer);
    }

    printf("sudah selesai ditulis");
    fclose(pointer);
}
