#include <stdio.h>

void main()
{
    char buff[300];
    FILE *pointer;

    printf("apakah ada file ?\n");

    if ((pointer = fopen("percobaan.txt", "r")) == NULL)
    {
        printf("Tidak ada file");
        exit(1);
    }
    else
    {
        printf("ada file\n");
        while (fgets(buff, sizeof(buff), pointer))
        {
            printf("%s", buff);
        }
    }
}