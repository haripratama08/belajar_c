#include <stdio.h>

void main()
{
    char buff[300];
    FILE *pointer;

    printf("apakah ada file ? \n");

    if ((pointer = fopen("kuda.txt", "r")) == NULL)
    {// r untuk read dan w untuk write
        printf("Tidak ada file");
        exit(1);
    }
    else
    {
        printf("ada file \n");
        while (fgets(buff, sizeof(buff), pointer))
        {
            printf("%s", buff);
        }
    }
    fclose(pointer);
}